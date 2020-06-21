#include <iostream>

using namespace std;
class Samochod{
public:
string marka;
string kolor;

};
class Lodka{
    public:
    int waga;
    int rozmiar;
};
class Amfibia:public Samochod, public Lodka{
    public:
  void wczytaj_wypisz(){
    cout << "Podaj wage: ";
    cin >> waga;
    cout << "Podaj rozmiar: ";
    cin >> rozmiar;
    cout << "Podaj kolor: ";
    cin >> kolor;
    cout << "Podaj marke: ";
    cin >> marka;
    cout <<endl<<endl<< waga<<": "<<rozmiar<<": "<<kolor<<": "<<marka;
    }
};
int main()
{
    Amfibia a1;
    a1.wczytaj_wypisz();
    return 0;
}
