/*
 * GPIO.c
 *
 *  Created on:
 *      Author:
 */

// For the code you place here, you may use your code that uses register references.
// However, I encourage you to start using the Driver Library as soon as possible.

#include <ti/devices/msp432p4xx/driverlib/driverlib.h>
#include "myGPIO.h"



// TODO: Create a function to initialize the GPIO.
// Even though this assignment does not use all of the pushbuttons, you should write one function that does a complete GPIO init.
void initGPIO()
{
    P1DIR &= ~LAUNCHPAD_S1;
    P1REN |= LAUNCHPAD_S1;
    P1OUT |= LAUNCHPAD_S1;

    P1DIR &= ~LAUNCHPAD_S2;
    P1REN |= LAUNCHPAD_S2;
    P1OUT |= LAUNCHPAD_S2;

    P1DIR |= LAUNCHPAD_LED1;
    P2DIR |= LAUNCHPAD_LED2R;
    P2DIR |= LAUNCHPAD_LED2G;
    P2DIR |= LAUNCHPAD_LED2B;

    P5DIR &= ~BOOSTER_S1;
    P5REN |= BOOSTER_S1;
    P5OUT |= BOOSTER_S1;

    P3DIR &= ~BOOSTER_S2;
    P3REN |= BOOSTER_S2;
    P3OUT |= BOOSTER_S2;

    P2DIR |= BOOSTER_LEDR;
    P2DIR |= BOOSTER_LEDG;
    P5DIR |= BOOSTER_LEDB;

    // Turn off all LEDs at the start.
    turnOff_LaunchpadLED1();
    turnOff_LaunchpadLED2Red();
    turnOff_LaunchpadLED2Green();
    turnOff_LaunchpadLED2Blue();
    turnOff_BoosterpackLEDRed();
    turnOff_BoosterpackLEDGreen();
    turnOff_BoosterpackLEDBlue();
}

// TODO: Create a function to return the status of Launchpad Pushbutton S1
unsigned char checkStatus_LaunchpadS1()
{
    if ((P1IN & LAUNCHPAD_S1) == PRESSED)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

// TODO: Create a function to return the status of Launchpad Pushbutton S2
unsigned char checkStatus_LaunchpadS2()
{
    if ((P1IN & LAUNCHPAD_S2) == PRESSED)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S1
unsigned char checkStatus_BoosterpackS1()
{
    if ((P5IN & BOOSTER_S1) == PRESSED)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

// TODO: Create a function to return the status of Boosterpack Pushbutton S2
unsigned char checkStatus_BoosterpackS2()
{
    if ((P3IN & BOOSTER_S2) == PRESSED)
        {
            return 1;
        }
    else
        {
            return 0;
        }
}

// TODO: Create a function to turn on Launchpad LED1.
void turnOn_LaunchpadLED1()
{
    P1OUT |= LAUNCHPAD_LED1;
}

// TODO: Create a function to turn off Launchpad LED1.
void turnOff_LaunchpadLED1()
{
    P1OUT &= ~LAUNCHPAD_LED1;
}

// TODO: Create a function to turn on the Red Launchpad LED2.
void turnOn_LaunchpadLED2Red()
{
    P2OUT |= LAUNCHPAD_LED2R;
}

// TODO: Create a function to turn off the Red Launchpad LED2.
void turnOff_LaunchpadLED2Red()
{
    P2OUT &= ~LAUNCHPAD_LED2R;
}

// TODO: Create a function to turn on the Green Launchpad LED2.
void turnOn_LaunchpadLED2Green()
{
    P2OUT |= LAUNCHPAD_LED2G;
}

// TODO: Create a function to turn off the Green Launchpad LED2.
void turnOff_LaunchpadLED2Green()
{
    P2OUT &= ~LAUNCHPAD_LED2G;
}

// TODO: Create a function to turn on the Blue Launchpad LED2.
void turnOn_LaunchpadLED2Blue()
{
    P2OUT |= LAUNCHPAD_LED2B;
}

// TODO: Create a function to turn off the Blue Launchpad LED2.
void turnOff_LaunchpadLED2Blue()
{
    P2OUT &= ~LAUNCHPAD_LED2B;
}

// TODO: Create a function to turn on the Red Boosterpack LED2.
void turnOn_BoosterpackLEDRed()
{
    P2OUT |= BOOSTER_LEDR;
}

// TODO: Create a function to turn off the Red Boosterpack LED2.
void turnOff_BoosterpackLEDRed()
{
    P2OUT &= ~BOOSTER_LEDR;
}

// TODO: Create a function to turn on the Green Boosterpack LED2.
void turnOn_BoosterpackLEDGreen()
{
    P2OUT |= BOOSTER_LEDG;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDGreen()
{
    P2OUT &= ~BOOSTER_LEDG;
}

// TODO: Create a function to turn on the Blue Boosterpack LED2.
void turnOn_BoosterpackLEDBlue()
{
    P5OUT |= BOOSTER_LEDB;
}

// TODO: Create a function to turn off the Green Boosterpack LED2.
void turnOff_BoosterpackLEDBlue()
{
    P5OUT &= ~BOOSTER_LEDB;
}
