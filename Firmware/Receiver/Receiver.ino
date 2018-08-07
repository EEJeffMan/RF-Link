#include <SoftwareSerial.h>

#define   RXPIN   3
#define   TXPIN   2

SoftwareSerial rf_link(RXPIN, TXPIN);         // RX, TX

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  rf_link.begin(4800);
}

void loop() {
  // put your main code here, to run repeatedly:

  delay(50);
  if (rf_link.available())
  {
    Serial.print(rf_link.read());
  }
}
