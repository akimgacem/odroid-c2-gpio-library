/*
 * MIT License
 * Copyright (c) 2017 Michal Kozakiewicz, github.com/michal037
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#include "tsimple.h"

#ifndef __CUSTOM_ODROIDC2_GPIO__
#define __CUSTOM_ODROIDC2_GPIO__

/* GPIO's from 40-GPIO Header */
#define GPIO_03 205
#define GPIO_05 206
#define GPIO_11 247
#define GPIO_12 238
#define GPIO_13 239
#define GPIO_15 237
#define GPIO_16 236
#define GPIO_18 233
#define GPIO_22 231
#define GPIO_26 225
#define GPIO_27 207
#define GPIO_28 208
#define GPIO_29 228
#define GPIO_31 219
#define GPIO_32 224
#define GPIO_33 234
#define GPIO_35 214
#define GPIO_36 218


/* GPIO's from 7-GPIO Header */
// PIN 1 : Ground
#define GPIO_44 130
#define GPIO_45 132
#define GPIO_46 131
#define GPIO_47 133

/* GPIO MODE */
#define GPIO_INPUT 1
#define GPIO_OUTPUT 0

/* GPIO STATE*/
#define GPIO_HIGH 1
#define GPIO_LOW 0


/* ----- ----- ----- FUNCTIONS ----- ----- ----- */
/*
 * Initialize GPIO for use.
 */
void init_GPIO(uint8 gpioNumber);


/*
 * Disable GPIO.
 */
void UNinit_GPIO(uint8 gpioNumber);


/*
 * Set GPIO mode INPUT/OUTPUT
 */
void gpioMode(uint8 gpioNumber, uint8 mode);


/*
 * Write data to GPIO.
 */
void gpioWrite(uint8 gpioNumber, uint8 state);


/*
 * Read data from GPIO.
 */
uint8 gpioRead(uint8 gpioNumber);

#endif

