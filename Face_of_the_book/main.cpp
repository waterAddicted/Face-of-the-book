#include <fstream>
#include "Domain/Utilizator.h"
#include "UI/Console.h"
#include "Repository/Dictionar.h"
using namespace std;

int main() {
    ifstream utilizatori,prietenii,evenimente,mesaje;
    utilizatori.open("utilizatori.csv");
    prietenii.open("prietenii.csv");
    evenimente.open("evenimente.csv");
    mesaje.open("mesaje.csv");

    Console c;
    c.print_menu();


    utilizatori.close();
    prietenii.close();
    evenimente.close();
    mesaje.close();
    return 0;
}
