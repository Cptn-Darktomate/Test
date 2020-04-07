#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <iostream>;



int main()
{
	sf::RenderWindow MainScreen(sf::VideoMode(1080, 960, 32), "Generic SFML FILE");

	sf::Event evnts;

	while (MainScreen.isOpen())
	{

		while (MainScreen.pollEvent(evnts))
		{
			switch (evnts.type)
			{
			case sf::Event::Closed:
				MainScreen.close();
			default:
				break;
			}
		}
	}

	return 0;
}
