#include <Servo.h>

Servo Servo1;
Servo Servo2;
Servo Servo3;
Servo Servo4;

int servoPin = 9;
int potPin = A0;

int servoPin2 = 10;
int potPin2 = A1;

int servoPin3 = 11;
int potPin3 = A2;

int servoPin4 = 8;
int potPin4 = A3;

void setup() {
    Servo1.attach(servoPin);
    Servo2.attach(servoPin2);
    Servo3.attach(servoPin3);
    Servo4.attach(servoPin4);
    
}


void loop() {
    int reading = analogRead(potPin);
    int angle = map(reading, 0, 1023, 0, 180);
    Servo1.write(angle);
    
     int reading2 = analogRead(potPin2);
    int angle2 = map(reading2, 0, 1023, 0, 180);
    Servo2.write(angle2);
    
     int reading3 = analogRead(potPin3);
    int angle3 = map(reading3, 0, 1023, 0, 180);
    Servo3.write(angle3);
    
     int reading4 = analogRead(potPin4);
    int angle4 = map(reading4, 0, 1023, 0, 180);
    Servo4.write(angle4);
}