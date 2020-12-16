#include <LiquidCrystal>

void setup() {
  Serial.begin(115200);
  Serial.println();
  Serial.println("MiniBar, 2020-12-14");
}

void loop() {
  delay(333);
  Serial.println(String(millis()) +" "+String(test()));
}
