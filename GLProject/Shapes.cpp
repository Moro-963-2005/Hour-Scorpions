#include <iostream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <vector>
#include <cmath>


class Shapes {
public:
	static std::vector<glm::vec3> makeCircle(int numberOfPoints,float r) {
		std::vector<glm::vec3> circle = {};
		int step = 360 / numberOfPoints;
		float pi = glm::pi<float>();
		for (int i = 0; i < 360; i+=step) {
			float rad = i * pi/ 180.0;
			circle.push_back(glm::vec3(r*cos(rad),r*sin(rad),0.0));
		}
		return circle;
	}
	static std::vector<glm::vec3> makeRect(float width, float height) {
		std::vector<glm::vec3> rect = {};
		rect.push_back(glm::vec3(width / 2.0, height / 2.0, 0.0));
		rect.push_back(glm::vec3(-width / 2.0, height / 2.0, 0.0));
		rect.push_back(glm::vec3(-width / 2.0, -height / 2.0, 0.0));
		rect.push_back(glm::vec3(width/2.0,-height/2.0,0.0));
		return rect;
	}
};