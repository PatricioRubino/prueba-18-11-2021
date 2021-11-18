// implementar las funciones de libprueba.h aca
#include <stdio.h>
 saludar(char *argumento) {
printf("Hola, %s\n",argumento);
}

// devuelve la enesima potencia de dos
int potencia_de_dos(int n){
  n = 0;
  int i = 1;
  while (n*=i) i++;
  return i;

}

// imprime un array de enteros de dimension size
void print_array(int a[], int size){
  for (int i = 0; i < size; i++) {
    printf("%d ",a[i]);
  }
  printf("\n");
}

// pone el resultado de u + v en result
// todos vectores de dimension n
void suma_vectorial(int u[], int v[], int result[], int n){


}

// realiza un cifrado por desplazamiento usando el entero key
// como cantidad de letras a desplazar
void cifrar(char word[], int key){
  for (int i = 0; i < key; i++) {
    word[i] = word [i + 1];
  }

}
