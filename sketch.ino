#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define PULSE_PIN 34
#define BUZZER 19
#define LED 18

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

void setup() {
  Serial.begin(115200);
  pinMode(BUZZER, OUTPUT);
  pinMode(LED, OUTPUT);
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println("OLED failed");
    while (true);
  }
  display.clearDisplay();
  display.setTextColor(WHITE);
  display.setTextSize(2);
  display.setCursor(5, 20);
  display.println("HEART");
  display.println("MONITOR");
  display.display();
  delay(2000);
}
void loop() {
  int sensorValue = analogRead(PULSE_PIN);
  int bpm = map(sensorValue, 0, 4095, 40, 140);
  display.clearDisplay();
  display.setTextSize(1);
  display.setCursor(0, 0);
  display.println("Heart Rate Monitor");
  display.setTextSize(3);
  display.setCursor(20, 20);
  display.print(bpm);
  display.print(" BPM");
  display.setTextSize(1);
  display.setCursor(0, 55);
  if (bpm < 60 || bpm > 100) {
    display.print("Status: Abnormal");
    digitalWrite(LED, HIGH);
    tone(BUZZER, 1000);
  } else {
    display.print("Status: Normal");
    digitalWrite(LED, LOW);
    noTone(BUZZER);
  }
  display.display();
  Serial.print("Heart Rate: ");
  Serial.print(bpm);
  Serial.println(" BPM");

  delay(1000);
}
