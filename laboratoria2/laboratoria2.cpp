// laboratoria2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    //zad1.2.1
    //for (int i = 5; i < 7; i++) {
      //  cout << i << endl;
    //}
    // zad1.2.2
    //for (int i = 5; i <= 7; i++) {
     //   cout << i << endl;
    //}
    //zad1.3
   // for (int i = 0; i <= 10; i=i+2) {
    //    cout << i << endl;
    //}
    //zad1.4
    //for (int i = 10; i >= 0; i--) {
     //   cout << i << endl;
    //}
    //zad 3 do zrobienia 
     /*  int fahr, celsius; //zmienne typu int 
        int start, limit, krok; //zmienne typu int 

        start = 0; //przypisz 0 do start 
        limit = 200; //przypisz 200 do limit 
        krok = 20; //przypisz 20 do krok 

        fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
        while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
            celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
            cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
            fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
     }
    */
   /* for (int i = 0; i<10; i++) {                      //zad 7.
        int liczba;
        cout << "podaj liczbe rzeczywista ";
        cin >> liczba;
        if (liczba > 0) {
            cout  << "liczba "  << liczba << " jest dodatnia" << endl;
        }
    }*/
	/*for (int i = 0; i <= 100; i = i + 2) {             //zad 8.
        cout << i << endl;
    } */
   /* int n = 0;                                        //zad 9.
    int S = 0;
    cout << "podaj liczbe ";
    cin >> n;
    while (S <= 100)
    {
        if(S%n==0)
			cout << S << endl;
        S++;
    } */
   /*int n = 0;                                     //zad 10.
    int S = 0;
    int licznik = 0;
    cout << "podaj liczbe ";
    cin >> n;
    while (S <= 100)
    {
        if (S % n == 0)
            licznik = licznik + 1;
        S++;
    }
	cout << "jest " << licznik << " liczb podzielnych bez reszty przez " << n << " w przedziale od 0 do 100" << endl;
*/
	int a, b; 									 //zad 11.  
	cout << "podaj dwie liczby calkowite " << endl;   
    cin >> a >> b;
    if (a > b) {

   }
    else if (b > a) {

    }
    else if (a == b){

    }
/*	int n = 0;                       //zad 12.
    cin >> n;
    int b = n;
    int suma = 0;
    for (int i = 0; i < b; i++) {
        cout << "podaj liczbe ";
        cin >> n;
		suma = suma + n;
    }
	cout << "srednia arytmetyczna podanych liczb to " << (float)suma / b << endl; */

  /*  for (int i = 100; i >= 0; i--) {                   //zad 13.
        cout << i << endl;
    }?*/
	/*int a, b, c;                                         //zad 14.
	cout << "podaj 3 liczby calkowite " << endl;
	cin >> a >> b >> c;
    if (a >= b && a >= c) {
        cout << "najwieksza liczba to " << a << endl;
    }
    else if (b >=a && b >= c) {
        cout << "najwieksza liczba to " << b << endl;
    }
    else if (c >= a && c >= b) {
        cout << "najwieksza liczba to " << c << endl;
    }*/


}

