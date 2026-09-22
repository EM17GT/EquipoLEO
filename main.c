#include "gpio.h"
#include <unistd.h>

#define LED 17
#define BUTTON1 22
#define BUTTON2 23

int main (void)
{
    gpio_init();

    gpio_configure(LED, GPIO_OUTPUT);

    gpio_start();

    while (1)
    {
        gpio_set(LED,1);
        sleep (1);

        gpio_set(LED,0);
        sleep (1);
    }
    gpio_cleanup();
    return 0;

}


