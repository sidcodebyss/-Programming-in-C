#include <stdio.h>

void main()
{
    int moisture , dry=40 , moist=70;
    clrscr();
    printf("Enter moisture value: ");
    scanf("%d", &moisture);

    if (moisture < dry)
    {
        printf("Soil is Dry");
    }
    else if (moisture < moist)
    {
        printf("Soil is Moist");
    }
    else
    {
        printf("Soil is Wet");
    }

   getch();
}
