#include <SoftwareSerial.h>
SoftwareSerial BTserial(2, 3); // RX | TX
// Connect the HC-05 TX to Arduino pin 2 RX. 
// Connect the HC-05 RX to Arduino pin 3 TX through a voltage divider.

void setup()
{
   Serial.begin(38400);
   BTserial.begin(38400);
   Serial.println("Bluetooth send and receive test.");
}

void loop()
{
   if (Serial.available())
   {
      BTserial.write(Serial.read());
   }
   if (BTserial.available())
   {
      Serial.print(char(BTserial.read()));
   }
}
