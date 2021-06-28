#include "R1.h"
#include <string.h>
//1: Balanceada
//2: No balanceada
int verificar(char *a){
    Nodo *pila = NULL;
    printf("\nCADENA A VERIFICAR: %s\n",a);
    for(int i=0; i<strlen(a); i++){
        if (a[i] == '(')
            pila = apilar(pila,a[i]);
        else if (a[i] == ')'){
            if(pila != NULL){
                if(pila->dato != '(')
                    return 0;
                else
                    pila = desapilar(pila);
            }else
                return 0;
        }

        if(i == (strlen(a)-1) && pila == NULL)
            return 1;

        if(i == (strlen(a)-1) && pila != NULL)
            return 0;
    }
}

int main(){
    printf("PROGRAMA PARA VERIFICAR QUE UNA CADENA ESTE BALANCEADA\n");
    int ans = verificar("())(()()()()())");
    return 0;
}

