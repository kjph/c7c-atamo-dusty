/*
 * dn_time.c
 *
 * Created: 2017-09-26 02:11:13
 *  Author: kjph
 */ 

#include "../time/ITime.h"

typedef unsigned long int uint32_t;//TODO: fix this hack lol

uint32_t dn_time_ms(void)
{
    return dp_time_now();
}

void dn_sleep_ms(uint32_t milliseconds)
{
    dp_delay(milliseconds);//TODO: replace this with a sleep func
}