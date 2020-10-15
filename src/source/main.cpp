#include <SFML/Graphics.hpp>

#include "Game.h"

int main()
{
	sf::Vector2f viewSize(1024, 768);
	sf::VideoMode viewMode(viewSize.x, viewSize.y);
	sf::RenderWindow window(viewMode, "First SFML game", sf::Style::Default);
	
	Game game{ window };
	game.start();
	return 0;
}