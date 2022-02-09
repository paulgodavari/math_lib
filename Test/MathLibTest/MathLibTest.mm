// MathLibTest.mm
// MathLibTest
//
// Copyright (c) 2022 Paul Godavari. All rights reserved. 


#import <XCTest/XCTest.h>


#include "math_lib/math_lib.h"


//--------------------------------------------------------------------------------------------------
// Utility functions

static const float kDefaultErrorMargin = 0.000001;

bool WithinMarginOfError(float test_value, float expected_value, float error_margin = kDefaultErrorMargin)
{
    bool result = false;
    if ((test_value >= (expected_value - error_margin)) &&
        (test_value <= (expected_value + error_margin))) {
        result = true;
    }
    return result;
}


//--------------------------------------------------------------------------------------------------
// Unit testing

@interface MathLibTest : XCTestCase
@end


@implementation MathLibTest

- (void) setUp
{
    // Put setup code here. Called before the invocation of each test method in the class.
}

- (void) tearDown
{
    // Put teardown code here. Called after the invocation of each test method in the class.
}

// - (void) testPerformanceExample
// {
//     // This is an example of a performance test case.
//     [self measureBlock:^{
//         // Put the code you want to measure the time of here.
//     }];
// }

- (void) testVector3UnitVectorMagnitude
{
    v3 p = { 2.0, 2.0, 2.0 };
    v3 unit = UnitVector(p);
    float magnitude = unit.Magnitude();
    XCTAssertTrue(WithinMarginOfError(magnitude, 1.0));
}

@end
