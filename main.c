#include <stdio.h>

#include <stdio.h>

    void lerVetor(int vetor[], int tamanho);
    void mostrarVetor(int vetor[], int tamanho);
    int somarVetor(int vetor[], int tamanho);
    int maiorVetor(int vetor[], int tamanho);
    int menorVetor(int vetor[], int tamanho);
    float mediaVetor(int vetor[], int tamanho);
    void dobrarVetor(int vetor[], int tamanho);


int main()
{
    int soma;
    int maior;
    int menor;
    float media;

    int valores[5];

    lerVetor(valores, 5);

    printf("\nVetor:\n");
    mostrarVetor(valores, 5);

    soma = somarVetor(valores, 5);
    printf("\nSoma = %d\n", soma);

    maior = maiorVetor(valores, 5);
    printf("maior = %d\n", maior);

    menor = menorVetor(valores, 5);
    printf("menor = %d\n", menor);

    media = mediaVetor(valores, 5);
    printf("media = %.2f\n", media);

    dobrarVetor(valores, 5);

    printf("\nVetor dobrado:\n");
    mostrarVetor(valores, 5);

    return 0;

}



void lerVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("digite um numero: ");
        scanf("%d", &vetor[i]);
    }
}



void mostrarVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}




int somarVetor(int vetor[], int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma = soma + vetor[i];
    }
    return soma;
}



int maiorVetor(int vetor[], int tamanho)
{
    int maior = vetor[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }

    return maior;
}




int menorVetor(int vetor[], int tamanho)
{
    int menor = vetor[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }

    return menor;
}



float mediaVetor(int vetor[], int tamanho)
{
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma = soma + vetor[i];
    }

    return (float)soma / tamanho;
}



    void dobrarVetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = vetor[i] * 2;
    }
}

