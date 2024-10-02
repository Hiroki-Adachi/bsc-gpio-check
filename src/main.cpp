#include <Arduino.h>

HardwareSerial MySerial(1);

void setup() {
  pinMode(BUILTIN_LED, OUTPUT);
  digitalWrite(BUILTIN_LED, HIGH);

  pinMode(GPIO_NUM_5, OUTPUT);
  pinMode(GPIO_NUM_6, OUTPUT);
  digitalWrite(GPIO_NUM_5, LOW);
  digitalWrite(GPIO_NUM_6, LOW);
  pinMode(GPIO_NUM_17, OUTPUT);
  pinMode(GPIO_NUM_18, OUTPUT);
  digitalWrite(GPIO_NUM_17, LOW);
  digitalWrite(GPIO_NUM_18, LOW);

  MySerial.begin(115200, SERIAL_8N1, 34, 33);

  delay(5000);

  MySerial.println("START");
}

void loop() {
  digitalWrite(GPIO_NUM_5, HIGH);
  digitalWrite(GPIO_NUM_6, HIGH);
  digitalWrite(GPIO_NUM_17, HIGH);
  digitalWrite(GPIO_NUM_18, HIGH);
  digitalWrite(BUILTIN_LED, HIGH);
  MySerial.println("HIGH");
  delay(5000);
  digitalWrite(GPIO_NUM_5, LOW);
  digitalWrite(GPIO_NUM_6, LOW);
  digitalWrite(GPIO_NUM_17, LOW);
  digitalWrite(GPIO_NUM_18, LOW);
  digitalWrite(BUILTIN_LED, LOW);
  MySerial.println("LOW");
  delay(5000);
}
