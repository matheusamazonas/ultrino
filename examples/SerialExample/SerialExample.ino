#include <Ultrino.h>

Ultrino us(2,4);

void setup() {
  Serial.begin(9600);
  while (!Serial) {
  }
  us.begin();
  Serial.println("Setup is done");
}

void loop() {
  Serial.print("Distance: ");
  Serial.println(us.getDistance());
  delay(60);	// Recommended by manufacturer
}
