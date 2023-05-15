#include<stdio.h>
#include<stdlib.h>

int main(){
   int n,i;
   int x;

   printf("informe o valor de n:\n");
   scanf("%d",&n);

   int *v=(int*)malloc(n*sizeof(int));

   printf("informe os valores do vetor v:\n");

   for(i=0;i<n;i++){
       scanf("%d",&v[i]);
   }

   printf("digite o numero que sera verificado:\n");
   scanf("%d",&x);

   int numMaiores=0, numIguais=0;

   for(i=0;i<n;i++)

       if(v[i]>x){
           numMaiores++;
       }
       else{
          numIguais++;
       }

   if(x>0){
     printf("os numeros maior ou iguais sao\n");

  for(i=0; i<n; i++)

     if(v[i]>x || v[i]==x)

   printf("%d\n", v[i]);
   }
   free(v);
}