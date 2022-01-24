#include<iostream>
using namespace std;

class Vehicle
{
	int speed;
public:
	virtual void move() = 0;//Чисто виртуальный метод.
	//Именно этот метод и делает класс абстрактным.
};

class GroundVehicle : public Vehicle {};
class WaterVehicle : public Vehicle {};
class FlyVehicle: public Vehicle {};

//------------------- GroundVehicle -------------------------
class Car :public GroundVehicle
{
public:
	void move()
	{
		cout << "Машина едит на 4-х колесах" << endl;
	}
};
class Bike :public GroundVehicle
{
public:
	void move()
	{
		cout << "Мотоцикл едит на 2-х колесах" << endl;
	}
};
// ------------------- WaterVehicle -------------------------
class Yacht : public WaterVehicle
{
public:
	void move()
	{
		cout << "Яхта плывет под парусами" << endl;
	}
};
class Boat : public WaterVehicle
{
  public:
	void move()
	{
		cout << "Катер плывет при помощи ДВС и винтов" << endl;
	}
};


// ------------------- FlyVehicle --------------------------
class Helicopter : public FlyVehicle
{
public:
	void move()
	{
		cout << "Вертолет летит при помощи лопастей пропеллера" << endl;
	}
};
class Airplain : public FlyVehicle
{
public:
	void move()
	{
		cout << "Самолет летит при помощи реактивных двигателей" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	//Vehicle v;		//Abstract
	//GroundVehicle gv;	//Abstract

	Car bmw;	//Неявный конструктор по умолчанию.
	bmw.move();
	Bike harley_devidson;
	harley_devidson.move();
	Yacht Beda;
	Beda.move();
	Boat West;
	West.move();
	Airplain Utair;
	Utair.move();
	return 0;
}

//В иерархию транспортных средств добавить Катер, Яхту, Самолет и вертолет,
//и построить диаграмму классов;