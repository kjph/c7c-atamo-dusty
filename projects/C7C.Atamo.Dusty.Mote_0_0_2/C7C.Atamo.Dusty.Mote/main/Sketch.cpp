﻿/*Begining of Auto generated code by Atmel studio */
#include <Arduino.h>

/*End of auto generated code by Atmel studio */

#include <Wire.h>
#include <SPI.h>

#include <duinoPRO.h>
//Beginning of Auto generated function prototypes by Atmel Studio
//End of Auto generated function prototypes by Atmel Studio



void setup() {
  // put your setup code here, to run once:
  duinoPRO myBaseBoard;
  myBaseBoard.setLed(true);

  digitalWrite(1,HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:

}