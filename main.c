#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    /*Ler 2 números mostrar qual é o maior, ou a mensagem “valores iguais”*/

    int a,b;

    printf("Digite um número:");
    scanf("%d",&a);
    printf("Digite outro número:");
    scanf("%d",&b);

    if (a>b)
    {
        printf("O número %d é maior do que o número %d",a,b);
    }

        else
        {
            if (a<b)
            {
                printf("O número %d é maior do que o número %d",b,a);
            }

                else
                {
                    printf("Os números são iguais!");
                }

        }


    return 0;
}
