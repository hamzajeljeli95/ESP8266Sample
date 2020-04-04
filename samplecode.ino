#include <ESP8266WiFi.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Setup Done.");
}

void loop() {
  // put your main code here, to run repeatedly:
  int i = 0;
  while (true)
  {
    i++;
    Serial.print("Running since ");
    Serial.print(i);
    Serial.println(" seconds");
    delay(1000);
  }
}
