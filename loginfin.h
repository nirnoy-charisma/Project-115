#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void login_info (void);
void login (void);
struct login {
char user [50];
char pass [50];
};


void login_info (void)
{
 FILE *lol;
 lol = fopen("up.txt","w");
 struct login l;
 printf("enter the username:");
 scanf("%s", l.user);
 printf("enter the password:");
 scanf("%s", l.pass);
 fwrite (&l,sizeof (l),1,lol);
 fclose(lol);

}
 void login (void)
 {
     char user[50];
     char pass [50];
     FILE *lol;
     lol = fopen("up.txt","r");
     struct login l;
     printf("enter the username and password\n");
     while (fread(&l, sizeof(l), 1, lol))
    {
        while (1)
        {
            printf("enter the username:");
            scanf("%s", user);
            printf("enter the password:");
            scanf("%s", pass);
            if (strcmp(user, l.user)==0 && strcmp(pass, l.pass)==0)
            {
                printf("welcome \n");
                break;
            }
            else
            {
                printf("fail\n");
            }
        }
     }
     fclose(lol);
 }
void loginfinal(void)
{
 login_info();
 login();
 return 0;
}
