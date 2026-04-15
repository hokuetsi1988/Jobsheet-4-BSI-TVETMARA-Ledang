#define BLYNK_TEMPLATE_ID "TMPL6GufI1YRx"
#define BLYNK_TEMPLATE_NAME "Jobsheet 4 BSI yey"
#define BLYNK_AUTH_TOKEN "HXxt8Hjc6KWR0AITlzhmFA1XK0RsINX_"
#define BLYNK_PRINT Serial
#define DHTPIN 27
#define DHTTYPE DHT11
#define relayPin 26
#define initialState 0
#define highTempState 1
#define relay(x) digitalWrite(26, (x)?HIGH:LOW)

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "SabaSameko";
char pass[] = "SukaBumi";

BlynkTimer timer;

DHT dht(DHTPIN,DHTTYPE);

uint8_t buttonV2Value = 0;
uint8_t state = 0;

BLYNK_WRITE(V2)
{
  buttonV2Value = param.asInt();
  relay(buttonV2Value);
}

void sendSensor()
{
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  
  if(isnan(h) || isnan(t))
  {
    Serial.println("Reading Failed");
    return;
  }

  Blynk.virtualWrite(V0,t);
  Blynk.virtualWrite(V1,h);
  Serial.print("Temperature : ");
  Serial.print(t);
  Serial.print("°C");
  Serial.print("     Humidity :");
  Serial.print(h);
  Serial.println("%");

  if(state == initialState)
  {
    if(t > 31.0)
    {
      relay(1);
      state = highTempState;
    }
  }

  if(state == initialState)
  {
    if(t > 30.7)
    {
      relay(0);
      state = initialState;
    }
  }
}
void setup()
{
  Serial.begin(115200);
  pinMode(relayPin, OUTPUT);

  Blynk.begin(auth, ssid, pass);
  dht.begin();
  timer.setInterval(1000L, sendSensor);
}

void loop()
{
  Blynk.run();
  timer.run();
}
