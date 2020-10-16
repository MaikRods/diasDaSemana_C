#include<stdio.h>
#include<string.h>

int main(void)
{
  int dia;

  printf("Digite o numero do dia da semana : \n ");
  scanf("%d",&dia);
    
    if( dia == 1 )
        printf("Hoje é Domingo! \n ");
    else if( dia == 2 )
        printf("Hoje é Segunda! \n ");
    else if( dia == 3 )
        printf("Hoje é Terça! \n ");   
    else if( dia == 4 )
        printf("Hoje é Quarta! \n ");
    else if( dia == 5 )
        printf("Hoje é Quinta! \n ");     
    else if( dia == 6 )
        printf("Hoje é Sexta! \n ");
    else if( dia == 7 )
        printf("Hoje é Sábado! \n "); 
     else
        printf("Tente novamentte por favor.. :/ \n "); 
     
     printf("\n \n"); 


    return 0;

}