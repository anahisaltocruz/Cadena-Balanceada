#ifndef _PILA_H_
#define _DEFINE_
#include <stdio.h>
#include <stdlib.h>

typedef struct _Nodo {
    char dato;
    struct _Nodo *siguiente;
}Nodo;

Nodo *crear(char d){
    Nodo *nuevo;
    nuevo = (Nodo *)malloc(sizeof(Nodo));
    nuevo->dato=d;
    nuevo->siguiente=NULL;
    return nuevo;
}

Nodo *apilar(Nodo *cima, char d){
    Nodo *nuevo;
    nuevo = crear(d);
    if(cima != NULL)
        nuevo->siguiente = cima;

    return nuevo;
}

Nodo *desapilar(Nodo *cima){
    Nodo *aux;
    aux=cima;
    if(cima != NULL){
        cima=cima->siguiente;
        free(aux);
    }
    return cima;
}
#endif // _PILA_H_

