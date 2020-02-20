#include <iostream>
#include "Punto.h"
#include "Rectangulo.h"



int main()
{
    Rectangulo miRectangulo;
    miRectangulo.AsignarSupIzq(1,5);
    miRectangulo.AsignarSupDer(7,5);
    miRectangulo.AsignarInfIzq(2,1);
    miRectangulo.AsignarInfDer(7,1);
    cout<<"El perimetro del rectangulo es: "<< miRectangulo.Perimetro() <<endl;
    cout<<"El area del rectangulo es: "<<miRectangulo.Area()<<endl;

   if (miRectangulo.Distancia()==miRectangulo.Distanciab()){

        cout<<"Es un rectagulo regular"<<endl;

   }
else{
      cout<<"No es un rectagulo regular"<<endl;

}


}


