#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void demarrage() __attribute__((constructor));

void demarrage() {

int i;
  for (i = 0; i <= 0.5; i++) {
    printf("\F");
    fflush(stdout);
    usleep(1000000); // ajustez ce délai selon votre préférence
  }
  for (i = 0; i <= 0.5; i++) {
    printf("\i");
    fflush(stdout);
    usleep(1000000); // ajustez ce délai selon votre préférence
  } 
  for (i = 0; i <= 0.5; i++) {
    printf("\r");
    fflush(stdout);
    usleep(1000000); // ajustez ce délai selon votre préférence
  }
    for (i = 0; i <=0.5; i++) {
    printf("\e");
    fflush(stdout);
    usleep(1000000); // ajustez ce délai selon votre préférence
  }
  for (i = 0; i <= 1; i++) {
    printf("\O");
    fflush(stdout);
    usleep(1000000); // ajustez ce délai selon votre préférence
  }

  for (i = 0; i <= 1; i++) {
    printf("\s");
    fflush(stdout);
    usleep(1000000); // ajustez ce délai selon votre préférence
  } 

  for (i = 0; i <= 10; i++) {
    printf("\⬜");
    fflush(stdout);
    usleep(1000000); // ajustez ce délai selon votre préférence
  }
  system("clear");
  printf("\nFireOs chargé avec succès!\n");
  sleep(2);        // Correction du délai de sleep
  system("clear"); // Efface l'écran après le chargement
}

// Cette fonction est nécessaire pour éviter les avertissements sur une fonction
// sans appel.
void placeholder() {}


// Language:C 
// Copy the full code and open the CCoder APP to run it. 
// CCoder APP download link：https://play.google.com/store/apps/details?id=com.ikou.ccoding 