#include <Arduino.h>
#include"connect.h"


void setup() {
  Serial.begin(230400);
  Connect_Wifi(SSID,PASS);
}

void loop() {
  // put your main code here, to run repeatedly:
}

