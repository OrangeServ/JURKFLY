#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> // Pour utiliser la fonction system()

void demarrage() __attribute__((constructor));

void demarrage() {
    printf("Le système démarre...\n");
    // Autres actions de démarrage à ajouter si nécessaire

    char bar[] = "||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||";
    int i;
    printf("Chargement de FireOs: ");
    for (i = 0; i <= 50; i++) {
        printf("\r");
        printf("[%-50s] %d%%", bar + i, 2 * i);
        fflush(stdout);
        usleep(100000); // ajustez ce délai selon votre préférence
    }
    printf("\nFireOs chargé avec succès!\n");
    sleep(2.5);
    system("clear"); // Efface l'écran après le chargement
}

// Cette fonction est nécessaire pour éviter les avertissements sur une fonction sans appel.
void placeholder() {}
// Language:C 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 