#include "ESP8266WiFi.h"

void setup() {
  Serial.begin(115200);
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("WiFi network scanning has been started...........");
  int n=WiFi.scanNetworks();
  Serial.println("no.of networks found are");
  for(int i=1;i<=3;i++)
  {
   Serial.print( WiFi.SSID(i));
   Serial.print("\t");
   Serial.println(WiFi.RSSI(i));
  }
  Serial.println("scanning is stopped...........");
  delay(100);

}
