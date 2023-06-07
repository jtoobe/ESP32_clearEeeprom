#include <EEPROM.h>

// Tamaño de emulación de EEPROM en bytes
#define EEPROM_SIZE 4096

void setup() {
  // Inicializar la emulación de EEPROM
  EEPROM.begin(EEPROM_SIZE);

  // Borrar todos los datos de la emulación de EEPROM
  for (int i = 0; i < EEPROM_SIZE; i++) {
    EEPROM.write(i, 0);
  }
  EEPROM.commit(); // Guardar los cambios en la memoria flash

  // Iniciar cualquier otra configuración o inicialización necesaria
}

void loop() {
  // Vacío, no se realiza ninguna tarea en el bucle principal
}



