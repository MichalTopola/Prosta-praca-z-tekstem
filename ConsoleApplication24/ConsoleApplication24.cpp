// ConsoleApplication24.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
string konwertuj(std::string & sTekst)
{
	std::string sWynik;
	sTekst.erase(23, 6);
	sTekst.erase(29, 4);
	sTekst.erase(0, 3);
    sTekst.insert(0, "[b]");
	sTekst.erase(11, 4);
	sTekst.insert(11, "[/b]");
	sTekst.insert(30, "[b]");
	sTekst.erase(33.1);
	sTekst.insert(33, ":)");
	
	return sWynik;
}
int main()
{
	std::string tekst = "<b>to jest </b> testowy       napis     <b>:)";
	cout << tekst << endl;
	std::cout << konwertuj(tekst) << std::endl;
	cout << tekst << endl;
	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
