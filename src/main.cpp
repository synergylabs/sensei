#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ) {
  //ofSetupOpenGL(640, 360, OF_WINDOW);
  ofSetupOpenGL(1920, 1080, OF_WINDOW);

  // Set the framework to something sane, otherwise the frame rate will be unbounded
  // and eat your CPU alive.
  ofSetFrameRate(30);
  ofSetWindowTitle("sensei");

  // this kicks off the running of my app
  // can be OF_WINDOW or OF_FULLSCREEN
  // pass in width and height too:
  ofRunApp(new ofApp());
}
