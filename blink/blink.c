// This works 13 is GND and 13 is positive
// Have to look at Arduino pin mapping because they're not the same
// as Atmega pins

#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void){
	DDRB|=(1<<PB5); // set PD6 (pin 11) output
	for(;;){
		// PORTB|=(1<<PB5); // set PD
		// _delay_ms(10000); // wait
		// PORTB&=~(1<<PB5);// set PD6 low
		// _delay_ms(10000); // wait
        PORTB^=(1<<PB5); // set PD
		_delay_ms(1000); // wait
		
	}

}
