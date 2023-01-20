#define F_CPU 20000000UL

#include <util/delay.h>
#include <avr/io.h>

int main(void)
{
  DDRB  = 0xff;
  PORTB = 0;

  unsigned char b;
  while(1)
    {
      b = PORTB;
      PORTB = ~(b & 0xf0) | (b & 0x0f);
      _delay_ms(500);
  }
}
