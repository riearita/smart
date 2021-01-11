#include "Game.hpp"

void Game::update() {

	switch (check)
	{
	case 0:
		make();
		break;
	case 1:
		count();
		break;
	default:
		break;
	}


}

void Game::make() {

	for (int i = 0; i < 10; i++) {
		std::unique_ptr<Enemy>a(new Enemy_2());
		enemy.push_back(std::move(a));

	}
	check = 1;

}

void Game::lost() {

}

void Game::count() {

	//Print<<enemy.size();

	Print <<U"enemy.size::" <<enemy.size();

	for (size_t i = 0; i < enemy.size(); i++) {
		enemy[i]->update();
	}

}