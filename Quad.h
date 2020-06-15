//Archivo .h que define a los apuntadores para crear la cuádrupla
//Definición dirigida por sintaxis / Esquema de traducción


#ifndef QUAD_H
#define QUAD_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*   
*       Se define en un Struct (quads), la composicion de lo que sera un 
*       una cuadrupa para generar el codigo intermedio    
*/

struct quads
{
    char op[10];
	char arg1[10];
	char arg2[10];
	char res[10];
    struct quads *sigQ; 
};

/*	Definicion de las variables (apuntadores) necesarias para manipular
*	la lista que contendra las cuadruplas que generan el codigo intermedio
*/

typedef struct quads quad;

quad *headQ, *nextQ, *tailQ;

/* Definicion de los prototipos de las funciones que se utilisaran para 
*	manipular la lista del codigo intermedio
*/
quad *newQuad(char *op, char *arg1, char *arg2, char *res);
void addQuad();
void pushQuad(quad *nuevoQuad);
void delQuad();
int sizeQuad();
void backpatch(int final, char *label);
void show();
void combinar(int *array1, int *array2, int tamanio1, int tamanio2);

#endif
