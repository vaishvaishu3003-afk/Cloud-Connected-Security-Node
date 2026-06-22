# Cloud Connected Security Node

## Project Overview

A smart security monitoring system built using ESP32, HC-SR04 Ultrasonic Sensor, LED, and Buzzer.

The system continuously monitors the distance of nearby objects and activates an alert whenever an object is detected within 50 cm.

---

## Components Used

- ESP32
- HC-SR04 Ultrasonic Sensor
- LED
- Buzzer
- Wokwi Simulator

---

## Features

- Real-Time Distance Monitoring
- Intruder Detection
- LED Warning Indicator
- Buzzer Alarm
- Serial Monitor Alerts

---

## Working Principle

1. HC-SR04 measures the distance.
2. ESP32 processes the sensor data.
3. If distance is less than 50 cm:
   - LED turns ON
   - Buzzer turns ON
   - Alert message displayed
4. If distance is greater than 50 cm:
   - LED OFF
   - Buzzer OFF
   - Area Secure message displayed

---

## Screenshots

### Circuit Diagram

![Circuit](screenshots/circuit.png)

### Safe Mode

![Safe Mode](screenshots/safe-mode.png)

### Intruder Alert

![Intruder Alert](screenshots/intruder-alert.png)

---

## Author

Vaishnavi Pasham