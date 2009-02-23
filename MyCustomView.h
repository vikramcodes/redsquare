//
//  MyCustomView.h
//  RedSquare
//
//  Created by vikramtank on 2/23/09.
//  Copyright 2009 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface MyCustomView : UIView <UIAccelerometerDelegate> {
	CGFloat                    squareSize;
	CGFloat                    rotation;
	CGFloat					   centerx;
	CGFloat					   centery;
	CGColorRef                 aColor;
	BOOL                       twoFingers;
	BOOL					   oneFinger;
	
	IBOutlet UILabel           *xField;
	IBOutlet UILabel           *yField;
	IBOutlet UILabel           *zField;
}

@end
