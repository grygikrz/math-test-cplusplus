/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Krzysiek
 *
 * Created on 1 października 2016, 00:10
 */

#include <cstdlib>
#include <iostream> 
#include <cmath>


using namespace std;

/*
 * 
 */
double CzytajBok(char opis)
{
    double x;
    do {
        cout << "Podaj długość boku " << opis <<"=";
        cin >> x;
        if(x <= 0)
            cout << "Błąd! Długość boku ma być liczbą dodatnią!\n";
    } while (x <= 0); /* Powtarzamy gdy x nie jest dodatnie */
    return x; // zwracamy wynik
}

int main() {
    
// Ustaw jaki program
int licz;

cout << "\nHello World!!!! :)\n\n" 
        " 1.Licz sumę dwóch liczb\n "
        "2.Obliczanie pola powierzchni kwadratu \n "
        "3.Obliczenie pola i obwodu prostokąta\n "
        "4.Obliczanie pola trójkąta - wzrór Herona\n"
        " 5.Pole powierzchni i obwód koła \n"
        " 6.Operatory koninkcji && i alternatywy\n"
        "\nPodaj numer programu:\n";

cin >> licz;
system("pause");


                    if(licz == 1&& static_cast<int>(licz)){
                        
                            // Suma
                            cout << "Podaj liczbę n = "; 
                            int n, n2, suma;
                            cin >> n;
                            cout << "\nPodaj 2 liczbę n = "; 
                            cin >> n2;
                             if(n > 0 && static_cast<int>(n) && n2 > 0 && static_cast<int>(n2)){
                                suma = n + n2;
                                cout << "Suma cyfr: " << suma;    
                                system("pause"); 
                             }else{
                                    cout << "Błąd!  Podaj liczbę";
                             }
                                           
                    }else if(licz == 2 && static_cast<int>(licz)){
                        
                            // Pole powierzchni kwadratu

                            system("chcp 1250");    
                            int a, pole;
                            
                            cout << "Obliczanie pola powierzchni kwadratu\n\n"; 
                             cout << "Podaj długość boku:\n"; 
                            cin >> a;
                            
                            
                                if(a > 0 && static_cast<int>(a)){
                                    pole = a*a;
                                    cout << "Pole powierzchni S = " << pole << endl;    
                                    system("pause");
                                }else if (a <= 0 && isdigit(a)){
                                    cout << " Błąd!  Podaj liczbę dodatnią\n";
                                }else{
                                    cout << "Błąd!  Podaj liczbę";
                                    
                                }
                            
                    }else if(licz == 3 && static_cast<int>(licz)){
                        
                            // Obliczenie pola i obwodu prostokąta

                            system("chcp 1250");
                            int a, b, pole, obwod;
                            cout << "Obliczenie pola i obwodu prostokąta\n\n";
                            cout << "Podaj długość boku, a = ";
                            cin >> a;
                            cout <<"Podaj dlugosc boku, b = ";
                            cin >> b;
                             if(a > 0 && static_cast<int>(a) && b > 0 && static_cast<int>(b) ){
                                    pole = a*b;
                                    obwod = 2*(a+b);
                                    cout << "Pole powierzchni S = " << pole << endl;
                                    cout << "Obwód prostokąta L = " << obwod << endl;
                                    system("pause");
                             }else{
                                    cout << "Błąd!  Podaj wlasciwą dodatnią liczbę";
                                }
                 
                    }else if(licz == 4 && static_cast<int>(licz)){
                        
                            // Obliczenie pola i obwodu prostokąta
                            // ustawiamy wszystkie zmienne na  liczby zmiennoprzecinkowe
                            double a, b, c, p, pole;
                            cout << "Obliczanie pola trójkąta - wzrór Herona\n\n";

                                a = CzytajBok ('a');
                                b = CzytajBok ('b');
                                c = CzytajBok ('c');
                            
                             if(a > 0 && static_cast<int>(a) && b > 0 && static_cast<int>(b) && c > 0 && static_cast<int>(c) ){
                                 
                                 // Sprawdzamy czy trójkąt moze mieć takie podane wymiary
                                 if(a+b > c && b+c > a && c+a > b) {  
                                     
                                     //sprawdzamy czy jest trójkątem
                                     if(fabs(a-b) < c && c < a+b){
                                         
                                        // Liczymy  połowę obwódu trójkąta 
                                        p = (a+b+c)/2;

                                        // Liczymy pole pow ze wzoru herona (sqrt - pierwiastek stopnia drugiego))
                                        pole =  p * (p-a) * (p-b) * (p-c);
                                        
                                        if(pole > 0) {
                                            pole = sqrt(pole);
                                            // ustawiamy wyswietlanie wyniku na 4 miejsca po przecinku
                                            cout.precision(4);
                                            cout.setf(ios::fixed);
                                            cout << "Pole trójkąta S = " << pole << endl; 
                                        }else{
                                       cout << "Błąd! Podane liczby nie są długościami boków trójkąta\n";   
                                      }
                                        
                                     } else{
                                       cout << "Błąd! Taki trójkąt nie istnieje\n";   
                                      }
                                     }else{
                                       cout << "Błąd! Podane liczby nie są długościami boków trójkąta\n";   
                                      }
                                      
                                }else{
                                    cout << "Błąd!  Podaj wlasciwą dodatnią liczbę";
                                }
                            
                    }else if(licz == 5 && static_cast<int>(licz)){
                       
                        int r;
                        
                        do {
                            cout << "Podaj długość promienia, r = ";
                            cin >> r;
                            if (r < 0)
                                cout << "Błąd. Promień nie może być ujemny!\n";
                        }while( r < 0 );
                        
                        if(r > 0) {
                         cout << "Pole koła S = " << 3.14159*r*r << endl; 
                         cout << "Obwód koła L = " << 6.28319*r << endl;   
                        }
                        
                    
                    }else if(licz == 6 && static_cast<int>(licz)){
                    
                        system("chcp 1250");
                        int p,q;
                        
                        cout << "Operator negacji - !\n\n";
                        cout << "p\t!p\n";
                        
                        for (p = 0; p <= 1; ++p)
                            cout << p << '\t' << !p << endl;
                        cout << "\nOperatory koniunkcji && i alternatywy || : \n\n";
                        cout << "p\tq\tp && q\tp||q\n";
                        
                        for(p=0; p <=1; ++p)
                            for(q=0; q <=1; ++q)
                                cout <<p << '\t' << q << '\t' << (p &&q) << '\t' <<(p || q) << endl;
                        system("pause");
                        return 0;
                    
                    }else if(licz == 7 && static_cast<int>(licz)){
                    
                    
                    
                    
                    }else{
                         cout << "Podales złą liczbę. Spróbuj jescze raz" ;
                         main();
                    }
}

