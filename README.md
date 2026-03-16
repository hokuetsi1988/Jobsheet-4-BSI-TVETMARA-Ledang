# Jobsheet-4-BSI-TVETMARA-Ledang
## 🫩 last jobsheet for this course
Its the last 10 days of ramadan, and I will be going back home soon. Im typing this at 17/3 at 0429, got test at 1100. what the hell am I even doing anymore.

alright enough sobstory unc. heres what we're going to do in this jobsheet

```
1. Control the board led, relay pin, and DHT sensor from the serial monitor
2. Setup Blynk on Desktop and mobile device for monitoring the DHT sensor and control the relay pin
3. Reap the rewards that we sow (Check the results lol) 
```
surely, this will be easy if youre into this course for long enough. if it didn't then its okay, this documentation is here to help you after all. Made with love from your friend in ICT course.

### 🛠️ Components we need
1. ESP32 [Product Link](https://my.cytron.io/p-nodemcu-esp32-with-expansion-board)
2. DHT22 [Product Link](https://my.cytron.io/p-dht22-sensor-module-breakout)
3. 1 330Ω Resistor [Product  Link](https://my.cytron.io/p-500-1-4w-resistor-kit-1-10mohm-50-resistances)  [(Alternative site)](https://shopee.com.my/product/20221256/11306988498?d_id=3fba3&uls_trackid=54rjo64d02ue)
4. LED [Product Link](https://my.cytron.io/p-led-super-bright-3mm)
5. Single Channel 5V relay module [Product Link](https://my.cytron.io/p-single-channel-5v-relay-breakout-board)
6. Breadboard [Product Link](https://my.cytron.io/p-breadboard-mini-170-holes-35mmx42mm)
7. Jumper [Product Link](https://my.cytron.io/p-40-way-20cm-dupont-jumper-wire)

### 🖼️ Schematics
If youre confused on how to wire them, check this section. Physical setup and wiring diagram are here. 

(Physical Setup)

(Wiring Diagram)


### 🌐 Controlling the sensors and pin in serial monitor
Now this is pretty simple, we have a 2 output components namely the board led and the relay pin connected to LED. We also have 1 sensor, the DHT that can read humidity and temperature. Open the file named "BSI_JS4_Task2_PartA", we will be using that source code 

> Workflow ⬇️

Opening the serial monitor at 115200 baudrate will show what number will trigger what component. So keying in respective number should supposedly do as what we programmed it to be. Dont spin your head too much on the last 2 sentences, I thought of providing you with a tiktok video would be more self explanatory.

> Video link ⬇️

(Post it on tiktok i guess)

### 🌐 Setup Blynk on Desktop and Mobile Device
If you followed my previous video on JS3 about monitoring the DHT sensor via Blynk, you might already know how to setup the template, datastream, devices and dashboard in Blynk. 

You didnt? Thats completely fine. Even though the process is pretty much the same, I did a video on how to do it. We will be using different source code though, open the file named "BSI__JS4_Task3_PartC"

> Video link ⬇️

(Maybe this one post on youtube)

### 🌐 Check the results
Alright, were almost there. Again, theres another video I made on result checking after setting up Blynk. So do check it out for clarity
> Video link ⬇️

(This one should be on youtube too or idk lol)

> Things to note in this section ❗

The relay pin might not work instantly the moment you interact with the button on the dashboard, and to that I say it is completely normal. It could be due to connection ping. If the relay pin is not responding to the button at all, try changing your WiFi connection to the same WiFi your ESP32 connected on. Also try checking the ESP32 is connected to the Blynk server or not. It should show the status of the device is online in blynk. you can also check it on the serial monitor.

## End of the line
---
Congratulations to you, anonymous reader. You made it to the end of the jobsheet. Now that we are done here, I can focus on my mini project. Dont worry, its also in the same course. I will be doing another repo explaining on how I do it I guess. For now, I want to enjoy my holiday. Till we meet again!
