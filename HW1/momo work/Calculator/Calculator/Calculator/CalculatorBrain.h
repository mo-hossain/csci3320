//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Hossain, Mohammad on 1/30/15.
//  Copyright (c) 2015 Hossain, Mohammad. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOperation:(NSString *)operation;

@end
