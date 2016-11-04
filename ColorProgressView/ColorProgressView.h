//
//  ColorProgressView.h
//  ProgressView
//
//  Created by lin on 16/10/29.
//  Copyright © 2016年 林理刚. All rights reserved.
//  颜色进度条 根据滑动的位置不同返回不同的颜色

#import <UIKit/UIKit.h>

@protocol ColorProgressViewDelegate <NSObject>

- (void)sendColorWithSwipePoint:(UIColor *)rgb;

@end


@class ColorProgressViewDelegate;
@interface ColorProgressView : UIView

@property (nonatomic, weak) id<ColorProgressViewDelegate> delegate;
@property (nonatomic, strong) NSArray *upColors; /**< 上半部分颜色*/
@property (nonatomic, strong) NSArray *downColors; /**< 下半部分颜色*/
@property (nonatomic, assign) CGFloat progressWidth; /**< 进度条宽度 默认6.0*/
@property (nonatomic, strong) UIColor *centerCircleColor; /**< 中间圆的背景色 默认白色*/

/**
 *  根据拖拽时按钮的point 获取颜色按钮在的center(center在圆上)
 *
 *  @param btnPoint       拖拽是按钮的point
 *  @param centerOfCircle 圆心的坐标 (父视图上的，因为btn是放在self.view的)
 *
 *  @return 圆上的center
 */
- (CGPoint)getColorBtnCenterWithDragBtnPoint:(CGPoint)btnPoint centerOfCircle:(CGPoint)centerOfCircle;

/**
 *  根据按钮拖动的位置 返回圆上对应位置的颜色
 */
- (UIColor *)colorWithCirclePoint:(CGPoint)btnPoint;

@end
