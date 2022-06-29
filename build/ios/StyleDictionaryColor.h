
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Wed, 29 Jun 2022 10:22:04 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorTesttom,
GlobalTestTom
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
