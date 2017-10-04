#include <windef.h>
#include "Include_and_constants.h"

int WithPersonalLib()
{
    while (TRUE)
    {
        char* String = (char*)malloc( 255 * sizeof( char ) );
        int Number;
        system("cls");
        printf("1.Translate string to number\n2.Translate number to string\n3.Back to main menu");
        char Choose = getch();
        switch (Choose)
        {
            case '1' :
                system("cls");
                printf("Add string_\n");
                scanf("%s" , String);
                Number = StringToNumber( String );
                printf("Number is %d" , Number);
                printf("Press any button to restart the programme_");
                getch();
                break;
            case '2' :
                system("cls");
                printf("Add number_\n");
                scanf("%d" , &Number);
                String = NumberToString( Number );
                printf("String is %s" , String);
                printf("Press any button to restart the programme_");
                getch();
                break;
            case '3' :
                return 0;
            default:
                break;
        }
    }
}


int WithStdlib()
{
    while (TRUE)
    {
        char *String = (char*)malloc( 255 * sizeof( char ) );
        int Number;
        char* end_ptr;
        system("cls");
        printf("1.Translate string to number\n2.Translate number to string\n3.Back to main menu");
        char Choose = getch();
        switch (Choose)
        {
            case '1' :
                system("cls");
                printf("Add string_\n");
                scanf("%s" , String);
                Number = strtol( String, &end_ptr , 10);
                printf("Number is %d\n" , Number);
                printf("\nPress any button to restart the programme_");
                getch();
                break;
            case '2' :
                system("cls");
                printf("Add number_\n");
                scanf("%d" , &Number);
                itoa(Number , String ,10 );//sprintf(*String ,"%d" , Number);
                printf("Your string is :%s\n" , String);
                printf("\nPress any button to restart the programme_");
                getch();
                break;
            case '3' :
                return 0;
            default:
                break;
        }
    }
}



int main()
{
    while (TRUE)
    {
        system("cls");
        printf("1.Make translation by stdlib\n2.Make translation by my personal lib\n3.Exit");
        char Choose = getch();
        switch (Choose)
        {
            case '1' :
                WithStdlib();
                printf("\nPress any button to restart the programme_");
                getch();
                break;
            case '2' :
                WithPersonalLib();
                printf("\nPress any button to restart the programme_");
                getch();
                break;
            case '3' :
                return 0;
            default:
                break;

        }
    }
}