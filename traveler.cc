//
// traveler.cc
// routing
//
// Created by tomaszbrue on 21/02/15.
// Copyright (c) 2015 Thomas Brüggemann. All rights reserved.
//
#include <iostream>
#include <vector>

#include "edge.h"
#include "vertex.h"
#include "network.h"

#define EXIT_SUCCESS 0

using namespace std;

int main(int argc, const char *argv[])
{
	cout << "TRAVELER v1.0" << endl;
	cout << "=============" << endl;

	Edge e1(5.5);
	Edge e2(10.0);

	std::vector<Edge> edges;
	edges.push_back(e1);
	edges.push_back(e2);

	Vertex v1("hi", edges);
	Vertex v2("ho", edges);

	e1.CreateConnection(v1, v2);

	Vertex vNew = e1.GetSource();
	cout << vNew.GetName() << endl;

	return EXIT_SUCCESS;
}