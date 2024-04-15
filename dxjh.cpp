#include <iostream>
#include <map>

using namespace std;

int main(){

    map <string, string> clases;

    clases.insert({"Lunes", "No hay programacion"});
    clases.insert({"Martes", "No hay programacion"});
    clases.insert({"Miercoles", "No hay programacion"});
    clases.insert({"Jueves", "Hay clases"});
    clases.insert({"Viernes", "Hay clases"});
    clases.insert({"Sabado", "No hay universidad"});
    clases.insert({"Domingo", "No hay universidad"});



    cout << "Ingrese que dia es hoy: ";
    string dias;
    getline(cin, dias);
    int dia;

    if(dias == "Lunes"){
        dia = 1;
    }else if(dias == "Martes"){
        dia = 2;
    }else if(dias == "Miercoles"){
        dia = 3;
    }else if(dias == "Jueves"){
        dia = 4;
    }else if(dias == "Viernes"){
        dia = 5;
    }else if(dias == "Sabado"){
        dia = 6;
    }else if(dias == "Domingo"){
        dia = 7;
    }else{
        cout << "Error ingrese un dia valido: Lunes, Martes, Miercoles, Jueves, Viernes, Sabado, Domingo";
    };



    switch(dia){
        case 1:
            cout << clases["Lunes"];
        break;
        case 2:
            cout << clases["Martes"];
        break;
        case 3:
            cout << clases["Miercoles"];
        break;
        case 4:
            cout << clases ["Jueves"];
            break;
        case 5:
            cout << clases["Viernes"];
        break;
        case 6:
            cout << clases["Sabado"];
        break;
        case 7:
            cout << clases["Domingo"];
        break;
    };




    return 0;
}
