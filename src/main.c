#include <avr/io.h>
#include <util/delay.h>  // Aggiunto per usare _delay_ms()

#define BLINK 350

int main(void){
    DDRD |= (1 << PD7);  // Imposta il pin PD7 (Arduino D7) come uscita
    DDRD |= (1 << PD6);
    DDRD |= (1 << PD5);

    while(1){
        
        PORTD |= (1 << PD7);   // Accende il LED
        PORTD |= (1 << PD6);   // Accende il LED
        PORTD |= (1 << PD5);   // Accende il LED
        _delay_ms(BLINK);


        PORTD &= ~(1 << PD7);  // Spegne il LED
        PORTD &= ~(1 << PD6);  // Spegne il LED
        PORTD &= ~(1 << PD5);  // Spegne il LED
        _delay_ms(BLINK);

    }

    return 0;
}