//fecha:10/06/2024
//autor:Jeremy novoa
//Tema: Sobrecarga de funciones
#include <iostream>
using namespace std;
string saludos ()
{
    return "Bienvenidos...";
}
string saludos (string nombre)
{
    return "Bienvenido" + nombre;
}
string Saludos (string nombre,int edad)
{
    if (edad >=18)
    return "Bienvenido señor" + nombre;
    else
    return "Bienvenido joven" + nombre;
}
int main ()
{
    cout<<endl<<saludos();
    cout<<
}


