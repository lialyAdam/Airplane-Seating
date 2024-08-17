
#include <iostream>
using namespace std;
int main()
{

	int airplane[13][6], row[2];
	char Array[13][6];
	string tick;
	char seat;



	for (int i = 0; i < 13; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			Array[i][j] = '*';
			airplane[i][j] = 0;

		}
	}
	for (;;)
	{
		cout << "Here (*) indicates that the seat is available .(X) indicates that the seat is occupied " << endl;
		cout << endl;
		cout << "Rows 1 and 2 are first class " << endl;
		cout << "Rows 3 through 7 are business class " << endl;
		cout << "Rows 8 through 13 are economy class " << endl;



		cout << "        A       B       C       D       E       F" << endl;
		cout << "Row 1\t" << Array[0][0] << "\t " << Array[0][1] << "\t"
			<< Array[0][2] << "\t" << Array[0][3] << "\t" << Array[0][4] << "\t"
			<< Array[0][5] << endl;

		cout << "Row 2\t" << Array[1][0] << "\t" << Array[1][1] << "\t"
			<< Array[1][2] << "\t" << Array[1][3] << "\t" << Array[1][4] << "\t"
			<< Array[1][5] << endl;

		cout << "Row 3\t" << Array[2][0] << "\t" << Array[2][1] << "\t"
			<< Array[2][2] << "\t" << Array[2][3] << "\t" << Array[2][4] << "\t"
			<< Array[2][5] << endl;

		cout << "Row 4\t" << Array[3][0] << "\t" << Array[3][1] << "\t"
			<< Array[3][2] << "\t" << Array[3][3] << "\t" << Array[3][4] << "\t"
			<< Array[3][5] << endl;

		cout << "Row 5\t" << Array[4][0] << "\t" << Array[4][1] << "\t"
			<< Array[4][2] << "\t" << Array[4][3] << "\t" << Array[4][4] << "\t"
			<< Array[4][5] << endl;

		cout << "Row 6\t" << Array[5][0] << "\t" << Array[5][1] << "\t"
			<< Array[5][2] << "\t" << Array[5][3] << "\t" << Array[5][4] << "\t"
			<< Array[5][5] << endl;

		cout << "Row 7\t" << Array[6][0] << "\t" << Array[6][1] << "\t"
			<< Array[6][2] << "\t" << Array[6][3] << "\t" << Array[6][4] << "\t"
			<< Array[6][5] << endl;

		cout << "Row 8\t" << Array[7][0] << "\t" << Array[7][1] << "\t"
			<< Array[7][2] << "\t" << Array[7][3] << "\t" << Array[7][4] << "\t"
			<< Array[7][5] << endl;

		cout << "Row 9\t" << Array[8][0] << "\t" << Array[8][1] << "\t"
			<< Array[8][2] << "\t" << Array[8][3] << "\t" << Array[8][4] << "\t"
			<< Array[8][5] << endl;

		cout << "Row 10\t" << Array[9][0] << "\t" << Array[9][1] << "\t"
			<< Array[9][2] << "\t" << Array[9][3] << "\t" << Array[9][4] << "\t"
			<< Array[9][5] << endl;

		cout << "Row 11\t" << Array[10][0] << "\t" << Array[10][1] << "\t"
			<< Array[10][2] << "\t" << Array[10][3] << "\t" << Array[10][4] << "\t"
			<< Array[10][5] << endl;

		cout << "Row 12\t" << Array[11][0] << "\t" << Array[11][1] << "\t"
			<< Array[11][2] << "\t" << Array[11][3] << "\t" << Array[11][4] << "\t"
			<< Array[11][5] << endl;

		cout << "Row 13\t" << Array[12][0] << "\t" << Array[12][1] << "\t"
			<< Array[12][2] << "\t" << Array[12][3] << "\t" << Array[12][4] << "\t"
			<< Array[12][5] << endl;

		cout << endl;

		cout << "Please Enter Ticket type (first class (FC), business class(BC), or economy class(EC)) : ";
		cin >> tick;


		cout << "Desired Row: ";
		cin >> row[0];

		cout << "Desired seat (A,B,C,D,E or F): ";
		cin >> seat;



		switch (seat)
		{
		case 'A':
		case 'a':
			row[0] = row[0] - 1;
			row[1] = 1;
			row[1] = row[1] - 1;
			break;

		case 'B':
		case 'b':
			row[0] = row[0] - 1;
			row[1] = 2;
			row[1] = row[1] - 1;
			break;

		case 'C':
		case 'c':
			row[0] = row[0] - 1;
			row[1] = 3;
			row[1] = row[1] - 1;
			break;

		case 'D':
		case 'd':
			row[0] = row[0] - 1;
			row[1] = 4;
			row[1] = row[1] - 1;
			break;

		case 'E':
		case 'e':
			row[0] = row[0] - 1;
			row[1] = 5;
			row[1] = row[1] - 1;
			break;

		case 'F':
		case 'f':
			row[0] = row[0] - 1;
			row[1] = 6;
			row[1] = row[1] - 1;
			break;

		}


		if (tick == "FC")
		{
			if (row[0] + 1 == 1 || row[0] + 1 == 2)
			{

				if (airplane[row[0]][row[1]] == 0)
				{
					airplane[row[0]][row[1]] = 1;
					Array[row[0]][row[1]] = 'X';
				}
				else if (airplane[row[0]][row[1]] == 1)
				{
					cout << "Message: Seat " << row[0] + 1 << seat << " is already occupied" << endl;
				}

			}
			else
			{
				cout << "Wrong Class" << endl;
			}

		}
		else if (tick == "BC")
		{
			if (row[0] + 1 == 3 || row[0] + 1 == 4 || row[0] + 1 == 5
				|| row[0] + 1 == 6 || row[0] + 1 == 7)
			{
				if (airplane[row[0]][row[1]] == 0)
				{
					airplane[row[0]][row[1]] = 1;
					Array[row[0]][row[1]] = 'X';
				}
				else if (airplane[row[0]][row[1]] == 1)
				{
					cout << "Message: Seat " << row[0] + 1 << seat << " is already occupied" << endl;
				}
			}
			else
			{
				cout << "Wrong Class" << endl;

			}
		}
		else if (tick == "EC")
		{
			if (row[0] + 1 == 8 || row[0] + 1 == 9 || row[0] + 1 == 10
				|| row[0] + 1 == 11 || row[0] + 1 == 12 || row[0] + 1 == 13)
			{
				if (airplane[row[0]][row[1]] == 0)
				{
					airplane[row[0]][row[1]] = 1;
					Array[row[0]][row[1]] = 'X';
				}
				else if (airplane[row[0]][row[1]] == 1)
				{
					cout << " warning : Seat " << row[0] + 1 << seat << " is already occupied" << endl;
				}
			}
			else
			{
				cout << "Wrong Class" << endl;
			}
		}

		row[0] = 0;
		row[1] = 0;
	}


	return 0;
}