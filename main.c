#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
int main(void)

{ int option, location, booking,gall ,cancel;

printf(" Sorry for the trouble\n");
printf(" You Need to enter the location and select the Gallery\n");
printf(" then you will be provided an option the leave.\n");
printf("Thanks for tagging along\n");
printf("\n");
printf("\n");

        //printf("1. Location And Gallery Available.\n");
        //printf("\n");
        //printf("2. Booking\n");
       // printf("\n");
        //printf("3. Cancel\n");
        //printf("\n");


printf("\t\t\t\t\t Choose your Location\n");
scanf("%d",&location);

switch (location){
case 1:
    printf("Gulshan\n");
    break;
case 2:
    printf("Banani\n");
    break ;
case 3:
    printf("Uttura\n");
    break;
default:
    printf("Error!\n");
    break;
    }


    printf("Choose the available Gallery\n");
 printf("\t\t\t\t\t\t Choose the gallery\n",gall);
 scanf("%d",&gall);
 if (location==1){

    printf("\t\t\t\t\t 1. Edge Gallery\n",gall);
    printf("\t\t\t\t\t 2.Radius Centre\n",gall);
 printf(" Choose one gallery.\n");
 if (gall=1){
    printf(" You have choosen Edge Gallery\n");

 }
 else
    printf("You have choosen Radius Gallery\n");


 }
 else if (location==2){
    printf("\t\t\t\t\t\ 1.Dhaka Gallery\n",gall);
    printf("\t\t\t\t\t\ 2.Arcadia Art\n",gall);
    printf(" Choose one gallery.\n");
    if (gall=1){
        printf("You have choosen Dhaka Gallery\n");

    }
    else
        printf("You have choosen Arcadia Gallery\n");
 }
 else if (location==3){
    printf("\t\t\t\t\t\ 1.Cezanne Gallery\n",gall);
    printf("\t\t\t\t\t\ 2.Yeart Gallery\n",gall);
    printf(" Choose one gallery.\n");
    if (gall=1){
        printf("You have choosen Cezanne Gallery\n");

    }
    else
    printf("You have choosen Yeart Gallery\n");
 }
    else
        printf("Error!\n");


//system ("cls");

       printf(" ***Choose the date*** ");
       scanf("%d",&booking);


        switch (booking)
        {
            case 1 :
            printf("***1 Jan 2023 Time:10.00 AM- 10.00 PM***\n");
            break;
            case 2:
                printf("***2 Jan 2023 Time 10.00 Am-10.00 PM***\n");
                break;
                case 3:
                    printf("***3 Jan 2023 Time 10.00 Am-10.00 PM***\n");
                    break;
                case 4 :
                    printf("***4 Jan 2023 Time 10.00 Am-10.00 PM***\n");
                    break;
                case 5:
                    printf("***5 Jan 2023 Time 10.00 Am-10.00 PM***\n");
                    break;
                default :
                    printf("*** No Available Dates. Please wait for few days for the update***\n");
                    break;


        }


        printf(" ***The cost of the gallery :\n");
        printf(" ***Tk 50000\n");
        printf(" ***Press 1 to continue.\n");
        printf(" ***Press 2 to cancel.\n");
        scanf("%d",&cancel);
        switch (cancel){
     case 1:
        printf(" ***  Your Booking Has Been Confirmed. You will Be charged Tk 50000  ***\n ");
        break;
     case 2:
        printf(" *** Your Booking Wasnt confirmed . Hope to see you soon ***/n");
        break;
     default :
        printf(" Error!\n");

        }

    return 0;
}
