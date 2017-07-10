#ifndef config_h
#define config_h

#include "grbl.h"

#define BAUD_RATE 115200
#define RX_BUFFER_SIZE 32
#define TX_BUFFER_SIZE 50

#define BLOCK_BUFFER_SIZE 16
#define SETTINGS_VERSION 31

#define LINE_BUFFER_SIZE 30

#define GRBL_VERSION "1.0s"
#define GRBL_VERSION_BUILD "20170701"

#define CMD_RESET 0x18
#define CMD_CYCLE_START '~'
#define CMD_FEED_HOLD '!'

#define SEGMENT_BUFFER_SIZE 6

#define DWELL_TIME_STEP 50

#define HOMING_AXIS_SEARCH_SCALAR 1.1
#define HOMING_PULLOFF 10.0
#define HOMING_FEED_RATE 600.0
#define HOMING_DEBOUNCE_DELAY 200

#define EEPROM_ADDR_GLOBAL 1U
#define EEPROM_ADDR_PARAMETERS 512U

#define ACCELERATION_TICKS_PER_SECOND 100
#define ADAPTIVE_MULTI_AXIS_STEP_SMOOTHING
#define MINIMUM_JUNCTION_SPEED 0.0
#define MINIMUM_FEED_RATE 1.0

#endif
