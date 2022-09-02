
#include <SFML/Graphics.hpp>


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "Test");
	sf::Event e;

	int width = 800;
	int height = 800;

	int x = 0;

	struct bar
	{

	};

	while (window.isOpen())
	{
		// Event Handling
		while (window.pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
				window.close();
		}

		// Drawing
		window.clear(sf::Color::Black);
		sf::RectangleShape bar(sf::Vector2f(50.f, 100.f));
		bar.setPosition(x, height / 2);

		x += 1;

		// Displaying
		window.draw(bar);
		window.display();
	}

	return 0;
}
