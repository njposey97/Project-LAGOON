#include "Adafruit_HTU21DF.h"
#include <Wire.h>

//Create an instance of the object
Adafruit_HTU21DF myHumidity;
void setup()
{
  Serial.begin(9600);
  Serial.println("HTU21D Example!");
  Serial.println(myHumidity.begin());
  while(!myHumidity.begin()){
    Serial.println("Not Connected...");
  }
  Serial.println("Humidity and Temperature Sensor Connected");
}


void loop()
{
  //float humd = myHumidity.readHumidity();
  //float temp = myHumidity.readTemperature();

  Serial.println("Time:");
  Serial.println(millis());
  //Serial.println(" Temperature:");
  //Serial.println(temp, 1);
  //Serial.println("C");
  //Serial.println(" Humidity:");
  //Serial.println(humd, 1);
  //Serial.println("%");

  delay(1000);
}
