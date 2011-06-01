#include "WProgram.h"
#include "SoftwareSerial.h"

// variables
int ledPin = PIN_B2; 
int counter = 0;

void setup()
{
	pinMode(ledPin, OUTPUT); 
}


void loop()
{
	digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin, LOW);
    delay(1000);
}


int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

