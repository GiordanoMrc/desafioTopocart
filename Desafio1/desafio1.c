//Marcelo Oliveira
//Diretivas de Compilação - gcc desafio1.c -o d1

#include "stdio.h"
#include "stdlib.h"

//Função que Soma Divisores
long somaDivisores(long a)
{
    long soma=0;
    for(int i=1;i<=a/2;i++) // divide pela metade porque não existem divisores maiores que o numero/2
    {
        if(a%i==0) //checka i é divisor de a
        {
            soma+=i; //soma se for verdade
        }
    }
    return soma; //retorna a soma dos divisores de a
}

int main ()
{
    long min = 1;
    long max = 100000;
    // Assumir que a entrada minima é 1 <= min <= max

    for (long a = min; a <= max; a++) {
        long b = somaDivisores (a); //b recebe a soma dos divisores de a
        if ((a < b) && (b <= max) && (somaDivisores (b) == a)) { //se a<soma E b<=limiteMax E somaDivisores(soma) == a, temos um par de numeros amigos para esse numero a.
            printf ("Par de numeros amigos:\t(%ld, %ld)\n", a, b);
        }
    }

    return 0;
}
