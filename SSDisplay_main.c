/*
 * File:   SSDmain.c
 * Author: user
 *
 * Created on July 27, 2021, 8:57 AM
 */

#define _XTAL_FREQ 800000000
#include <xc.h>

void DELAY_ms(unsigned int ms_Count)
{
    unsigned int i,j;
    for(i=0;i<ms_Count;i++)
    {
        for(j=0;j<1000;j++);
    }
}


int main() {
    char seg_code[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};
    int i;

    /* Configure the ports as output */
    TRISC=0x00;

    while (1) 
    {
        for (i=0; i<= 9; i++) // loop to display 0-9
        {
            PORTC = seg_code[i]; 
            DELAY_ms(100);
        }
    }
}
