#include<stdio.h>
int main()
{
   int A,B,C;
   scanf("%d %d %d", &A ,&B ,&C);
   

if(A<=B && A<=C)
   {
    printf("%d ",A  );
   }
   else if(B<=C && B<=A)
   {
    printf("%d " , B);

   }
   else
   {
    printf("%d ",C);
   }


   if(A>=B && A>=C)
   {
    printf("%d\n",A );
   }
   else if(B>=C && B>=A)
   {
    printf("%d\n" , B);

   }
   else
   {
    printf("%d\n",C);
   }

    return 0;

} 