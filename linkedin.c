//GRUPO: Jessica Cavalcante; Victor Temple
//NOME DO GRUPO: LinkedIn
//Apresentação de exemplos de algoritmos de Insertion Sort e Selection Sort

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

void instertion_sort(int *Vetor)
{
    int i, j, Aux;

    for(i = 1; i <= TAM; i++)
    {
        Aux = Vetor[i];
        j = i - 1;

        while(j >= 0 && Vetor[j] > Aux)
        {
            Vetor[j+1] = Vetor[j];
            j = j - 1;
        }
        Vetor[j+1] = Aux;
    }
}

void selection_sort(int *Vetor)
{
    int i, j, Aux, Minimo;

    for(i = 0; i <= TAM; i++)
    {
        Minimo = i;
        for(j = i+1; j <= TAM; j++)
        {
            if(Vetor[j] < Vetor[Minimo])
                Minimo = j;
        }
        if(i != Minimo)
        {
            Aux = Vetor[i];
            Vetor[i] = Vetor[Minimo];
            Vetor[Minimo] = Aux;
        }
    }
}

void imprimir(int *Vetor)
{
    for(int i = 0; i <= TAM; i++)
    {
        printf("%d\t", Vetor[i]);
    }
    printf("\n\n");
}

int menu(void)
{
    int op;

    printf("================[MENU]===============\n");
    printf("\n");
    printf("...........................SAIR: [0] \n");
    printf(".....PIOR CASO - INSERTION SORT: [1] \n");
    printf("....MEDIO CASO - INSERTION SORT: [2] \n");
    printf("...MELHOR CASO - INSERTION SORT: [3] \n");
    printf("....CASO UNICO - SELECTION SORT: [4] \n");

    printf("\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &op);

    return op;
}

int main(void)
{
    int Menu, Aux, Vetor[TAM];

     do
     {
        Menu = menu();

        switch(Menu)
        {
            case 0:
                printf("\nSair do programa \n");
                break;

            case 1:
                Aux = TAM;
                for(int i = 0; i <= TAM-1; i++)
                {
                    Vetor[i] = Aux;
                    Aux--;
                }
                imprimir(&Vetor);
                instertion_sort(&Vetor);
                imprimir(&Vetor);
                break;

            case 2:
                for(int i = 0; i <= TAM-1; i++)
                {
                    Vetor[i] = (rand() % 90) + 10;
                }
                imprimir(&Vetor);
                instertion_sort(&Vetor);
                imprimir(&Vetor);
                break;

            case 3:
                for(int i = 0; i <= TAM-1; i++)
                {
                    Vetor[i] = i+1;
                }
                imprimir(&Vetor);
                instertion_sort(&Vetor);
                imprimir(&Vetor);
                break;

            case 4:
                for(int i = 0; i <= TAM-1; i++)
                {
                    Vetor[i] = (rand() % 90) + 10;
                }
                imprimir(&Vetor);
                selection_sort(&Vetor);
                imprimir(&Vetor);
                break;
        }

        printf("\nPressione Enter para continuar \n");
        while( (getchar()) != '\n');

        getchar();
        system("@cls||clear");

    }while(Menu != 0);

return 0;
}
