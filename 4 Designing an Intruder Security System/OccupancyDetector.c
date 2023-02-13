/*
 * OccupancyDetector.c
 *
 *  Created on: Jan 30, 2023
 *      Author: Andrew McGlynn
 */
#include <msp430.h>

int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;   // stop watchdog timer
    //Configure GPIO
    P1OUT &= ~BIT0;                         // Clear P1.0 output latch for a defined power-on state
       P1DIR |= BIT0;
}




