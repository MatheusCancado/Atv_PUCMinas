#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    /*Ler 2 n�meros mostrar qual � o maior, ou a mensagem �valores iguais�*/

    int a,b;

    printf("Digite um n�mero:");
    scanf("%d",&a);
    printf("Digite outro n�mero:");
    scanf("%d",&b);

    if (a>b)
    {
        printf("O n�mero %d � maior do que o n�mero %d",a,b);
    }

        else
        {
            if (a<b)
            {
                printf("O n�mero %d � maior do que o n�mero %d",b,a);
            }

                else
                {
                    printf("Os n�meros s�o iguais!");
                }

        }


    return 0;
}
