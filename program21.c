#include<stdio.h>
void main()
{

  char studentName[110];
  char studentid[120];
  char studentPhoneNumber[150];
  char courseName[160];
  char courseFees[170];

  printf("student name");
  scanf("%s",&studentName);

  printf("student id");
  scanf("%s",&studentid);

  printf("student phone number");
  scanf("%s",&studentPhoneNumber);

  printf("course name");
  scanf("%s",&courseName);

  printf("course fees");
  scanf("%s",&courseFees);

  printf("#########################\n");
  printf("studentName=%s\n studentid=%s\n studentPhoneNumber=%s\n courseName=%s\n courseFees=%s\n",studentName,studentid,studentPhoneNumber,courseName,courseFees);


}









