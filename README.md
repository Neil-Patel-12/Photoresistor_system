# Photoresistor System

1 Minute YouTive demo here: https://youtube.com/shorts/ahNRX9OBzso?si=bDURmdIfRUzylL2D <br>
PDF version here: [Photoresistor_system.pdf](https://github.com/Neil-Patel-12/Photoresistor_system/files/12449112/Photoresistor_system.pdf)
## Pictures
![All_pics](https://github.com/Neil-Patel-12/Photoresistor_system/assets/108227267/94ee3cfd-4463-419c-bf22-bbf8010ca08d) <br>
**Circuit Diagram (TinkerCAD circuit)** <br>
![CAD_disign](https://github.com/Neil-Patel-12/Photoresistor_system/assets/108227267/727dcf07-ed47-48fe-9cbf-08cf2bc9b58e) <br>
**The project was coded using the Arduino IDE and its components**

## User Needs and Personal Research Conduction
When I bought the Arduino Uno Kit, I didn’t really know how to use many of the components the kit had to offer. But in my research about the functionalities of the components, I realized I can make a simplified version of Solar Panel Pathway Lights to put outside of your house.
## Functionality
What these lights do is charge up during the day with the sun’s ultraviolet radiation hitting the solar panels. Then at night, the photoresistor detects that there is an absence of light, so it will signal the small pathway lights to turn on. 
## identify Needs
Users of this pathway lights system would be for people arriving home late from work as it helps them reach their door safely. People with gardens can use these lights to look at their garden at night. Also, in the real world, there are road lights on many roads and neighborhoods to help people see better when driving or walking in the dark. In general, these lights are useful to guide people around at night.
## Designing idea and Research 
When I was reading about these pathway lights on https://home.howstuffworks.com/solar-light.htm , I understood how the lights were turning on at night and thought I should give this a try. This design is developed with the use of a photoresistor. “A photoresistor is a sensor that changes its resistance when light shines on it. The resistance generated varies depending on the light striking at his surface” (sciencedirect). <br>
**The main take away here is:** The photoresistor is the part of a solar light that tells it when to turn on and off. During the day, the photocell is exposed to daylight, and this prevents electricity from flowing through it to the LED light. <br>
<br>
In the article they talked about how, “at night, the solar cells stop producing power. The photoresistor turns on the LED” (howstuffworks). So, **I used this as inspiration and incorporated this simple idea** into my Arduino Uno build. I did not get the chance to incorporate a solar panel system, but when I find one, I’ll definitely give it a go. I also learned more about resistors and how they regulates the flow of electrical current in an electronic circuit (techtarget). 
## Circuits Function Description
This is a working photoresistor system. When the light is on the photoresistor, the LED is turned off. When there is no light present on the photoresistor, the LED light is on. The LED light works with a resistor set to 220 Ohms of energy connected to terminal 1 on the LED on the negative side. On terminal 2, there is a green wire connected to the Arduino uno pin #9 anode. This is a system because the photoresistor and the LED is connected in a series. The red wire is used to ground the photoresistor. Then on terminal 2 for the photoresistor there are two things connected one being a blue wire connected to the bread board and the Arduino uno on Analog zero, because this is an analog system. The other is a resistor set to 4.7 Kilo Ohms worth of resistance that is connected to the power source with the green wire which is connected to the other side of the 4.7 Kilo Ohms resistor making the system work.
## Work Cited
https://www.sciencedirect.com/topics/engineering/photoresistors <br>
https://home.howstuffworks.com/solar-light.htm <br>
https://www.techtarget.com/whatis/definition/resistor#:~:text=A%20resistor%20is%20an%20electrical,device%20such%20as%20a%20transistor <br>
