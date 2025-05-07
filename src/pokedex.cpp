//contenerdores
#include <list>
#include <vector>
#include <map>
//flujo de datos(stream)
#include <iostream>
#include <fstream>
#include <sstream>
//cadenas de texto
#include <string>
using namespace std;

enum TipoPokemon{
FUEGO,
PLANTA,
AGUA,
ELECTRICO,
VOLADOR,

};

class Pokemon{
private:
string nombre;
list<TipoPokemon> tipos;

public:
};

int main(int argc, char const *argv)
{
//arreglos clasicos
int edades[10];
edades[0] = 1;
edades[1] = 10;
edades[2] = 20;
edades[3] = 30;
edades[4] = 40;
cout << "Edad numero 1 :" << edades[0] << endl; //accede a un valor unico;

//contenedores de la libreria estandar c++
list<int> ListaEdades;
ListaEdades.push_back(1);
ListaEdades.push_back(10);
ListaEdades.push_back(20);
ListaEdades.push_back(30);
ListaEdades.push_back(40);
//no se puede seleccionar un elemento de una forma natural
//ya que la lista esta diseñada para ser recorrida
int indice = 1;
for (auto &&edad :ListaEdades)
{
cout << "Edad numero " << indice << ":" << edad << endl;
indice++;

}



//utiliar estructura del vector
//la cual si se puede accerder por elemento
vector<int> VectorEntero;
VectorEntero.push_back(1);
VectorEntero.push_back(2);
VectorEntero.push_back(3);
VectorEntero.push_back(4);
VectorEntero[4] = 5; // <-- aqui utilizamos el operador []

for(int i = 0; i < 5; i++)
{
cout << "Edad " << i << ":" << VectorEntero[i] << endl;
}


//Mapas
cout << "4.- Mapas"<<endl;
//<llave , valor> como en un diccionario
map<string,string> pokedex;






return 0;
}