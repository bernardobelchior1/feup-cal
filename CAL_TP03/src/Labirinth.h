/*
 * labirinth.h
 *
 */

#include <stack>
#include <utility>

#ifndef LABIRINTH_H_
#define LABIRINTH_H_

#define REACHED_GOAL 1
#define OK 0
#define OUT_OF_BOUNDS -1
#define WALL -2

using namespace std;

class Labirinth {
	int labirinth[10][10];
	bool visited[10][10];
	void initializeVisited(int x, int y);
	bool foundTheSolution;
	stack<pair<int, int> > routes;
public:
	Labirinth(int values[10][10]);
	void printLabirinth();
	bool findGoal(int x, int y);
	bool findActualGoal(int x, int y);
};

#endif /* LABIRINTH_H_ */
