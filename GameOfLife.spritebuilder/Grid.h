//
//  Grid.h
//  GameOfLife
//
//  Created by Ramon Goncalves da Silva on 7/1/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(void)evolveStep;
@end
