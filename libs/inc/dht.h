#ifndef _DHT_H_
#define _DHT_H_

#include "pico/stdlib.h"
#include "hardware/uart.h"

//setup for DHT
//connect DHT signal to GPIO15
const uint LED_PIN = PICO_DEFAULT_LED_PIN;
const uint DHT_PIN = 15;
const uint MAX_TIMINGS = 85;

typedef struct {
    float humidity;
    float temp_celsius;
} dht_reading;

void read_from_dht(dht_reading *result);


#endif  /* _DHT_H_ */