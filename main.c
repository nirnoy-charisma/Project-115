#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <direct.h>
#include <dos.h>
void booking();
void location();
void gallery();
void cancel();
int main(void)

{
    intoption;
    printf("Please Select Your Requirements:\n");
    do {
            system ("cls");
        printf("1. Location.\n");
        printf("\n");
        printf("2. Gallery Available.\n");
        printf("\n");
        printf("3. Booking\n");
printf("\n");
        printf("4. Cancel\n");
        printf("\n");
        printf("5. Back\n");
        printf("\n");
        scanf("%d",&option);
        switch(option){
        case 1:
           location();
           break;
        case 2:
            gallery();
            break;
        case 3:
            booking();
            break;
        case 4:
            cancel();
            break;
        }
        getch();
    }
    while (option!=5);
    printf(" Thanks for trying. \n");







    return 0;
}
void location ()
{
    l[][100]={"Gulshan","Banani","Uttura","Mogbazar","Rampura","Farmgate"};
    system ("cls");
   printf("\t\t\t\t\t[1]  =>  %s\n",ch[0]);
    printf("\n");
    printf("\t\t\t\t\t[2]  =>  %s\n",ch[1]);
    printf("\n");
	printf("\t\t\t\t\t[3]  =>  %s\n",ch[2]);
    printf("\n");
	printf("\t\t\t\t\t[4]  =>  %s\n",ch[3]);
    printf("\n");
	printf("\t\t\t\t\t[5]  =>  %s\n",ch[4]);

}
void gallery()
{


}
