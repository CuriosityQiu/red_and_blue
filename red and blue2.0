#include<iostream>
#include<iomanip>
using namespace std;

//（*有的武士可以拥有武器。武器有三种，sword, bomb,和arrow，编号分别为0,1,2。*）

class Dragon
{
public:
	Dragon(int num=0,int HP=0) :num(num),HP(HP) {};
	void changeMorale(double morale);
	void changeWeapon(int n);
	double getMorale();
private:
	int num;
	int HP;
	int weapon = num % 3;//武器
	double morale;//士气=它降生后其司令部剩余生命元的数量除以造dragon所需的生命元数量。
};
//修改士气值的函数
void Dragon::changeMorale(double m)
{
	morale = m;
}
//修改weapon的函数
void Dragon::changeWeapon(int n)
{
	weapon = n;
}
//获得morale
double Dragon::getMorale()
{
	return morale;
}

class Ninja
{
public:
	Ninja(int num=0,int HP=0) :num(num),HP(HP) {};
	void changeWeapon(int i, int n);
private:
	int num;
	int HP;
	int weapon[2] = { num % 3,(num + 1) % 3 };//ninja拥有两件武器
};
//修改ninja的武器，第一个参数为武器的件数，第二个为修改后武器的编号。
void Ninja::changeWeapon(int i, int n)
{
	weapon[i - 1] = n;
}

class Iceman
{
public:
	Iceman(int num=0,int HP=0):num(num),HP(HP) {};
	void changeWeapon(int n);
	int getWeapon();
private:
	int num;
	int HP;
	int weapon = num % 3;//iceman拥有一件武器
};
void Iceman::changeWeapon(int n)
{
	weapon = n;
}
int Iceman::getWeapon()
{
	return weapon;
}

class Lion
{
public:
	Lion(int num=0,int HP=0) :num(num),HP(HP) {};
	void changeLoyalty(int l);
private:
	int num;
	int HP;
	int loyalty;//忠诚度=降生后司令部剩余的生命元数目
};
//改变忠诚度
void Lion::changeLoyalty(int l)
{
	loyalty = l;
}

class Wolf
{
public:
	Wolf(int num=0,int HP=0) :num(num),HP(HP) {};
private:
	int num;
	int HP;
};

//用于保存武士的数量以及生命值
class Red
{
public:
	Red(int M = 0, int dragonHP = 0, int ninjaHP = 0, int icemanHP = 0, int lionHP = 0, int wolfHP = 0) :
		M(M), dragonHP(dragonHP), ninjaHP(ninjaHP), icemanHP(icemanHP), lionHP(lionHP), wolfHP(wolfHP) {};
	int getDragonHP();
	int getNinjaHP();
	int getIcemanHP();
	int getLionHP();
	int getWolfHP();
	int M;
	int dragonNum = 0;
	int ninjaNum = 0;
	int icemanNum = 0;
	int lionNum = 0;
	int wolfNum = 0;
private:
	int dragonHP;
	int ninjaHP;
	int icemanHP;
	int lionHP;
	int wolfHP;
};
int Red::getDragonHP()
{
	return dragonHP;
}
int Red::getNinjaHP()
{
	return ninjaHP;
}
int Red::getIcemanHP()
{
	return icemanHP;
}
int Red::getLionHP()
{
	return lionHP;
}
int Red::getWolfHP()
{
	return wolfHP;
}

class Blue
{
public:
	Blue(int M = 0, int dragonHP = 0, int ninjaHP = 0, int icemanHP = 0, int lionHP = 0, int wolfHP = 0) :
		M(M), dragonHP(dragonHP), ninjaHP(ninjaHP), icemanHP(icemanHP), lionHP(lionHP), wolfHP(wolfHP) {};
	int getDragonHP();
	int getNinjaHP();
	int getIcemanHP();
	int getLionHP();
	int getWolfHP();
	int M;
	int dragonNum = 0;
	int ninjaNum = 0;
	int icemanNum = 0;
	int lionNum = 0;
	int wolfNum = 0;
private:
	int dragonHP;
	int ninjaHP;
	int icemanHP;
	int lionHP;
	int wolfHP;
};
int Blue::getDragonHP()
{
	return dragonHP;
}
int Blue::getNinjaHP()
{
	return ninjaHP;
}
int Blue::getIcemanHP()
{
	return icemanHP;
}
int Blue::getLionHP()
{
	return lionHP;
}
int Blue::getWolfHP()
{
	return wolfHP;
}

int main()
{
	int num, M;
	int dragonHP, ninjaHP, icemanHP, lionHP, wolfHP;
	cin >> num;
	Red red[20];
	Blue blue[20];

	for (int i = 0; i < num; i++)
	{
		cin >> M;
		cin >> dragonHP >> ninjaHP >> icemanHP >> lionHP >> wolfHP;
		red[i] = Red(M, dragonHP, ninjaHP, icemanHP, lionHP, wolfHP);
		blue[i] = Blue(M, dragonHP, ninjaHP, icemanHP, lionHP, wolfHP);
	}
	for (int i = 0; i < num; i++)
	{
		//红方武士
		Dragon redDragon[20];
		Ninja redNinja[20];
		Iceman redIceman[20];
		Lion redLion[20];
		Wolf redWolf[20];
		//蓝方武士
		Dragon blueDragon[20];
		Ninja blueNinja[20];
		Iceman blueIceman[20];
		Lion blueLion[20];
		Wolf blueWolf[20];
		/*rednum, bluenum用于判断按顺序该产生哪个武士，redbool, bluebool用于判断
		红方，蓝方司令部是否可以继续产生武士为1即可，为0不可以继续产生武士。*/
		int rednum = 0, bluenum = 0, redbool = 1, bluebool = 1;
		cout << "case:" << i + 1 << endl;
		for (int time = 0; redbool || bluebool; time++)
		{
			if (redbool == 1)
			{
				if (red[i].M < red[i].getDragonHP() && red[i].M < red[i].getNinjaHP() && red[i].M < red[i].getIcemanHP()
					&& red[i].M < red[i].getLionHP() && red[i].M < red[i].getWolfHP())
				{
					cout << setfill('0') << setw(3) << time << " red headquarter stops making warriors" << endl;
					redbool = 0;
				}
				else
				{
					switch (rednum % 5)
					{
					case 0:
						if (red[i].M >= red[i].getIcemanHP())
						{
							redIceman[red[i].icemanNum] = Iceman(time + 1, red[i].getIcemanHP());
							redIceman[red[i].icemanNum].changeWeapon((time + 1) % 3);
							red[i].icemanNum++;
							red[i].M -= red[i].getIcemanHP();
							cout << setfill('0') << setw(3) << time << " red iceman " << time + 1 << " born with strength "
								<< red[i].getIcemanHP() << ',' << red[i].icemanNum << " iceman in red headquarter" << endl;
							switch ((time + 1) % 3)
							{
							case 0:cout << "It has a sword" << endl; break;
							case 1:cout << "It has a bomb" << endl; break;
							case 2:cout << "It has a arrow" << endl; break;
							}
							rednum++;
							break;
						}
						else
							rednum++;
					case 1:
						if (red[i].M >= red[i].getLionHP())
						{
							redLion[red[i].lionNum] = Lion(time + 1, red[i].getLionHP());							
							red[i].lionNum++;
							red[i].M -= red[i].getLionHP();
							redLion[red[i].lionNum - 1].changeLoyalty(red[i].M);
							cout << setfill('0') << setw(3) << time << " red lion " << time + 1 << " born with strength "
								<< red[i].getLionHP() << ',' << red[i].lionNum << " lion in red headquarter" << endl;
							cout << "It's loyalty is " << red[i].M << endl;
							rednum++;
							break;
						}
						else
							rednum++;
					case 2:
						if (red[i].M >= red[i].getWolfHP())
						{
							redWolf[red[i].wolfNum] = Wolf(time + 1, red[i].getWolfHP());
							red[i].wolfNum++;
							red[i].M -= red[i].getWolfHP();
							cout << setfill('0') << setw(3) << time << " red wolf " << time + 1 << " born with strength "
								<< red[i].getWolfHP() << ',' << red[i].wolfNum << " wolf in red headquarter" << endl;
							rednum++;
							break;
						}
						else
							rednum++;
					case 3:
						if (red[i].M >= red[i].getNinjaHP())
						{
							redNinja[red[i].ninjaNum] = Ninja(time + 1, red[i].getNinjaHP());
							redNinja[red[i].ninjaNum].changeWeapon(1, (time + 1) % 3);
							redNinja[red[i].ninjaNum].changeWeapon(2, (time + 2) % 3);
							red[i].ninjaNum++;
							red[i].M -= red[i].getNinjaHP();
							cout << setfill('0') << setw(3) << time << " red ninja " << time + 1 << " born with strength "
								<< red[i].getWolfHP() << ',' << red[i].wolfNum << " ninja in red headquarter" << endl;
							switch ((time + 1) % 3)
							{
							case 0:cout << "It has a sword and a bomb" << endl; break;
							case 1:cout << "It has a bomb and a arrow" << endl; break;
							case 2:cout << "It has a arrow and a sword" << endl;break;
							}
							rednum++;
							break;
						}
						else
							rednum++;
					case 4:
						if (red[i].M >= red[i].getDragonHP())
						{
							redDragon[red[i].dragonNum] = Dragon(time + 1, red[i].getDragonHP());
							redDragon[red[i].dragonNum].changeWeapon((time + 1) % 3);
							red[i].dragonNum++;
							red[i].M -= red[i].getDragonHP();
							redDragon[red[i].dragonNum - 1].changeMorale(1.0*red[i].M/red[i].getDragonHP());
							cout << setfill('0') << setw(3) << time << " red dragon " << time + 1 << " born with strength "
								<< red[i].getDragonHP() << ',' << red[i].dragonNum << " dragon in red headquarter" << endl;
							switch ((time + 1) % 3)
							{
							case 0:cout << "It has a sword, and it's morale is " << redDragon[red[i].dragonNum - 1].getMorale() << endl; break;
							case 1:cout << "It has a bomb, and it's morale is " << redDragon[red[i].dragonNum - 1].getMorale() << endl; break;
							case 2:cout << "It has a arrow, and it's morale is " << redDragon[red[i].dragonNum - 1].getMorale() << endl; break;
							}
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
				if (blue[i].M < blue[i].getDragonHP() && blue[i].M < red[i].getNinjaHP() && blue[i].M < blue[i].getIcemanHP()
					&& blue[i].M < blue[i].getLionHP() && blue[i].M < blue[i].getWolfHP())
				{
					cout << setfill('0') << setw(3) << time << " blue headquarter stops making warriors" << endl;
					bluebool = 0;
				}

				else
				{
					switch (bluenum % 5)
					{
					case 0:
						if (blue[i].M >= blue[i].getLionHP())
						{
							blueLion[blue[i].lionNum] = Lion(time + 1, blue[i].getLionHP());
							blue[i].lionNum++;
							blue[i].M -= blue[i].getLionHP();
							blueLion[blue[i].lionNum - 1].changeLoyalty(blue[i].M);
							cout << setfill('0') << setw(3) << time << " blue lion " << time + 1 << " born with strength "
								<< blue[i].getLionHP() << ',' << blue[i].lionNum << " lion in blue headquarter" << endl;
							cout << "It's loyalty is " << blue[i].M << endl;
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 1:
						if (blue[i].M >= blue[i].getDragonHP())
						{
							blueDragon[blue[i].dragonNum] = Dragon(time + 1, blue[i].getDragonHP());
							blueDragon[blue[i].dragonNum].changeWeapon((time + 1) % 3);
							blue[i].dragonNum++;
							blue[i].M -= blue[i].getDragonHP();
							blueDragon[blue[i].dragonNum - 1].changeMorale(1.0*blue[i].M / blue[i].getDragonHP());
							cout << setfill('0') << setw(3) << time << " blue dragon " << time + 1 << " born with strength "
								<< blue[i].getDragonHP() << ',' << blue[i].dragonNum << " dragon in blue headquarter" << endl;
							switch ((time + 1) % 3)
							{
							case 0:cout << "It has a sword, and it's morale is " <<fixed<<setprecision(2)<< blueDragon[blue[i].dragonNum - 1].getMorale() << endl; break;
							case 1:cout << "It has a bomb, and it's morale is " << fixed << setprecision(2) << blueDragon[blue[i].dragonNum - 1].getMorale() << endl; break;
							case 2:cout << "It has a arrow, and it's morale is " << fixed << setprecision(2) << blueDragon[blue[i].dragonNum - 1].getMorale() << endl; break;
							}
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 2:
						if (blue[i].M >= blue[i].getNinjaHP())
						{
							blueNinja[blue[i].ninjaNum] = Ninja(time + 1, blue[i].getNinjaHP());
							blueNinja[blue[i].ninjaNum].changeWeapon(1, (time + 1) % 3);
							blueNinja[blue[i].ninjaNum].changeWeapon(2, (time + 2) % 3);
							blue[i].ninjaNum++;
							blue[i].M -= blue[i].getNinjaHP();
							cout << setfill('0') << setw(3) << time << " blue ninja " << time + 1 << " born with strength "
								<< blue[i].getNinjaHP() << ',' << blue[i].ninjaNum << " ninja in blue headquarter" << endl;
							switch ((time + 1) % 3)
							{
							case 0:cout << "It has a sword and a bomb" << endl; break;
							case 1:cout << "It has a bomb and a arrow" << endl; break;
							case 2:cout << "It has a arrow and a sword" << endl; break;
							}
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 3:
						if (blue[i].M >= blue[i].getIcemanHP())
						{
							blueIceman[blue[i].icemanNum] = Iceman(time + 1, blue[i].getIcemanHP());
							blueIceman[blue[i].icemanNum].changeWeapon((time + 1) % 3);
							blue[i].icemanNum++;
							blue[i].M -= blue[i].getIcemanHP();
							cout << setfill('0') << setw(3) << time << " blue iceman " << time + 1 << " born with strength "
								<< blue[i].getIcemanHP() << ',' << blue[i].icemanNum << " iceman in blue headquarter" << endl;
							switch ((time + 1) % 3)
							{
							case 0:cout << "It has a sword" << endl; break;
							case 1:cout << "It has a bomb" << endl; break;
							case 2:cout << "It has a arrow" << endl; break;
							}
							bluenum++;
							break;
						}
						else
							bluenum++;
					case 4:
						if (blue[i].M >= blue[i].getWolfHP())
						{
							blue[i].wolfNum++;
							blue[i].M -= blue[i].getWolfHP();
							cout << setfill('0') << setw(3) << time << " blue wolf " << time + 1 << " born with strength "
								<< blue[i].getWolfHP() << ',' << blue[i].wolfNum << " wolf in blue headquarter" << endl;
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
