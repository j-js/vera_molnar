#include "ofApp.h"


int recW,recH;
int grayScale = 255;
ofColor red(157,32,62);
ofColor darkRed(115,74,88);


//--------------------------------------------------------------
void ofApp::setup(){
    //ofBackground(0);
//    recW = (width - padding*2)/5;
//    recH = (height - padding*2)/5;
    ofEnableBlendMode(OF_BLENDMODE_MULTIPLY);
        
}

//--------------------------------------------------------------
void ofApp::update(){
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255);
    ofSetColor(darkRed);
    ofSeedRandom(mouseX);
    
    int randomness;
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == 1 && j ==0){
                ofSetColor(red);
            }else if(i == 2 && j ==0){
                ofSetColor(red);
            }else if(i == 0 && j ==2){
                ofSetColor(red);
            }else if(i == 0 && j ==4){
                ofSetColor(red);
            }else if(i == 4 && j ==4){
                ofSetColor(red);
            }else{
                ofSetColor(darkRed);
            }
            randomness = ofRandom(-gap*2,gap*2);
            ofDrawRectangle(i*recW+gap*i+gutter+randomness,j*recH+gap*j+gutter+randomness,recW,recH);
            
        }
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
