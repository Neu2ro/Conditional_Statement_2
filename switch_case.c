/*Since I’m not too great with numbers other than 0 and 1,
in case I enter a number that isn’t in the list, print a message saying so.
(Use the default case.)*/

#include <stdio.h>

void main()
{
    //Declaring a variable
    int opt;

    //Asking to input a number
    printf("Enter a number from 0 or 1 : ");
    scanf("%d", &opt);

    //Switch Case
    switch (opt)
    {
    case 1:
        printf("You have chosen the number '1'. ");
        break;
    case 0:
        printf("You have chosen the number '0'. ");
        break;
    default:
        printf("Invalid number, choose between 1 or 0.");
    }
}
