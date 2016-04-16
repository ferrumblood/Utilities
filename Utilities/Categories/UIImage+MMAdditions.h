//
//  UIImage+UIColor.h
//
//
//  Created by Marat Khuzhayarov on 29.10.14.
//  Copyright (c) 2014 lazyboy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (MMAdditions)

/*!
 @abstract
 Creates and returns a colored image with 1x1 size.
 
 @param color The color object.
 */
+ (UIImage *)imageFromColor:(UIColor *)color;

/*!
 @abstract
 Creates and returns a screenshot from all windows.
 */
+ (UIImage *)screenshot;


- (UIImage *)applyColor:(UIColor *)color;


- (UIImage *)colorizeWithColor:(UIColor *)color;

- (UIImage *)scaledToSize:(CGSize)newSize;

@end
