#include <stdio.h>

#include "freertos/FreeRTOS.h"

void app_main(void)
{
    while (1) {
        printf("Hello world!\n");
        vTaskDelay(50);
    }
}
