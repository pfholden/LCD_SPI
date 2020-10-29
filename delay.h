/* 
 * File:   delay.h
 * Author: pfholden
 *
 * Created on October 13, 2020, 9:59 PM
 */

#ifndef DELAY_H
#define	DELAY_H

#ifdef	__cplusplus
extern "C" {
#endif

#define FCPU 48000000
#define cyclesLoop 6
  
void delay(int ms);


#ifdef	__cplusplus
}
#endif

#endif	/* DELAY_H */

