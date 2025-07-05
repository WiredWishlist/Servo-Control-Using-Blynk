#define BLYNK_TEMPLATE_ID "TMPL3vEbwTHIv"
#define BLYNK_TEMPLATE_NAME "Servo Control"
#define BLYNK_AUTH_TOKEN "93atRxDhveacHVFbVPqx-haG1V2cn59Y"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <ESP32Servo.h> 


char ssid[] = "GalaxyA";
char pass[] = "xyeb0000";

Servo myservo;
const int servoPin = 13;

BLYNK_WRITE(V1) {
  int angle = param.asInt();
  angle = constrain(angle, 0, 180);
  myservo.write(angle);
  Serial.print("Servo Angle: ");
  Serial.println(angle);
}

void setup() {
  Serial.begin(9600);


  myservo.setPeriodHertz(50);
  myservo.attach(servoPin, 500, 2400);     


  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();
}
