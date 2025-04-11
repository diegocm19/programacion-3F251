#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
ofstream archivoSalida("archivo.txt");
if(archivoSalida){
cerr << "error al leer archivo" << endl;
return 1; // Finalizar con error
}


cout << "escribiendo archivo" << endl;
archivoSalida << "Hola mundo este es el primer archivo" << endl;


return 0;
}