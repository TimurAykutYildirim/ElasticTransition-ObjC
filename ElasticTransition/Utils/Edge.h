//
//  Edge.h
//  ElasticTransistionExample
//
//  Created by Tigielle on 11/02/16.
//  Copyright © 2016 Matteo Tagliafico. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef enum{
    TOP = 0,
    BOTTOM,
    LEFT,
    RIGHT
}EdgeType;

@interface Edge : NSObject

@property EdgeType type;

-(id)initWithEdgeType:(EdgeType)theType;

- (EdgeType)opposite;
- (UIRectEdge)toUIRectEdge;

@end