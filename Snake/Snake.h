#pragma once
#include "SFML/Graphics.hpp"
#include "SinglyLinkedList.h"
#include <vector>

enum EMoveDirection
{
	E_MOVE_UP,
	E_MOVE_DOWN,
	E_MOVE_LEFT,
	E_MOVE_RIGHT
};

class Snake
{
public:
	Snake();
	virtual ~Snake();

	void Move();
	void HandleInput(sf::Keyboard::Key pKey, bool pPressed);
	void ChangeMoveDirection(EMoveDirection pNewDirection);
	void Render(sf::RenderWindow& pWindow);

	
	
	
	
private:
	
	int m_health;
	float m_speed;
	int m_foodColected;
	SinglyLinkedList<sf::RectangleShape> m_snakeBody;
	EMoveDirection m_eCurrMoveDirection;
	sf::Vector2f m_movement;
};

