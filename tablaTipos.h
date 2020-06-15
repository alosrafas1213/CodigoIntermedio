//Programa .h que se define en el archivo .c de la tabla de tipos
//Autores:

#ifndef TABLATIPOS_H
#define TABLATIPOS_H

#include <string.h>
#include <stdlib.h>

/*Se define en un Struct, la composicion de lo que sera un tipo de dato 
  en el lenguaje. Ademas de los prototipos de las funciones que 
  se utilizaran para manipular la pila de la tabla de tipos
*/

struct tipoNodo {
    int id;	
    char tipo[15];
    int tipoBase;
    int tamanio;
    int dimension;				
    struct tipoNodo *next;
};

/* Declaracion de las variables (apuntadores) y funciones de tipo 
  tablaTipo que se necesitaran para manipular la pila que guardara los 
  tipos de datos que se va a ir creando 
*/

typedef struct tipoNodo tablaTipo;
tablaTipo *headT, *anteriorT, *actualT;
int iDTipo;

/* Definicon de las funciones*/

void init_tableT();
tablaTipo *crear_Tipo(const char *tipo, int tipoBase, int tamanio, int dimension);
void insertarTipo(tablaTipo *nuevo_Tipo);
void borrarTipo();
tablaTipo *buscarTipo(int id);
char *get_Tipo(int id);
int get_TipoBase(int id);
int get_Tamanio(int id);
int get_Dimension(int id);

#endif
