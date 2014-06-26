#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funks.h"



/** Zeit initialization

* @param 

* @return 

*/

void initialisiere_zufallszahlengenerator(void)
{
  srand((unsigned) time(NULL));
}

/** Zeigt einleitung

* @param
* @return 

*/

void zeig_einleitung()
{ 
  printf("Haben sie Lust auf einen Ratespiel? Sie haben 10 Versuche um eine Zufallszahl zwischen 1 und 1000  zu raten. Viel Glück!  \n");
  printf("*******************************************\n\n");

}

/** Liefert eine ganze zufallszahl

* @param min unten grenze
* @param max obere grenze
* @return eine random Zahl 

*/
int liefere_ganze_zufallszahl(int min, int max)
{
  return (rand() % (max - min + 1)) + min;
}

/** löscht input buffer

* @param 

* @return 

*/

void flush_input()
{
  int c = 0;
   do 
   {
     c = getchar();
   } while (c != EOF && c != '\n');
}


/** Nimmt die Eingabe, wenn falsch ist, wird nochmal angerufen

* @param versuch Anzahl der Versuche

* @return eigabe eingabe zahl 

*/

int nimm_eingabe(int versuch)
{ 
  int eingabe = 0;
  if(versuch == 1)
    printf("Geben Sie bitte eine Zahl zwischen 1 und 1000 ein:\n");
  else
    printf("Geben Sie bitte nochmal eine Zahl zwischen 1 und 1000 ein:\n");
 

  while ( !scanf("%d", &eingabe) || eingabe < 1 || eingabe > 1000 )
  {
    printf("Falsche Eingabe! Die Eingabe musss eine ganze Zahl zwischen 1 und 1000 sein. Geben Sie bitte nochaml ein: \n"); 
    flush_input();
  }

  return eingabe;
    
  
   
}

/** Wenn mann die Zahl trifft, wird den Text gezeigt

* @param versuch Anzahl der versuche

* @return 

*/

void zeige_erfolg_text(int versuch)
{
  switch (versuch)
    {
      case 1:
        printf("Klasse! Erfolg im ersten Versuch! Sie haben ein Ticket nach Hawaii gewonnen\n");  
        break;

       
      case 2:
        printf("voilà! Erfolg im zweiten Versuch.  \n");  
        break;

      case 3:
        printf("Bravo! Im dritten Versuch sind Sie richtig! \n");  
        break;

       
      case 4:
        printf("Gut geraten! Sie brauchten nur 4 Versuche!\n");  
        break;

       
      case 5:
        printf("Richtig! nur 5 Versuche!\n");  
        break;

       
      case 6:
        printf("Super! Richtig geraten, im 6. versuch!\n");  
        break;

       
      case 7:
        printf("Gratulation! im 7. Versuch sind Sie richtig\n");  
        break;

       
      case 8:
        printf("Genau! Im 8. Versuch haben sie richtig geraten! \n");  
        break;

      case 9:
        printf("Richtig! Das war der 9. Versuch\n");  
        break;

      case 10:
        printf("Bravo! Das war knapp, die letzte Chance aber haben Sie es richtig geraten\n");  
        break;

       
       
       
   }
}
