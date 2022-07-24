#include<stdio.h>
#include<stdlib.h>


int main()
{
    float nombre1 ;
    float nombre2 ;
    float nombre3 ;

    printf("taper le premier nombre\n");
    scanf ("%f", &nombre1);
    printf("taper le Deuxieme nombre\n");
    scanf ("%f", &nombre2);
    printf("taper le troisieme nombre\n");
    scanf ("%f", &nombre3);

    if ((nombre1 < nombre2) && (nombre1 < nombre3))
    {
        printf ("le plus petit nombre est: %f\n",nombre1);
    }
    if ((nombre2 < nombre1) && (nombre2 < nombre3))
    {
        printf ("le plus petit nombre est: %f\n",nombre2);
    }

    if ((nombre3 < nombre1) && (nombre3 < nombre2))
    {
        printf ("le plus petit nombre est: %f\n",nombre3);
    }

    return EXIT_SUCCESS;
}
