#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    myRazor.connect("/dev/tty.usbserial-AL00EZJ7", 57600);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    bool newData = myRazor.readYPR();
    if (newData) cout << myRazor.yaw << ", " << myRazor.pitch << ", " << myRazor.roll << endl;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
//    ofDrawBitmapStringHighlight(ofToString(myRazor.watchDogTimer), 10, 40);
    
//    ofDrawBitmapStringHighlight(myRazor.buf, 10, 20);
    
    ofDrawBitmapStringHighlight(ofToString(ofGetFrameRate()), 10, 20);
    
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ }

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ }

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){ }

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){ }

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){ }

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){ }

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){ }

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){ }

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ }