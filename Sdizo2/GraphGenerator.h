#pragma once
class GraphGenerator {

private:
	int maxWeight, minEdges, edges, verticles;
	double maxEdges;
	int **result;

public:
	GraphGenerator();
	GraphGenerator(int);
	~GraphGenerator();
};


