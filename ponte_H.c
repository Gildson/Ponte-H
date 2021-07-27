#include <avr/io.h>

int main(){
  PORTD |= 0b01111100;
  PORTD &= 0b01111111;
  
  while(1){
    //chave em nível baixo liga os motores
    if((PIND & 0b10000000) == 0b00000000){
      
    //sentidos opostos
    PORTD |= 0b00000100;
    PORTD &= 0b11110111;
      
    PORTD |= 0b00010000;
    PORTD &= 0b11011111;
    }else{
      PORTD |= 0b00111100;
    }
  }
}