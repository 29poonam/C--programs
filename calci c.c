#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

int main()
{
    int num_1,num_2,add,sub,mul,option,i,x;
    float div;
    system("color 0B");
    printf("\n\n");
    printf("                     **************************************************\n");
    printf("                     *             HANDY CALCULATER                   *\n");
    printf("                     **************************************************\n");
    printf("                           Loading Calculater                           \n");
    for(i=0;i<20;i++)
    {
        Sleep(100);
        printf("%c",219);
    }
    printf("\n\n                      Calculater Ready!!\n");
    do{
    printf("=========================================================================\n");
    printf("                          ENTER THE NUMBERS:\n");
    printf("=========================================================================\n");
    printf("                          First number:\n");
    scanf("%d",&num_1);
    printf("                          Second number:\n");
    scanf("%d",&num_2);
    printf("                      ======  :MENU: ========                             \n");
    printf("                     1: ADDITION\n");
    printf("                     2: SUBTRACTION\n");
    printf("                     3: MULTIPLICATION\n");
    printf("                     4: DIVISION\n");
    printf("                     5: EXIT\n");
    printf("                     =======================\n");
    printf("                     SELECT OPTION:\n");
    scanf("%d",&option);

    switch(option)
    {
    case 1:
        printf("                 ADDITION=%d\n",add=num_1+num_2);
        break;
    case 2:


            printf("             SUBTRACTION=%d\n",sub=num_1-num_2);
        break;
    case 3:
        printf("                 MULTIPLICATION=%d\n",mul=num_1*num_2);
        break;
    case 4:
        if(num_2==0)
        {
    printf("                     DIVISION IS NOT POSSIBLE........\n");
        }
        else
            {
            printf("             DIVISION=%.2f\n",div=num_1/num_2);
        }
        break;
    case 5:
        printf("                 ::EXIT::\n");
        printf("               THANKU.......NICE TO HELP YOU:::\n");
        printf("                THANKU FOR USING HANDY CALCULATER\n");
        printf("                PROGRAMME CREATED IN C LANGUAGE\n...");
        break;
    default:
        printf("               WE ARE LOOKING FOR YOUR VALID OPTION.......");

    }
    }
    while(option!=5);
    return 0;
}
