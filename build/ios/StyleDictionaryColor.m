
//
// StyleDictionaryColor.m
//

// Do not edit directly
// Generated on Wed, 13 Jul 2022 08:49:21 GMT


#import "StyleDictionaryColor.h"

@implementation StyleDictionaryColor

+ (UIColor *)color:(StyleDictionaryColorName)colorEnum{
  return [[self values] objectAtIndex:colorEnum];
}

+ (NSArray *)values {
  static NSArray* colorArray;
  static dispatch_once_t onceToken;

  dispatch_once(&onceToken, ^{
    colorArray = @[
[UIColor colorWithRed:1.000f green:0.094f blue:0.094f alpha:1.000f],
#ff1818
    ];
  });

  return colorArray;
}

@end
