#include <SoftwareSerial.h>

// software serial #2: RX = digital pin 8, TX = digital pin 9
// on the Mega, use other pins instead, since 8 and 9 don't work on the Mega
SoftwareSerial portTwo(8, 9);

uint8_t inByte = 0;

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  // Start each software serial portm
  portTwo.begin(9600);

  digitalWrite(LED_BUILTIN, LOW);
}

void loop() {


  // Now listen on the second port
  portTwo.listen();
  // while there is data coming in, read it
  // and send to the hardware serial port:
  while (portTwo.available() > 0) {
    inByte = portTwo.read();
    if (inByte > 0) {
      Serial.print("Data from port two: ");
      Serial.print(inByte, HEX);
      Serial.print("\n");
    }
  }
}
