
#include <Thermistor.h>
#include <LiquidCrystal.h>
 
Thermistor temp(1); 
 
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup() {
Serial.begin(9600);
lcd.begin(16, 2);
}
 
void loop() {

float temperature = temp.getTemp(); 

Serial.print("Temperatura: ");
Serial.print(temperature);
Serial.println("°C");
 
//imprimindo no LCD
lcd.setCursor(0,0); 
lcd.print("Temp = ");
lcd.print(temperature);
lcd.write(B11011111); 
lcd.print("C");
 
delay(1000);
}
