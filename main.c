#include <windef.h>
#include "Include_and_constants.h"

int WithPersonalLib() //превращаем число в строку и обратно с помощью своей библиотеки
{
    while (TRUE)
    {
        char* String = ( char* )malloc( 255 * sizeof( char ) ) ; //выделяем память под нашу строку
        int Number ; //и для числа
        system( "cls" )  ;
        printf( "1.Translate string to number\n2.Translate number to string\n3.Back to main menu" ) ;
        char Choose = getch() ; //подраздел меню
        switch ( Choose )
        {
            case '1' :
                system( "cls" ) ;
                printf( "Add string_\n" ) ;
                scanf( "%s" , String ) ; //читаем строку
                Number = StringToNumber( String ) ; //вызываем функцию перевода строки в чиссло описанную в includes and constants
                printf( "Number is %d" , Number ) ; //выводим число
                printf( "Press any button to restart the programme_" ) ;
                getch() ;
                break ;
            case '2' :
                system( "cls" ) ;
                printf( "Add number_\n" ) ;
                scanf( "%d" , &Number ) ; //читаем число
                String = NumberToString( Number ) ; //призываем функцию перевода числа в строку описанную в includes and constants
                printf( "String is %s" , String ) ; //воводим строку
                printf( "Press any button to restart the programme_" ) ;
                getch() ;
                break ;
            case '3' :
                return 0 ;
            default:
                break ;
        }
    }
}


int WithStdlib()
{
    while (TRUE) //подраздел меню
    {
        char *String = ( char* )malloc( 255 * sizeof( char ) ) ; //выделяем память под строку
        int Number ; //и под число
        char* end_ptr ; //и указатель для функции strtol для ошибок
        system( "cls" ) ;
        printf( "1.Translate string to number\n2.Translate number to string\n3.Back to main menu" ) ;
        char Choose = getch() ;
        switch ( Choose )
        {
            case '1' :
                system( "cls" ) ;
                printf( "Add string_\n" ) ;
                scanf( "%s" , String ) ; //читаем строку
                Number = strtol( String, &end_ptr , 10 ) ; //превращяем строку в числос с помощью стандартной функции
                printf( "Number is %d\n" , Number ) ; //выводим число
                printf( "\nPress any button to restart the programme_" ) ;
                getch() ;
                break ;
            case '2' :
                system( "cls" ) ;
                printf( "Add number_\n" ) ;
                scanf( "%d" , &Number ) ; //читаем число
                itoa( Number , String ,10 ) ;//sprintf(*String ,"%d" , Number); два варианта функций,используемая на данный момент лучше,переводит число в строку
                printf( "Your string is :%s\n" , String ) ;
                printf( "\nPress any button to restart the programme_" ) ;
                getch() ;
                break ;
            case '3' :
                return 0 ;
            default:
                break ;
        }
    }
}



int main()
{
    while (TRUE) //меню
    {
        system( "cls" ) ;
        printf( "1.Make translation by stdlib\n2.Make translation by my personal lib\n3.Exit" ) ;
        char Choose = getch() ;
        switch ( Choose )
        {
            case '1' :
                WithStdlib() ;
                printf( "\nPress any button to restart the programme_" ) ;
                getch() ;
                break ;
            case '2' :
                WithPersonalLib() ;
                printf( "\nPress any button to restart the programme_" ) ;
                getch() ;
                break ;
            case '3' :
                return 0 ;
            default:
                break ;

        }
    }
}