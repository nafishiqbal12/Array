#include<stdio.h>

int main()
{
  int rows,cols,i,j;

  int A[4][4],B[4][4],C[4][4];

  printf("Enter the numbers of rows and cols =  ");

  scanf("%d %d",&rows,&cols);


  //user import for tow matrix

  printf("Enter the elements of matrix A:\n");

     for(i = 0; i<rows; i++)
     {
       for(j = 0; j<cols; j++)
       {
         scanf("%d",&A[i][j]);

       }



     }

printf("Enter the elements of matrix B:\n");

     for(i = 0; i<rows; i++)
     {
       for(j = 0; j<cols; j++)
       {
         scanf("%d",&B[i] [j]);

       }



     }

// output tow matrix

   printf("A =\n");

   for(i = 0; i< rows; i++)
   {
      for(j = 0; j<cols; j++)
      {

       printf("%d ",A[i] [j]);

      }


   printf("\n");

   }
    printf("\n");

   printf("B =\n");

   for(i = 0; i<rows; i++)
   {
      for(j = 0; j<cols; j++)
      {

       printf("%d ",B[i][j]);

      }


   printf("\n");

   }


   for(i = 0; i <rows; i++){

      for(j = 0; j<cols ; j++)
      {

      C[i][j] = A[i][j] * B[i][j];
        }


   }


   printf("C =  \n");


   for(i = 0; i<rows; i++)
   {
      for(j = 0; j<cols; j++)
      {

       printf("%d ",C[i][j]);

      }


   printf("\n");



   }

 return 0;


 }

