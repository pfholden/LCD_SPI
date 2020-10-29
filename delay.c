#include "delay.h"

void delay(int ms) 
{
    int n = FCPU*ms/1000*cyclesLoop;
    for (int i = 0; i < n; i++);  
    asm("nop"); 
    
}



