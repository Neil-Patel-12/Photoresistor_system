// from the Arduino IDE 2.0.4
// Arduino Uno on COM3
// C++ code
//
int Photo_sensor = 0;

//Sketch uses 2552 bytes (7%) of program storage space. Maximum is 32256 bytes.
//Global variables use 190 bytes (9%) of dynamic memory, leaving 1858 bytes for local variables. 

void setup()
{
	pinMode(A0, INPUT);
	Serial.begin(9600);
	PinMode(9, OUTPUT);
}

void loop()
{
	Photo_sensor = analogRead(A0);
	Serial.println(Photo_sensor);
	analogWrite(9, map(Photo_sensor, 0, 1023, 0, 255));
	delay(10); // Wait for 10 millisecond(s)
}