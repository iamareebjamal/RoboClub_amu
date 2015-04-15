/*
 * MazeSolver.c
 *
 *  Created: 07-04-2015 06:46:47
 *  Author: Areeb
 */ 


#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL


void straight(){
	PORTB = 0b00000101;
	_delay_ms(1000);
	PORTB = 0x00;
	_delay_ms(250);
}

void left(){
	PORTB = 0b00000100;
	_delay_ms(1000);
	PORTB = 0x00;
	_delay_ms(250);
}

void right(){
	PORTB = 0b00000001;
	_delay_ms(1000);
	PORTB = 0x00;
	_delay_ms(250);
}

void hard_left(){
	PORTB = 0b00000110;
	_delay_ms(1000);
	PORTB = 0x00;
	_delay_ms(250);
}

void hard_right(){
	PORTB = 0b00001001;
	_delay_ms(1000);
	PORTB = 0x00;
	_delay_ms(250);
}

void back(){
	PORTB = 0b00001010;
	_delay_ms(1000);
	PORTB = 0x00;
	_delay_ms(250);
}

void stop(){
	PORTB = 0x00;
}



int main(void)
{
	DDRA = 0x00;
	DDRB = 0xFF;
    while(1)
    {
        //TODO:: Please write your application code 
	if(PINA==0b00000101)
		straight();
	else if(PINA==0b00000001)
		left();
	else if(PINA==0b00000100)
		right();
	else if(PINA==0b00000111)
		back();
	else
		stop();
		
    }
	return 0;
}
