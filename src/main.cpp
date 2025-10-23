#include <Arduino.h>

void setup() {
  Serial.begin(115200);
  delay(1000);
}

void loop() {
  int ldrValue = analogRead(LDR_PIN);  // LDR_PIN = 39 từ build_flags

  // Gửi dữ liệu đúng format Teleplot
  Serial.print(">light:");
  Serial.println(ldrValue);

  delay(200); // gửi mỗi 200ms
}
