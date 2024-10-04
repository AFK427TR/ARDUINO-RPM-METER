int hall = 0;
int deger = 0;
int hiz = 0;
void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  if (analogRead(1) <= 100 && deger == 0 ) {
    deger = 1;
    hiz = millis() - deger;
    deger = millis();
  }
  if (analogRead(1) >= 100 && deger == 1) {
    deger = 0;

  }
}
