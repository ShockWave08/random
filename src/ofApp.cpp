#include "ofApp.h"
#include <random>

//----------------------------------------------------------------------------------------------------
void ofApp::setup(){

	//int xmin = 0, xmax = 1200, ymin = 0, ymax = 970;

	//random_device rd;
	//mt19937 eng(rd()); // different sequence
	//uniform_int_distribution<> x_cor(xmin, xmax);
	//uniform_int_distribution<> y_cor(ymin, ymax);

	//for(int i = 0; i < 100; i++){
	//	X.push_back(x_cor(eng));
	//	Y.push_back(y_cor(eng));
	//}
	
	
	 float xmean = 1000.0f, xstan_devia = 15.0f, ymean = 800.0f, ystan_devia = 15.0f;
	                                                                                                                                                                   
      random_device rd;                                                                                                                                                                                          
      mt19937 eng(rd()); // different sequence                                                         
      normal_distribution<> x_cor(xmean, xstan_devia);
      normal_distribution<> y_cor(ymean, ystan_devia);                                                                                                                                                         
                                                                                                                                                                                                                        
        for(int i = 0; i < 100; i++){                                                                                                                                                                                   
               X.push_back(x_cor(eng)); 
			Y.push_back(y_cor(eng));
		}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
