//Atividade de Linguagem C 10/05
//Aluno: Ricardo Henrique Pires dos Reis
//Sistemas de Informa��o

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#define N 10

//EX2
int main(void)
{
  int vetor[N], numero, flag=0;
  srand(time(NULL));
  printf("Este � o vetor: ");
  for (int i=0; i<N; i++)
  {
    vetor[i]= rand()%N+1;
    printf("%d, ", vetor[i]);
  }
  printf("\n");
  while(N-flag!=0)
  {
    printf("\nDigite um n�mero que esteja ou n�o na tabela: ");
    scanf("%d", &numero);
    for (int j=0; j<N; j++)
    {
      if(vetor[j]==numero)
      {
        for (int k=j; k<N; k++)
        {
          vetor[k]=vetor[k+1];
        }
        flag++;
        j--;
      }
    }

    for (int m=0; m<N-flag; m++)
    {
      printf("%d, ", vetor[m]);
    }
    printf("\n");
  }
  printf("Fim");
  return 0;
}
