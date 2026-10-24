#include "STD_TYPES.h"
#include "RCC_INTERFACE.h"
#include "STD_TYPES.h"
#include "RCC_Private.h"
int main(){
    Mcal_EN_CLK(RCC_HSE,ENABLE);
    Mcal_SYS_CLK(RCC_HSE);

    Mcal_Rcc_Peripheral_EN_Clock(RCC_AHB1_GPIOAEN ,RCC_AHB1) ; 
    Mcal_CLK_STATUS(RCC_HSE); 
    Mcal_RCC_RESET_CAUSE();
    Mcal_RETURN_SYS_CLK();
    Mcal_Get_SYS_CLK_Freq();

    //Mcal_Rcc_Peripheral_Dis_Clock(RCC_APB1_WWDGEN, RCC_APB1);
    //Mcal_Rcc_Peripheral_Dis_Clock(RCC_APB2_USART1EN, RCC_APB2);
    //Mcal_Rcc_Peripheral_Dis_Clock(RCC_AHB1_GPIOAEN, RCC_AHB1);
    while(1);
}
