#ifndef RECTANGULO_H
#define RECTANGULO_H
#include<iostream>
#include<math.h>
#include<stdlib.h>
#include"punto.h"

using namespace std;
class Rectangulo
{
     private:
        Punto SuperiorIzq;
        Punto SuperiorDer;
        Punto InferiorIzq;
        Punto InferiorDer;
    public:
        Rectangulo()
        {
            cout<<"Se ha creado un rectangulo"<<endl;
        }
        void AsignarSupIzq(float x,float y)
        {
            SuperiorIzq.asignarX(x);
            SuperiorIzq.asignarY(y);
        }
        void AsignarSupDer(float x,float y)
        {
            SuperiorDer.asignarX(x);
            SuperiorDer.asignarY(y);
        }
        void AsignarInfIzq(float x,float y)
        {
            InferiorIzq.asignarX(x);
            InferiorIzq.asignarY(y);
        }
        void AsignarInfDer(float x,float y)
        {
            InferiorDer.asignarX(x);
            InferiorDer.asignarY(y);
        }
        float Perimetro()
        {
            float base=abs(InferiorDer.ObtenerX()-InferiorIzq.ObtenerX());
            float altura=abs(InferiorDer.ObtenerY()-SuperiorIzq.ObtenerY());
            return (base*2)+(altura*2);
        }
        float Area()
        {
            float base=abs(InferiorDer.ObtenerX()-InferiorIzq.ObtenerX());
            float altura=abs(InferiorDer.ObtenerY()-SuperiorIzq.ObtenerY());
            return (base*altura);
        }

        float Distancia()
        {
        float altura=((InferiorDer.ObtenerX()-InferiorIzq.ObtenerX())*(InferiorDer.ObtenerX()-InferiorIzq.ObtenerX()))+((InferiorDer.ObtenerY()-InferiorIzq.ObtenerY())*(InferiorDer.ObtenerY()-InferiorIzq.ObtenerY()));
        float a=sqrt(altura);
        return (a);


        }


        float Distanciab()
        {
        float altura=((SuperiorDer.ObtenerX()-SuperiorIzq.ObtenerX())*(SuperiorDer.ObtenerX()-SuperiorIzq.ObtenerX()))+((SuperiorDer.ObtenerY()-SuperiorIzq.ObtenerY())*(SuperiorDer.ObtenerY()-SuperiorIzq.ObtenerY()));
        float a=sqrt(altura);
        return (a);

        }


};

#endif
