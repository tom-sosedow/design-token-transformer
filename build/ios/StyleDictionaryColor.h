
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 13 Jul 2022 08:49:21 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorTesttom,
GlobalTestTom
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
