

#include <LiquidCrystal.h>

#include <Thermistor.h>

Thermistor temp(0);

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);

int temperature = temp.getTemp();

  lcd.begin(16,2);
  lcd.setCursor (0,0);
  lcd.print("Temperatura eh");
   lcd.setCursor (0,1);
   lcd.print(temperature);
    lcd.print("C");
   

 
}

void loop() {
  // put your main code here, to run repeatedly:



 
}
