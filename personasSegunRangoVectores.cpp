#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
using namespace System;
int NumeroPersonas()
{
	int N;
	cout << "Ingrese numero de personas:"; cin >> N;
	while (N <= 0 || N >= 100)
	{
		cout << "Ingrese otra vez el numero de personas:"; cin >> N;
	}
	return N;
}
void IngresaEdades(int *N, int *Edad)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "Ingrese la edad de la persona " << i + 1 << " :";
		cin >> Edad[i];
	}
}
void SalidaEdades(int *N, int *Edad)
{
	for (int i = 0; i < *N; i++)
	{
		cout << "La edad numero" << i + 1 << "es:" << Edad[i] << endl;
	}
}
int BuscaEdad()
{
	int Sol;
	cout << "Ingrese la edad a solicitar:"; cin >> Sol;
	return Sol;
}


void Lista(int *N, int *Edad)
{
	int Sol = BuscaEdad();
	int Pos;
	int PersonasDe = 0;
	int Menor = Edad[0];
	for (int i = 1; i < *N; i++)
		if (Menor > Edad[i])
		{
			Menor = Edad[i];
			Pos++;

		}
	for (int i = 1; i <= *N; i++)
		if (Edad[i] >= 30 && Edad[i] <= 50)
			PersonasDe++;
	for (int i = 1; i <= *N; i++)
		if (Sol == Edad[i])
			cout << "Si se encontro" << endl;
		else
			cout << "No se encontro" << endl;
	cout << "La menor edad es " << Menor << " y su posicion es la: " << Pos + 1 << endl;
	cout << "El numero de personas que tiene entre 30 y 50 años son:" << PersonasDe << endl;
}

int main()
{
	int N = NumeroPersonas();
	int *Edad;
	Edad = new int[N];
	IngresaEdades(&N, Edad);
	SalidaEdades(&N, Edad);
	Lista(&N, Edad);
	_getch();
	delete[N] Edad;

}