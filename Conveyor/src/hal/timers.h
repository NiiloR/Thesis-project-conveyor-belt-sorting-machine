/*
 * HAL Timers: initializes hardware timers and provides a millisecond
 * timebase for scheduling and timestamps.
 */
#pragma once
#include <stdint.h>

/** Initialize Timer0 to generate a 1kHz millisecond tick. */
void timers_init(void);

/** Get milliseconds since timers_init() using an ISR-driven counter. */
uint32_t millis(void);
