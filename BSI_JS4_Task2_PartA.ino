#include "DHT.h"
#define DHTPIN 27
#define DHTTYPE DHT11
#define relay 26
#define bLED 2

DHT dht(DHTPIN, DHTTYPE);

void setup() 
{
  Serial.begin(115200);
  pinMode(bLED, OUTPUT);
  pinMode(relay, OUTPUT);
  dht.begin  ();

  while (!Serial);
  Serial.println("Type 1 to turn relay ON");
  Serial.println("Type 2 to turn relay OFF");
  Serial.println("Type 3 to turn bLED ON");
  Serial.println("Type 4 to turn bLED OFF");
  Serial.println("Type 5 to read humidity value");
  Serial.println("Type 6 to read temperature value");
}

void loop()
{
  if (Serial.available())
  {
    int state = Serial.parseInt();

    if (state == 1)
    {
      digitalWrite(relay, LOW);
      Serial.println("Relay turned ON");
    }
    if (state == 2)
    {
      digitalWrite(relay, HIGH);
      Serial.println("Relay turned OFF");
    }
    if (state == 3)
    {
      digitalWrite(bLED, HIGH);
      Serial.println("LED turned ON");
    }
    if (state == 4)
    {
      digitalWrite(bLED, LOW);
      Serial.println("LED turned OFF");
    }
    if (state == 5)
    {
      float h = dht.readHumidity();
      if(isnan(h))
      {
        Serial.println("Humidity Read Failure");
      }
      Serial.print(F("Humidity : "));
      Serial.print(h);
      Serial.println(F("%"));
    }
    if (state == 6)
    {
      float t = dht.readTemperature();
      if(isnan(t))
      {
        Serial.println("Temperature Read Failure");
      }
      Serial.print(F("Temperature : "));
      Serial.print(t);
      Serial.println(F("°C"));
    }
  }
}
