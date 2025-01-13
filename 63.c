
//c-20-heures
//
//exerices 61. 6.2 6.3

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main ()
{
  int nb=0;
  //car ='\0';

   printf (" Saisir un nombre entier  impair entre 1 et 10: \n");
   while ((nb <0) || (nb>10) || (nb%2==0))
    //  car=getchar();
    {
    scanf("%d", &nb);
    if ((nb <0) || (nb>10))
      printf ("Negatif ou >10 -> resaisir \n ");
      else if  (nb%2==0)
        printf(" pair ! Recommencez ...\n");
      else
        printf(" impair ! Au revoir !\n");

     }
 }
