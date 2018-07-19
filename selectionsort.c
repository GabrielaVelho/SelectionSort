#define TAM 100
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

void selectionSort(int v[])
{
    int i, j, posicao, menor;

    for(i = 0; i < TAM; i++) //n�o <= a TAM porque o �ndice do vetor vai de 0 a TAM-1 (ex: 10 -> i = 0, TAM = 9)
    {
        //busca pelo menor at� o fim do vetor
        menor = v[i];
        posicao = i;
        for(j = i + 1; j < TAM; j++)
        {
            if(v[j] < menor){
                menor = v[j]; //atualiza��o de dados
                posicao = j;
            }
        }
        //troca o menor pelo elemento i
        int aux = v[posicao];
        v[posicao] = v[i];
        v[i] = aux;

    }
}

int main()
{
    int i;
    int v[TAM];
    srand(time(NULL));
    for(i = 0; i < TAM; i++){
        v[i] = rand() % (2 * TAM) + 1; //1 at� o dobro do tamanho TAM
    }

    selectionSort(v); //quando passa o vetor, ele j� volta alterado, porque o vetor j� � um endere�o,
    //ent�o eu n�o preciso passar ele por parametro

    for(i = 0; i < TAM; i++){
        printf("%d ", v[i]);
    }
    return 0;
}
