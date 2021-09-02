#include <liquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
float temp;
int tempPin =A1;

void setup()
{
  pinMode (fan,Output);
  lcd.begin(16,3);
  lcd.setCursor(3,1);
  lcd.print("Fan auto.");
  delay(1000);
  lcd.clear();
  lcd.setcursor(1,0);
  lcd.print("temp. sensor");
  delay(1000);
  lcd.clear();
  
  
  lcd.print("cheque high and low temp");
  delay(2000);
  lcd.clear();
  lcd.print("Auto temp.");
  delay(2000);
  lcd.clear();
   
}
void loop()
{
  lcd.setCursor(3,0);
  lcd.print("provides comfort");
  lcd.setCursor(2,1);
  lcd.print("temp.");
  delay(3000);
  lcd.clear();
  lcd.setcursor(0,2);
  temp=analogRead(tempPin);
  temp=temp * 0.48828125;
  lcd.setcursor(0,0);
  lcd.print("Temp:");
  lcd.setcursor(5,1);
  lcd.print(temp);
  delay(3000);
  lcd.clear();
    if(temp <20)
    {
       analogWrite(9,0);
       lcd.print("Fan off");
       delay(2000);
       lcd.clear();
    }
    else if(temp<=22)
    {
       analogWrite(fan,51);
       lcd.print("Fan speed:20%");
       delay(2000);
       lcd.clear();
    }
  
    else if(temp<=24)
    {
       analogWrite(fan,102);
       lcd.print("Fan speed:40%");
       delay(2000);
       lcd.clear();
    }
    else if(temp<=26)
    {
       analogWrite(fan,153);
       lcd.print("Fan speed:60%");
       delay(2000);
       lcd.clear();
    }
    else if(temp<=28)
    {
       analogWrite(fan,200);
       lcd.print("Fan speed:80%");
       delay(2000);
       lcd.clear();
    }
    else if(temp<=30)
    {
       analogWrite(fan,255);
       lcd.print("Fan speed:100%");
       delay(2000);
       lcd.clear();
    }
      
    }
  
  
  
  
  
}


