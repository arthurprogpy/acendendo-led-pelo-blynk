#define BLYNK_TEMPLATE_ID "_"
#define BLYNK_TEMPLATE_NAME "+"
#define BLYNK_AUTH_TOKEN "+"

#define BLYNK_PRINT Serial

#include "WiFi.h"
#include "WiFiClient.h"
#include "BlynkSimpleEsp32.h"

char auth[] = BLYNK_AUTH_TOKEN;

char ssid[] = "_";
char pass[] = "_";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
