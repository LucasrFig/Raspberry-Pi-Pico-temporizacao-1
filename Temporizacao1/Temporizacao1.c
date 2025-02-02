#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define led_red 13
#define led_yellow 12
#define led_green 11

bool repeating_timer_callback(struct repeating_timer *t){
    if(gpio_get(led_red)){
        printf("Ligar Amarelo!\n");
        gpio_put(led_red,0);
        gpio_put(led_green,0);
        gpio_put(led_yellow,1);
    }else if (gpio_get(led_yellow)){
        printf("Ligar Verde!\n");
        gpio_put(led_red,0);
        gpio_put(led_green,1);
        gpio_put(led_yellow,0);
    }else if (gpio_get(led_green)){
        printf("Ligar Vermelho!\n");
        gpio_put(led_red,1);
        gpio_put(led_green,0);
        gpio_put(led_yellow,0);
    }
    
    return true;
}


int main()
{
    //Inicializar LEDs
    gpio_init(led_red);
    gpio_set_dir(led_red,GPIO_OUT);
    gpio_init(led_yellow);
    gpio_set_dir(led_yellow,GPIO_OUT);
    gpio_init(led_green);
    gpio_set_dir(led_green,GPIO_OUT);
    
    //Iniciando funções stdio
    stdio_init_all();

    //Adicionando temporizador
    struct repeating_timer timer;
    add_repeating_timer_ms(3000,repeating_timer_callback,NULL,&timer);

    //Ciclo começa com LED Vermelho ativado
    printf("Ligar Vermelho!\n");
    gpio_put(led_red,1);

    while (true) {
        printf("Hello, Embarcatech!\n");
        sleep_ms(1000);
    }
}
