#include <stdio.h>
#include <assert.h>

int potencia(int base, int expoente);

int main()
{

    assert(potencia(2,2) == 4);
    assert(potencia(3,3) == 27);
    assert(potencia(4,4) == 256);
    assert(potencia(5,5) == 3125);

    printf("Todos os testes passaram!\n");

    printf("\nFeito por Luís Guilherme ( https://github.com/luisblguilherme-11 ) ");

    return 0;
}
