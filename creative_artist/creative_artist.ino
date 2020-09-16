//YWROBOT
//Compatible with the Arduino IDE 1.0
//Library version:1.1
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display
byte customChar[] = {
  B00000,
  B01010,
  B10101,
  B10001,
  B10001,
  B01010,
  B00100,
  B00000
};

void setup()
{
  lcd.init();                      // initialize the lcd 
  
  // Print a message to the LCD.
  lcd.backlight();
  lcd.createChar(0, customChar);
  lcd.home();
  lcd.setCursor(3,0);
  lcd.write(0);
  lcd.setCursor(4,0);
  lcd.write(0);
  lcd.setCursor(23,0);
  lcd.write(0);
  lcd.setCursor(24,0);
  lcd.write(0);
  lcd.setCursor(5,0);
  lcd.print("creative_artist___");
  lcd.setCursor(0,1);
  lcd.print("Welcome to my instagram page");
  delay(1000);
   
}


void loop()
{
  for (int positionCounter = 0; positionCounter < 13; positionCounter++)
  {
    lcd.scrollDisplayLeft();
    delay(500);
  }
  delay(2000);
}
