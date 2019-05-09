
// History.cpp

#include <iostream>
using namespace std;

#include "History.h"
#include "globals.h"

History::History(int nRows, int nCols)
	: m_rows(nRows), m_cols(nCols)
{
	for (int k = 0; k < m_rows; k++)
		for (int l = 0; l < m_cols; l++)
			gridHistory[k][l] = '.';
}

bool History::record(int r, int c)
{
	if (r < 1 || r > m_rows || c < 1 || c > m_cols)
		return false;
	int k = r - 1;
	int l = c - 1;
	switch (gridHistory[k][l])
	{
	case '.': gridHistory[k][l] = 'A'; break;
	case 'A': gridHistory[k][l] = 'B'; break;
	case 'B': gridHistory[k][l] = 'C'; break;
	case 'C': gridHistory[k][l] = 'D'; break;
	case 'D': gridHistory[k][l] = 'E'; break;
	case 'E': gridHistory[k][l] = 'F'; break;
	case 'F': gridHistory[k][l] = 'G'; break;
	case 'G': gridHistory[k][l] = 'H'; break;
	case 'H': gridHistory[k][l] = 'I'; break;
	case 'I': gridHistory[k][l] = 'J'; break;
	case 'J': gridHistory[k][l] = 'K'; break;
	case 'K': gridHistory[k][l] = 'L'; break;
	case 'L': gridHistory[k][l] = 'M'; break;
	case 'M': gridHistory[k][l] = 'N'; break;
	case 'N': gridHistory[k][l] = 'O'; break;
	case 'O': gridHistory[k][l] = 'P'; break;
	case 'P': gridHistory[k][l] = 'Q'; break;
	case 'Q': gridHistory[k][l] = 'R'; break;
	case 'R': gridHistory[k][l] = 'S'; break;
	case 'S': gridHistory[k][l] = 'T'; break;
	case 'T': gridHistory[k][l] = 'U'; break;
	case 'U': gridHistory[k][l] = 'V'; break;
	case 'V': gridHistory[k][l] = 'W'; break;
	case 'W': gridHistory[k][l] = 'X'; break;
	case 'X': gridHistory[k][l] = 'Y'; break;
	case 'Y': gridHistory[k][l] = 'Z'; break;
	case 'Z': break;
	default: break;
	}
	return true;
}

void History::display() const
{
	// Draw the grid
	clearScreen();
	for (int r = 0; r < m_rows; r++)
	{
		for (int c = 0; c < m_cols; c++)
			cout << gridHistory[r][c];
		cout << endl;
	}
	cout << endl;
}
