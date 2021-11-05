#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int led = 6;
int infrared = 2;
int val = 0;
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup()
{
  lcd.init();
  lcd.init();
  lcd.backlight();
  pinMode(led, OUTPUT);
  pinMode(infrared, INPUT);
  lcd.setCursor(0, 0);
  lcd.print("Hand washing");
  Serial.begin(9600);
}



void loop()
{
  val = digitalRead(infrared);
  if (val == 0) {
    digitalWrite(led, HIGH);
    lcd.setCursor(0, 1);
    lcd.print("Detect Hand");
  } else {
    digitalWrite(led, LOW);
    lcd.setCursor(0, 1);
    lcd.print("Insert Hand");
  }
  Serial.println(val);
  delay(500);
}
