#include <stdio.h>

int potencia(int base, int expoente);

int main()
{

    int base, expoente;

    printf("Base: ");
    scanf("%d", &base);

    printf("Expoente: ");
    scanf("%d", &expoente);

    printf("Resultado = %d\n", potencia(base, expoente));

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
