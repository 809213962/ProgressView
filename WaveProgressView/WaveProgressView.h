//
//  WaveProgressView.h
//  ProgressView
//
//  Created by lin on 16/10/29.
//  Copyright © 2016年 林理刚. All rights reserved.
//  波浪式的进度条

#import <UIKit/UIKit.h>

@interface WaveProgressView : UIView

@property (nonatomic, strong) UIColor *progressBackgroundColor; /**< 进度条背景色*/
@property (nonatomic, assign) CGFloat progressWidth; /**< 进度条宽度 默认3*/
@property (nonatomic, assign) float percent; /**< 进度条进度 0-1*/

@property (nonatomic, strong) UILabel *centerLabel; /**< 记录进度的Label*/
@property (nonatomic, strong) UIColor *labelbackgroundColor; /**<Label的背景色 默认clearColor*/
@property (nonatomic, strong) UIColor *textColor; /**<Label的字体颜色 默认黑色*/
@property (nonatomic, strong) UIFont *textFont; /**<Label的字体大小 默认15*/

@property (nonatomic, assign) BOOL isShowWave; /**< 是否显示波纹 默认显示*/
@property (nonatomic, strong) UIColor *firstWaveColor; /**< 第一个波纹的颜色*/
@property (nonatomic, strong) UIColor *secondWaveColor; /**< 第二个波纹的颜色*/
@property (nonatomic, assign) CGFloat waveAmplitude; /**< 波动振幅*/
@property (nonatomic, assign) CGFloat waveSpeed; /**< 波动速度*/
@property (nonatomic, assign) CGFloat waveCycle; /**< 波动周期*/

@end
