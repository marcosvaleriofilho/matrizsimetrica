#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#define n 6 /*Colocar sempre 1 número a mais para a matriz funcionar corretamente*/
/*Uma matriz é simétrica em relação a diagonal principal se todos os elementos A( i , j) = A( j , i) para quaisquer valores de i e j.
Elabore um programa que leia uma matriz 5x5 e verifique se ela é simétrica*/

int main()
{
  setlocale(LC_ALL, "Portuguese");
  int i, j, mat[n][n], verifica = 1;

  for (i=1; i<n; i++)
  {
    for (j=1; j<n; j++)
     {
      printf("Matriz[%d][%d] = ", i, j);
      scanf("%d", &mat[i][j]);
     }
}
  for (i=1; (i<n)&&(verifica==1); i++)
  {
    for (j=1; (j<i)&&(verifica==1); j++)
    {
      if (mat[i][j] != mat[j][i])
         verifica = 0;
    }
  }
  if (verifica == 1)
    printf("\nA matriz é simetrica.");
  else
    printf("\nA matriz não é simétrica.");

    system("pause");
    return 0;
}
