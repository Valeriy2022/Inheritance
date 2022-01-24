#include<iostream>
using namespace std;

class Vehicle
{
	int speed;
public:
	virtual void move() = 0;//����� ����������� �����.
	//������ ���� ����� � ������ ����� �����������.
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
		cout << "������ ���� �� 4-� �������" << endl;
	}
};
class Bike :public GroundVehicle
{
public:
	void move()
	{
		cout << "�������� ���� �� 2-� �������" << endl;
	}
};
// ------------------- WaterVehicle -------------------------
class Yacht : public WaterVehicle
{
public:
	void move()
	{
		cout << "���� ������ ��� ��������" << endl;
	}
};
class Boat : public WaterVehicle
{
  public:
	void move()
	{
		cout << "����� ������ ��� ������ ��� � ������" << endl;
	}
};


// ------------------- FlyVehicle --------------------------
class Helicopter : public FlyVehicle
{
public:
	void move()
	{
		cout << "�������� ����� ��� ������ �������� ����������" << endl;
	}
};
class Airplain : public FlyVehicle
{
public:
	void move()
	{
		cout << "������� ����� ��� ������ ���������� ����������" << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "");
	//Vehicle v;		//Abstract
	//GroundVehicle gv;	//Abstract

	Car bmw;	//������� ����������� �� ���������.
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

//� �������� ������������ ������� �������� �����, ����, ������� � ��������,
//� ��������� ��������� �������;