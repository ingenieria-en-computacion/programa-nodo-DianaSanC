// nodo.h
#ifndef _NODO_H_
#define _NODO_H_
#define TAM 1000


#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int DATO;  // Definimos Dato como un entero
typedef struct Nodo{
    DATO dato; 
    struct Nodo* siguiente;
} NODO;

// Declaraciones funciones
NODO* crear_nodo();
bool borrar_nodo(NODO* n);
NODO* asignar_dato(NODO* n, DATO d);
DATO obtener_dato(NODO* n);
NODO* asignar_referencia(NODO* n, NODO* e);
NODO* obtener_referencia(NODO* n);

#endif 