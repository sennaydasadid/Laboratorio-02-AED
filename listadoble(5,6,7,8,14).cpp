#include<iostream>
#include<stdlib.h>
using namespace std;

class nodo_doble
{
public:

    int n;
    nodo_doble *sig;
    nodo_doble *ant;
};

nodo_doble *I,*F,*T,*aux,*h;

void insertar(int x){
    T=new nodo_doble();
    T->n=x;
    T->sig=NULL;
    T->ant=NULL;

    if(I==NULL){
        I=T;
    }
    else{
        F->sig=T;
        T->ant=F;
    }
    F=T;
}

void buscar(int x){
    bool flag=false;
    if(x>(F->n/2)){
        T=F;
        while(T!=NULL && !flag){
            //(cout<<T->n<<endl;
            if(T->n==x){
                flag=true;
                cout<<"\nEl elemento "<<x<<" ha sido encontrado";
            }
            else{
                T=T->ant;
            }
        }
    }
    else{
        T=I;
        while(T!=NULL && !flag){
            //(cout<<T->n<<endl;
            if(T->n==x){
                flag=true;
                cout<<"\nEl elemento "<<x<<" ha sido encontrado";
            }
            else{
                T=T->sig;
            }
        }
    }
    if(!flag){
        cout<<"\nNo se ha encontrado el elemento "<<x<<endl;
    }
}
void eliminar(int x){
    if(T==I){
        I=T->sig;
        T=I;
        T->ant=NULL;
    }
    else if(F==T){
        F=T->ant;
        T=F;
        T->sig=NULL;
    }else{
        aux=T->ant;
        aux->sig=T->sig;
        T=T->sig;
        T->ant=aux;
    }

}


void imprimir_I(){
    T=I;
    cout<<"[ ";
    while(T!=NULL){
        cout<<T->n<<" ";
        T=T->sig;
    }
    cout<<" ]";
}

//5. Implementar una función iterativa que imprima los datos de fin a inicio.
void imprimir_F(){
    T=F;
    cout<<"[ ";
    while(T!=NULL){
        cout<<T->n<<" ";
        T=T->ant;
    }
    cout<<" ]";
}

//6. Implementar una función que cuente el número de elementos pares.
void contarPares()
{
    int cont=0;
    nodo_doble *pActual;
    for(pActual=h; pActual!=NULL;pActual=pActual->sig)
        if((pActual->n)%2==0){
            cont++;
        }
    cout<<cont;


}
//7. Implementar una función que ordene los datos de forma ascendente.
void ordenar_ascendete()
{

    nodo_doble *aux1, *aux2;
    int temp;
    aux1=h;
    while(aux1->sig!=NULL)
    {

        aux2=aux1->sig;
        while(aux!=NULL)
        {

            if(aux2->n < aux1->n)
            {
                temp=aux->n;
                aux1->n =aux2->n;
                aux2->n=temp;

            }
            aux1=aux1->sig;
        }
    }
}
//8. Implementar una función que ordene los datos de forma descendente.
void ordenar_descendete()
{

    nodo_doble *aux1, *aux2;
    int temp;
    aux1=h;
    while(aux1->sig!=NULL)
    {

        aux2=aux1->sig;
        while(aux!=NULL)
        {

            if(aux2->n > aux1->n)
            {
                temp=aux->n;
                aux1->n =aux2->n;
                aux2->n=temp;

            }
            aux1=aux1->sig;
        }
    }
}
int main(){
    cout<<"Insertando elemento a la lista doblemente simple\n"<<endl;
    insertar(1);
    insertar(7);
    insertar(2);
    insertar(6);
    insertar(11);
    insertar(20);
    insertar(12);
    insertar(3);
    insertar(4);
    cout<<"Imprimir por el inicio"<<endl;
    imprimir_I();
    cout<<"\nImprimir por el final"<<endl;
    imprimir_F();
    cout<<"\n\nBuscar los elementos:20,16 y 5"<<endl;
    buscar(20);
    buscar(16);
    buscar(5);
    cout<<"\nEliminar los elementos:11,4 y 30"<<endl;
    buscar(11);
    if(T!=NULL){
        eliminar(11);
    }
    cout<<" y eliminado"<<endl;
    buscar(4);
    if(T!=NULL){
        eliminar(4);
    }
    cout<<" y eliminado"<<endl;
    buscar(30);
    if(T!=NULL){
        eliminar(30);
    }

    imprimir_I();
    cout<<endl;
    imprimir_F();
    ordenar_ascendete();
    contarPares();
    imprimir_I();
    return 0;
}
