//
//  ball.cpp
//  ball
//
//  Created by Zhao Hanyu on 15/02/2017.
//
//

#include "ball.hpp"

Ball::Ball(){

}
void Ball::setup(){
    x = ofRandom(0,ofGetWidth());
    y = ofRandom(0,ofGetHeight());
    
    speedX = ofRandom(-1,1);
    speedY = ofRandom(-1,1);
    
    dim = 20;
    
    color.set(ofRandom(255),ofRandom(255),ofRandom(255));
    

}

void Ball::update(){
    if( x < 0){
        x = 0;
        speedX *= -1;
    }else if (x > ofGetWidth()){
        x = ofGetWidth();
        speedX *= -1;
    
    }
    
    
    if( y < 0){
        y = 0;
        speedX *= -1;
    }else if (y >ofGetHeight()){
    
        y = ofGetHeight();
        speedY *= -1;
    
    
    }
    
    x += speedX;
    y += speedY;
    
    
}


void Ball::draw(){

    ofSetColor(color);
    ofDrawCircle(x,y,dim);


}
