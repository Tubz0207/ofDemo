#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	std::cout << "Hello from setup .\n";
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);
ofTranslate(ofGetWidth()/2, ofGetHeight()/2);

/*for(int i = 0; i < 3; i++)
 {
   ofRotate(50);
   ofSetColor(255,0,0);
   ofDrawLine(10,0,0,220);
   ofDrawLine(10-100,0,0,220);
   ofDrawLine(10+100,0,0,220);
  }
   ofSetColor(0,0,255);
   ofNoFill();
   ofDrawCircle(0,0,100);
for(int j = 0; j < 1000; j++)
{
	ofRotate(50);
	ofSetColor(0,255,0);
	ofDrawLine(100,0,0,220);
}*/
for(int i= 0; i < 250; i++)
{
	for(int j = 0; j < 200; j++)
	{
		ofSetColor(0,0,255);
		ofNoFill();
		ofDrawCircle(0,0,10);
		ofRotate(20);
		ofSetColor(255,0,0);
		ofDrawLine(10,10,220,220);
	}
	ofSetColor(0,255,0);
	ofNoFill();
	ofDrawCircle(220,220,10);
	ofRotate(10);
	ofSetColor(10,255,0);
	ofDrawLine(230,230,230,400);
	ofDrawLine(230-100,230,230,400);
	ofDrawLine(230+100,230,230,400);
}
}




//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
