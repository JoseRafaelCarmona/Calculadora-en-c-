#include <iostream>
using namespace std;
class calculadora{
    public:
    int sumar(int num1,int num2);
    int restar(int num1,int num2);
    float dividir(int num1,int num2);
    int multiplicar(int num1,int num2);
};
int calculadora::sumar(int num1, int num2){
    return num1+num2;
}
int calculadora::restar(int num1,int num2){
    return num1-num2;
}
float calculadora::dividir(int num1,int num2){
    return num1/num2;
}
int calculadora::multiplicar(int num1,int num2){
    return num1*num2;
}
int main(){
    int n1,n2,respuesta;
    calculadora cal;
    cout<<"ingresa primer numero: "<<endl;
    cin>>n1;
    cout<<"ingresa segundo numero: "<<endl;
    cin>>n2;
    cout<<"1.-sumar 2.-restar   3.-dividir  4.-multiplicar "<<endl;
    cin>>respuesta;
    if(respuesta==1){
        cout<<"respuesta: "<<cal.sumar(n1,n2)<<endl;
    }else{
        if(respuesta==2){
            cout<<"respuesta: "<<cal.restar(n1,n2)<<endl;
        }else{
            if(respuesta==3){
                cout<<"respuesta: "<<cal.dividir(n1,n2)<<endl;
            }else{
                if(respuesta==4){
                    cout<<"respuesta: "<<cal.multiplicar(n1,n2)<<endl;
                }else{
                    cout<<"debes ingresar un numero de las opciones :("<<endl;
                }
            }
        }
    }
    return 1;
}