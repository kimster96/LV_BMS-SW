/**
 * \mainpage
 *
 * This is the main page of the LV BMS software documentation.
 *
 * \tableofcontents
 * 
 * \section requirements Requirements
 * 
 * The LV BMS has a set of requirements imposed by both the FSG rules and internal requirements. The summary of requirements is lested as follows
 *
 * FSG Rules requirements:
 * \li Monitor all cell voltages
 * \li Monitor >30% of cell temperatures
 * \li Monitor the output current
 * \li Transmit the above measurements through CAN
 * \li Interrupt the output if the voltages exceed the limits for more than 500 ms
 * \li Interrupt the output if the temperatures exceed the limits for more than 1 s
 * 
 * Internal requirements:
 * \li Configurable thresholds via CAN messages
 * \li Store thresholds on non volatile memory and retreive the on power-up
 *
 * \section bloc_diagram Block diagram
 *
 * This is the block diagram of the system 
 *
 * \section rtos RTOS structure
 *
 * Here a small diagram
 * 
 * \image html task_diagram.png "Task diagram"
 *
 */

#include <asf.h>

/**
 * This is the main function
 *
 * @param arg this is an input argument
 */
int main (void) {
	system_init();
}
