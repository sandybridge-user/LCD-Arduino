#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


void setup() {

}

void loop() {

  lcd.begin( 16, 2 );
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Test Mode...");
  delay(2000);


  lcd.begin( 16, 2 );
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Display every 2");
  lcd.setCursor(0, 1);
  lcd.print("seconds.");
  delay(2000);
}
