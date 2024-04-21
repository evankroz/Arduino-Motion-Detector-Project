#include <Servo.h>

#define PIR_PIN 2 // PIR sensor connected to pin 2

Servo myservo_9; // create servo object to control a servo
Servo myservo_10;

void setup() {
  myservo_9.attach(9);
  myservo_10.attach(10);
  
  pinMode(PIR_PIN, INPUT); // Set PIR pin as input
}

void loop() {
  myservo_9.write(0);
  myservo_10.write(0);
  if (digitalRead(PIR_PIN) == HIGH) { // Check if PIR sensor detects motion
    myservo_9.write(180); // Set servo 1 to 180 degrees
    myservo_10.write(180); // Set servo 2 to 180 degrees
    delay(1000); // Wait for 1 second (optional delay)	
  }else{
    myservo_9.write(0);
    myservo_10.write(0);
  	delay(1000);
  }
}
