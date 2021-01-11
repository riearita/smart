#pragma once
#include<Siv3D.hpp>
#include"Enemy.hpp"
#include"Enemy_2.hpp"

class Game
{
public:

	void update();

	void make();

	void count();

	void lost();

	

private:

	int check = 0;

	Array<std::unique_ptr<Enemy>>enemy;

	//Array<Enemy*>enemy;

};

