#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void look();
void Adduser();
struct UserInfo
{
   char ID[10];
   char Name[20];
   char Email[30];
   char Phone[20];
   int NumberOfCourse;
};
int main()
{
    int choice;
     look();
      printf("Enter your choice:");
   scanf("%d", &choice);
   
   switch (choice)
   {
   case 1:
       printf("Monday");
       break;
   case 2:
       printf("Tuesday");
       break;
   case 3:
       printf("Wednesday");
       break;
   case 4:
       printf("Thursday");
       break;
   case 5:
       printf("Friday");
       break;
   case 6:
       exit(1);
       break;
   }

   return 0;
}







void look(){
    printf("__________M0NEY MANAGEMENT SYSTEM__________");
    printf("\n\n");
    printf("\t\tMAIN MENU\n\n");
    printf("\t==========================\n");
    printf("[1]\t Add a new user.\n");
    printf("[2]\t Show all users.\n");
    printf("[3]\t Search user.\n");
    printf("[4]\t Edit user.\n");
    printf("[5]\t Delete all user.\n");
    printf("[6]\t Exit the program.\n");

}
void Adduser(){
    char firstname[200];
    char lastname[100];
    int amount;

}