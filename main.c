#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temperatura, conversao;
    char escala;
    printf("Seu valor de temperatura:");
    scanf("%f", &temperatura);
    printf("Escolha a Escala C para Celsius ou F para Fahrenheit:");
    scanf("\n%c", &escala);
    if(escala == 'C' || escala == 'c')
    {
        conversao = (9 * temperatura / 5) + 32;
        printf("Temperatura em Fahrenheit: %.1f\n", conversao);
    }
    else if(escala == 'F' || escala == 'f')
    {
        conversao = 5 * (temperatura - 32) / 9;
        printf("Temperatura em Celsius: %.1f\n", conversao);
    }
    else
        printf("Escala incorreta.\n");
    return 0;
}
