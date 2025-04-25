#include "main.h"

int main()
{   
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();

    while (1)
    {
        HAL_GPIO_TogglePin(GPIOF, GPIO_PIN_4);
        HAL_Delay(500);
    }
}