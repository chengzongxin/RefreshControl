//
//  UIView+Layout.h
//  Matafy
//
//  Created by Cheng on 2018/3/12.
//  Copyright © 2018年 com.upintech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (Layout)

@property (assign, nonatomic) CGFloat   top;
@property (assign, nonatomic) CGFloat   bottom;
@property (assign, nonatomic) CGFloat   left;
@property (assign, nonatomic) CGFloat   right;

@property (assign, nonatomic) CGFloat   x;
@property (assign, nonatomic) CGFloat   y;
@property (assign, nonatomic) CGPoint   origin;

@property (assign, nonatomic) CGFloat   centerX;
@property (assign, nonatomic) CGFloat   centerY;

@property (assign, nonatomic) CGFloat   width;
@property (assign, nonatomic) CGFloat   height;
@property (assign, nonatomic) CGSize    size;

@end
