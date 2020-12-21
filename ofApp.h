#pragma once
#include "ofMain.h"

class ofApp : public ofBaseApp {

public:
	void setup();
	void update();
	void draw();

	void keyPressed(int key) {};
	void keyReleased(int key) {};
	void mouseMoved(int x, int y) {};
	void mouseDragged(int x, int y, int button) {};
	void mousePressed(int x, int y, int button) {};
	void mouseReleased(int x, int y, int button) {};
	void windowResized(int w, int h) {};
	void dragEvent(ofDragInfo dragInfo) {};
	void gotMessage(ofMessage msg) {};

	glm::vec3 make_point(float radius, float phi_deg, float theta_deg);

	ofEasyCam cam;
	vector<ofColor> base_color_list;

	float phi_seed, theta_seed;
	vector<pair<float, float>> deg_list;
	vector<vector<glm::vec3>> log_list;
	vector<ofColor> color_list;
	vector<float> life_list;
};