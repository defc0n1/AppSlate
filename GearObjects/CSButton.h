//
//  CSButton.h
//  AppSlate
//
//  Created by Taehan Kim on 12. 01. 20..
//  Copyright (c) 2012년 ChocolateSoft. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CSGearObject.h"
#import "BButton.h"

@interface CSButton : CSGearObject
{
    CGFloat output;
}

-(id) initGear;


-(void) setTintColor:(UIColor*)color;
-(UIColor*) getTintColor;

-(void) setText:(NSString*)txt;
-(NSString*) getText;

-(void) setOutputValue:(NSNumber*) number;
-(NSNumber*) getOutputValue;

-(void) setTextColor:(UIColor*)color;
-(UIColor*) getTextColor;

-(void) setFont:(UIFont*)font;
-(UIFont*) getFont;

@end
