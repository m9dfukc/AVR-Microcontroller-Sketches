#include "WProgram.h"
#include "RotationCounter.h"

extern "C" void __cxa_pure_virtual() { while (1); }

// variables
//RotationCounter counter;
RotationCounter counter = RotationCounter( 0, 3, 13 );

void setup(){
	Serial.begin(9600);
	
	

}


void loop(){
	//counter.update();
	
	
}


int main(void)
{
	init();

	setup();
    
	for (;;)
		loop();
        
	return 0;
}

