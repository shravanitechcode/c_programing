#include<stdio.h>
void main()
{

  int c,cpp,java,python;
  int totalMark=400;
  printf("Enter the value");
  scanf("%d",&c);

  printf("Enter the value");
  scanf("%d",&cpp);

  printf("Enter the value");
  scanf("%d",&java);

  printf("Enter the value");
  scanf("%d",&python);

  int sum=c+java+cpp+python;
  printf("opten mark =%d\n",sum);

  float persentage=(float) sum/totalMark*100.0;
  printf("persentage=%.2lf\n",persentage);

  if(persentage>80){
    printf("your gread is A+");
  }

  else if (persentage>70)
  {
  printf("your gread is A");
  }

  else if (persentage>60)
  {
   printf("your gread is B");
  }

   else if (persentage>50)
   {
    printf("your gread is c");

   }

   else if (persentage>35)
   {
    printf("your gread is d");
   }

   else
   {
       printf("sorrey your fail");
   }












}
