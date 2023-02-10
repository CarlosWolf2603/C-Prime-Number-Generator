#include <stdio.h>

// main funktion
int main()
{
    // initialisierung von variable
    int i, till_number, n, _counter, line_counter=0, line =0;

    // nach der benutzereingabe fragen
    printf("Zahl bis zu der alle Primzahlen angezeigt werden sollen: \n");

    // benutzereingaben erhalten
    scanf("%d", &n);

    printf("\n\n\nPrimzahlen (1-%d)\n\n\n",n);
    // erste zeile anzeigen
    printf("Zeile %d : \t1 ", line);
    line_counter++;
    // erste schleife von 1 bis n wobei n = benutzereingabenummer
    for(till_number = 1; till_number <= n; till_number++)
    {
        // schleife für primzahlenalgorithmus
        _counter = 0;
        for (i = 2; i <= till_number/2; i++)
        {
            // überprüfen ob die zahl eine primzahl ist oder nicht
            if(till_number%i == 0)
            {
                // wenn till_number / aktuelle iteration 0 ist bedeutet das die zahl ist keine primzahl
                _counter++;
                break;
            }
        }

        // if counter ist 0 und till number ist nicht gleich 1
        if(_counter == 0 && till_number != 1 )
        {
            // wenn die obrige bedingung wahr ist zeige die primzahl
            printf(" \t%d ",till_number);

            // zeilenzähler
            line_counter++;

            // überprüfer für die Zeile, wenn die aktuelle Primzahl 10 ist, gehe zu neuer Zeile
            if(line_counter%10 == 0)
            {
                // zeileninkrement
                line++;

                // zeige die zeilennummer
                printf("\nZeile %d : ", line);
            }
        }
    }
    return 0;
}
