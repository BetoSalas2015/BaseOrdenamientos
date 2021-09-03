#include <stdio.h>			//  Para usar las funciones de Entrada/Salida
#include <stdlib.h>			//  Para usar srand(), rand() y system() - funciones de utiler�a-
#include <time.h>			//  Para usar time() -Funciones de tirmpo y reloj-

#define SIZE 15				//  Tama�o del arreglo
#define RANGO 500			//  Rango de n�meros a generar -de 0 a RANGO-

void imprimeArreglo(int arr[], int n)	// arr[]: arreglo a imprimir. n: tama�o del arrglo
{
	int i;
	for(i = 0; i < n; ++i)		
		printf("%d, ", arr[i]);	 
	putchar('\n');				
}

// Implemente su algoritmo de ordenamiento aqu�

int main()
{
	int arreglo[SIZE];
	int i;

	srand( time(0) );
	for(i = 0; i < SIZE; i++)
		arreglo[i] = rand() % RANGO;

	printf("Arreglo desordenado:\n");
	imprimeArreglo(arreglo, SIZE);

	// Invoque su algoritmo de ordenamiento aqu�

	printf("\nArreglo ordenado: \n");
	imprimeArreglo(arreglo, SIZE);

	system("pause");
	return 0;
}