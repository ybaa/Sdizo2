#include <iostream>
#include "GraphGenerator.h"
#include "Operations.h"

using namespace std;

void randomGraph() {
	GraphGenerator generator(5);
	Operations graph;
	graph.createDirectedGraph();
	graph.createUndirectedGraph();
	graph.createMatrixForDirectedGraph();
	graph.createMatrixForUndirectedGraph();
	graph.makeDirectedNeighbourList();
	graph.makeUndirectedNeighbourList();

	int choice = 0;
	do {
		cout << "wybierz opcje " << endl;
		cout << "[1] wyswietl graf skierowany w formie macierzowej" << endl;
		cout << "[2] wyswietl graf nieskieroway w formie macierzowej" << endl;
		cout << "[3] wyswietl graf skierowany w formie listowej" << endl;
		cout << "[4] wyswietl graf nieskierowany w formie listowej" << endl;
		cout << "[5] algorytm prima dla grafu nieskierowanego na bazie reprezentacji macierzowej" << endl;
		cout << "[6] algorytm prima dla grafu nieskierowanego na bazie reprezentacji listowej" << endl;
		cout << "[7] algorytm dijkstry dla grafu skierowanego na bazie reprezentacji macierzowej" << endl;
		cout << "[8] algorytm dijkstry dla grafu skierowanego na bazie reprezentacji listowej" << endl;
		cout << "[9] koniec" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			graph.printMatrixDirected();
			break;
		case 2:
			graph.printMatrixUndirected();
			break;
		case 3:
			graph.printDirectedNeighbourList();
			break;
		case 4:
			graph.printUndirectedNeighbourList();
			break;
		case 5:
			graph.primMatrix();
			break;
		case 6:
			graph.primList();
			break;
		case 7:
			graph.dijkstryMatrix(graph.startVerticle);
			break;
		case 8:
			graph.dijkstryList(graph.startVerticle);
			break;
		default:
			cout << "bledny wybor" << endl;
			break;
		}

	} while (choice != 9);
}

void readGraph() {
	bool success;
	Operations graph;
	do {
		success = graph.readFromFile();
	} while (success != true);

	graph.createUndirectedGraph();
	graph.createMatrixForDirectedGraph();
	graph.createMatrixForUndirectedGraph();
	graph.makeDirectedNeighbourList();
	graph.makeUndirectedNeighbourList();

	int choice = 0;
	do {
		cout << "wybierz opcje " << endl;
		cout << "[1] wyswietl graf skierowany w formie macierzowej" << endl;
		cout << "[2] wyswietl graf nieskieroway w formie macierzowej" << endl;
		cout << "[3] wyswietl graf skierowany w formie listowej" << endl;
		cout << "[4] wyswietl graf nieskierowany w formie listowej" << endl;
		cout << "[5] algorytm prima dla grafu nieskierowanego na bazie reprezentacji macierzowej" << endl;
		cout << "[6] algorytm prima dla grafu nieskierowanego na bazie reprezentacji listowej" << endl;
		cout << "[7] algorytm dijkstry dla grafu skierowanego na bazie reprezentacji macierzowej" << endl;
		cout << "[8] algorytm dijkstry dla grafu skierowanego na bazie reprezentacji listowej" << endl;
		cout << "[9] koniec" << endl;
		cin >> choice;

		switch (choice) {
		case 1:
			graph.printMatrixDirected();
			break;
		case 2:
			graph.printMatrixUndirected();
			break;
		case 3:
			graph.printDirectedNeighbourList();
			break;
		case 4:
			graph.printUndirectedNeighbourList();
			break;
		case 5:
			graph.primMatrix();
			break;
		case 6:
			graph.primList();
			break;
		case 7:
			graph.dijkstryMatrix(graph.startVerticle);
			break;
		case 8:
			graph.dijkstryList(graph.startVerticle);
			break;
		default:
			cout << "bledny wybor" << endl;
			break;
		}

	} while (choice != 9);


}


int main() {


	int randomOrFile = 0;

	do {
		cout << "wybierz sposob wygenerowania grafu " << endl;
		cout << "[1] losowo" << endl;
		cout << "[2] z pliku" << endl;
		cout << "[3] wyjscie" << endl;
		cin >> randomOrFile;

		switch (randomOrFile) {
		case 1:
			randomGraph();

			break;

		case 2:
			readGraph();
			break;
		case 3:
			break;
		default:
			cout << "bledny wybor" << endl;
			break;
		}
	} while (randomOrFile != 3);


	
	
	system("PAUSE");
}