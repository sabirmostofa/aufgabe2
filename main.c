#include <stdio.h>
#include "funks.h"

/* Das Programm erzeugt eine ganze Zufahlszal und bietet die möglichkeit 
die Zahl in 10 Versuchen zu raten
 * 
 * @author Sabirul Mostofa
 * @version 1.0
 */



int main(void)
{

  int versuch, zahl, eingabe, erfolg;
  zeig_einleitung();
  initialisiere_zufallszahlengenerator();
  zahl = liefere_ganze_zufallszahl(1, 1000); 
 
  erfolg = 0;
  versuch = 0;

  while(versuch < 10)
  {
    versuch++;
    eingabe = nimm_eingabe(versuch);
    
    if(eingabe < zahl)       
      printf("Die Zufallszahl ist groesser als die Eingabe \n");    
   

    else if(eingabe > zahl)
      printf("Die Zufallszahl ist kleiner als die Eingabe \n");
    
    else
    { 
      erfolg = 1;
      zeige_erfolg_text(versuch);
      break;
    }

    if(versuch != 10 )  
      printf("Sie haben noch %d Versuch(e)\n", 10-versuch);

  }/*while Ende*/

  if( erfolg == 0 )
    printf("Leider sind alle Chancen vorbei. Viel Erfolg beim nächsten Versuch. Die Zufallszahl war:%d\n",zahl);

}/*main Ende */
