# ESP32 Servo Control using Blynk App

This project demonstrates how to control a *9g micro servo motor* using an *ESP32* and the *Blynk IoT app*.

## 🎮 Features
- Set servo angle to *0°, **90°, and **180°* from Blynk app

## ⚙ Hardware Connections

| ESP32 Pin | Servo Wire     | Description       |
|-----------|----------------|-------------------|
| GND       | Brown          | Ground            |
| GPIO 13   | Yellow         | PWM Signal        |
| 3.3V      | Red            | Power (VCC)       |


## 📱 Blynk Setup

1. Create a new Blynk project (Template + Device)
2. Add a *Menu Widget* or *Buttons* with Virtual Pin V1
3. Set values: 0, 90, 180 (degrees)
4. Copy the Auth Token into the Arduino code

## 🔌 Dependencies

- Blynk Library
- ESP32 board support
- ServoESP32 Library (not standard Servo.h)

## ✍ Project By

*Akash Sasikumar*  
Basic IoT Servo Motor Project with Blynk
