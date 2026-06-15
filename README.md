# Smart Heart Rate Monitor

IoT-Based Heart Rate Monitoring and Alert System Using ESP32

This project presents an IoT-based heart rate monitoring and alert system developed using the ESP32 microcontroller. The system continuously monitors heart rate values and displays the measured Beats Per Minute (BPM) on an OLED display. Abnormal heart rate conditions are indicated through visual and audible alerts using an LED and buzzer.

## Features

- Real-time heart rate monitoring
- OLED display for BPM visualization
- Detection of abnormal heart rate conditions
- Buzzer and LED alert mechanism
- ESP32-based implementation
- Simulation using the Wokwi platform

## Components Used

- ESP32 DevKit V1
- Potentiometer (simulated pulse sensor)
- SSD1306 OLED Display
- Buzzer
- LED
- Jumper Wires

## Software and Libraries

- Wokwi Simulator
- Arduino IDE
- Adafruit GFX Library
- Adafruit SSD1306 Library

## Working Principle

The potentiometer simulates pulse sensor readings by generating varying analog values. The ESP32 reads these values and converts them into Beats Per Minute (BPM). The BPM value is displayed on the OLED screen. When the measured heart rate falls outside the predefined normal range, the buzzer and LED are activated to provide an alert.

## Applications

- Patient vital sign monitoring
- Biomedical engineering education
- Healthcare monitoring demonstrations
- Embedded systems learning
- IoT-based medical device prototyping

## Future Enhancements

- Integration with a real pulse sensor such as MAX30102
- Addition of SpO₂ monitoring
- Cloud-based data storage
- Mobile notification support
- Remote patient monitoring capabilities
