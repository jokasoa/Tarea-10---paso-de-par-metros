//fecha:10/06/2024
//autor:Jeremy novoa
//Tema: Paso de parametros por valor 
#include <iostream>
using namespace std;

int FuncionPasoporValor (int num)
{
    num=num*10;
   
    cout<<endl<<"El valor de la variable num es"<<num;
     return 1;
    
}
int main ()
{
    int num =2;
    cout<<endl<<"El valor de la variable num antes de la llamada es"<<num;
    FuncionPasoporValor (num);
    cout<<endl<<"El valor de la variable num despues de la llamada "<<num;
    return 0;
}
