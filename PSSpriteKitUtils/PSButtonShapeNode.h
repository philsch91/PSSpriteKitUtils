//
//  PSButtonShapeNode.h
//  MCPiSim
//
//  Created by Philipp Schunker on 16.02.19.
//  Copyright © 2019 Philipp Schunker. All rights reserved.
//

#import <SpriteKit/SpriteKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PSButtonShapeNode : SKShapeNode

@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL selected;
@property (nonatomic, strong) SKColor *color;
@property (nonatomic, strong) SKColor *pressedColor;
@property (nonatomic, strong) SKColor *textColor;

@property (nonatomic, strong) SKLabelNode *label;

@property (nonatomic, weak) NSObject *targetTouchUp;
@property (nonatomic, weak) NSObject *targetTouchUpInside;
@property (nonatomic, weak) NSObject *targetTouchDown;

@property (nonatomic, assign) SEL selectorTouchUp;
@property (nonatomic, assign) SEL selectorTouchUpInside;
@property (nonatomic, assign) SEL selectorTouchDown;

+(instancetype)buttonWithText:(NSString *)text;
+(instancetype)buttonWithText:(NSString *)text color:(SKColor *)color pressedColor:(SKColor *)pressedColor;

-(void)setTouchUp:(NSObject *)target selector:(SEL)selector;
-(void)setTouchUpInside:(NSObject *)target selector:(SEL)selector;
-(void)setTouchDown:(NSObject *)target selector:(SEL)selector;

@end

NS_ASSUME_NONNULL_END
