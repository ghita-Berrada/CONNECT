#include"connect.h"

void Connect_Wifi(String ssid, String password){
    Serial.print("\n Connecting to wifi");
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid,password);
    unsigned long startTime = millis();
    while (WiFi.status()!= WL_CONNECTED && millis() - startTime < 5000){
        Serial.print(".");
        delay(100);
    }
    if (WiFi.status() == WL_CONNECTED)
    { 
        Serial.println("Connected");
        Serial.println(WiFi.localIP());
       
    }
    else
    {
        Serial.println("Failed");
    }
    
    
}