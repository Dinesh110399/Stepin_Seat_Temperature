#include<avr/io.h>
#include <util/delay.h>
#include"Activity1.h"

void Activity1()
{
    DDRD &= ~(1<<PD0); //input pin Port D pin 1
    DDRD &= ~(1<<PD1);  //input pin Port D pin 2

    //Giving logic HIGH for the input pins/
    PORTD |= (1<<PD0);
    PORTD |= (1<<PD1);

    /*Giving the output @ pin0 Port B */
    DDRB |= (1<<PB1);

    if  ( (!(PIND & (1<<PD0))) & (!(PIND & (1<<PD1))) )
    {
        PORTB |= (1<<PB1);   //Turns on the LED if both the switches are turned on by the user
        _delay_ms(1000);
    }
    else
    {
       PORTB &= ~(1<<PB1);  //Turns Off the LED
        _delay_ms(1000);
    }
}
