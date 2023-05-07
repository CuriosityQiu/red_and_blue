#include<iostream>
#include<iomanip>
using namespace std;

//class Dragon
//{
//public:
//	Dragon(int num) :num(num) {};
//private:
//	int num;
//};
//
//class Ninja
//{
//public:
//	Ninja(int num) :num(num) {};
//private:
//	int num;
//};
//
//class Iceman
//{
//public:
//	Iceman(int num) :num(num) {};
//private:
//	int num;
//};
//
//class Lion
//{
//public:
//	Lion(int num) :num(num) {};
//private:
//	int num;
//};
//
//class Wolf
//{
//public:
//	Wolf(int num) :num(num) {};
//private:
//	int num;
//};

class Red
{
public:
	Red(int M=1, int dragon = 1, int ninja = 1, int iceman = 1, int lion = 1, int wolf = 1):
		M(M), dragon(dragon), ninja(ninja), iceman(iceman), lion(lion), wolf(wolf) {};
	int M;
	int dragonNum=0;
	int ninjaNum=0;
	int icemanNum=0;
	int lionNum=0;
	int wolfNum=0;
	int dragon;
	int ninja;
	int iceman;
	int lion;
	int wolf;
};
//Red::Red(int M=1, int dragon=1, int ninja=1, int iceman=1, int lion=1, int wolf=1) :
//	M(M), dragon(dragon), ninja(ninja), iceman(iceman), lion(lion), wolf(wolf) {};

class Blue
{
public:
	Blue(int M=1, int dragon = 1, int ninja = 1, int iceman = 1, int lion = 1, int wolf = 1):
		M(M), dragon(dragon), ninja(ninja), iceman(iceman), lion(lion), wolf(wolf) {};
	int M;
	int dragonNum=0;
	int ninjaNum=0;
	int icemanNum=0;
	int lionNum=0;
	int wolfNum=0;
	int dragon;
	int ninja;
	int iceman;
	int lion;
	int wolf;
};
//Blue::Blue(int M = 1, int dragon = 1, int ninja = 1, int iceman = 1, int lion = 1, int wolf = 1) :
//	M(M), dragon(dragon), ninja(ninja), iceman(iceman), lion(lion), wolf(wolf) {};

int main()
{
	int num,M;
	int dragon, ninja, iceman, lion, wolf;
	cin >> num;
	Red red[20];
	Blue blue[20];

	for (int i = 0; i < num; i++)
	{
		cin >> M;
		cin >> dragon >> ninja >> iceman >> lion >> wolf;
		red[i] = Red(M, dragon, ninja, iceman, lion, wolf);
		blue[i] = Blue(M, dragon, ninja, iceman, lion, wolf);
	}
	for (int i = 0; i < num; i++)
	{
		int rednum = 0,bluenum = 0,redbool=1,bluebool=1;
		cout << "case:" << i + 1 << endl;
		for (int time = 0;redbool||bluebool; time++)
		{
			if (redbool == 1)
			{
				if (red[i].M < red[i].dragon && red[i].M < red[i].ninja && red[i].M < red[i].iceman
					&& red[i].M < red[i].lion && red[i].M < red[i].wolf)
				{
					cout << setfill('0') << setw(3) << time << " red headquarter stops making warriors" << endl;
					redbool = 0;
				}
				else
				{
					switch (rednum % 5)
					{
					case 0:
						if (red[i].M >= red[i].iceman)
						{
							red[i].icemanNum++;
							red[i].M -= red[i].iceman;
							cout << setfill('0') << setw(3) << time << " red iceman " << time + 1 << " born with strength "
								<< red[i].iceman << ',' << red[i].icemanNum << " iceman in red headquarter" << endl;
							rednum++;
							break;
						}
						else
							rednum++;
					case 1:
						if (red[i].M >= red[i].lion)
						{
							red[i].lionNum++;
							red[i].M -= red[i].lion;
							cout << setfill('0') << setw(3) << time << " red lion " << time + 1 << " born with strength "
								<< red[i].lion << ',' << red[i].lionNum << " lion in red headquarter" << endl;
							rednum++;
							break;
						}
						else
							rednum++;
					case 2:
						if (red[i].M >= red[i].wolf)
						{
							red[i].wolfNum++;
							red[i].M -= red[i].wolf;
							cout << setfill('0') << setw(3) << time << " red wolf " << time + 1 << " born with strength "
								<< red[i].wolf << ',' << red[i].wolfNum << " wolf in red headquarter" << endl;
							rednum++;
							break;
						}
						else
							rednum++;
					case 3:
						if (red[i].M >= red[i].ninja)
						{
							red[i].ninjaNum++;
							red[i].M -= red[i].ninja;
							cout << setfill('0') << setw(3) << time << " red ninja " << time + 1 << " born with strength "
								<< red[i].wolf << ',' << red[i].wolfNum << " ninja in red headquarter" << endl;
							rednum++;
							break;
						}
						else
							rednum++;
					case 4:
						if (red[i].M >= red[i].dragon)
						{
							red[i].dragonNum++;
							red[i].M -= red[i].dragon;
							cout << setfill('0') << setw(3) << time << " red dragon " << time + 1 << " born with strength "
								<< red[i].dragon << ',' << red[i].dragonNum << " dragon in red headquarter" << endl;
							rednum++;
							break;
						}
						else
							rednum++;
					}
				}
			}
			if (bluebool == 1)
			{
				if (blue[i].M < blue[i].dragon && blue[i].M < red[i].ninja && blue[i].M < blue[i].iceman
					&& blue[i].M < blue[i].lion && blue[i].M < blue[i].wolf)
				{
					cout << setfill('0') << setw(3) << time << " blue headquarter stops making warriors" << endl;
					bluebool = 0;
				}
					
				else
				{
					switch (bluenum % 5)
					{
					case 0:
						if (blue[i].M >= blue[i].lion)
						{
							blue[i].lionNum++;
							blue[i].M -= blue[i].lion;
							cout << setfill('0') << setw(3) << time << " blue lion " << time + 1 << " born with strength "
								<< blue[i].lion << ',' << blue[i].lionNum << " lion in blue headquarter" << endl;
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 1:
						if (blue[i].M >= blue[i].dragon)
						{
							blue[i].dragonNum++;
							blue[i].M -= blue[i].dragon;
							cout << setfill('0') << setw(3) << time << " blue dragon " << time + 1 << " born with strength "
								<< blue[i].dragon << ',' << blue[i].dragonNum << " dragon in blue headquarter" << endl;
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 2:
						if (blue[i].M >= blue[i].ninja)
						{
							blue[i].ninjaNum++;
							blue[i].M -= blue[i].ninja;
							cout << setfill('0') << setw(3) << time << " blue ninja " << time + 1 << " born with strength "
								<< blue[i].ninja << ',' << blue[i].ninjaNum << " ninja in blue headquarter" << endl;
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 3:
						if (blue[i].M >= blue[i].iceman)
						{
							blue[i].icemanNum++;
							blue[i].M -= blue[i].iceman;
							cout << setfill('0') << setw(3) << time << " blue iceman " << time + 1 << " born with strength "
								<< blue[i].iceman << ',' << blue[i].icemanNum << " iceman in blue headquarter" << endl;
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 4:
						if (blue[i].M >= blue[i].wolf)
						{
							blue[i].wolfNum++;
							blue[i].M -= blue[i].wolf;
							cout << setfill('0') << setw(3) << time << " blue wolf " << time + 1 << " born with strength "
								<< blue[i].wolf << ',' << blue[i].wolfNum << " wolf in blue headquarter" << endl;
							bluenum++;
							break;
						}
						else
							bluenum++;
					}
				}
			}
		}
	}
	return 0;
}


