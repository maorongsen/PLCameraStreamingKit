//
//  PLAudioStreamingConfiguration.h
//  PLCameraStreamingKit
//
//  Created on 15/8/4.
//  Copyright (c) 2015年 Pili Engineering. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "PLTypeDefines.h"
#import "PLMacroDefines.h"

@interface PLAudioStreamingConfiguration : NSObject

@property (nonatomic, PL_STRONG) NSString   *audioQuality;
@property (nonatomic, assign, readonly) PLStreamingAudioBitRate audioBitRate;
@property (nonatomic, assign, readonly) NSUInteger audioSampleRate; // 4800 for iPhone 6s family devices, 44100 for others
@property (nonatomic, assign) UInt32    numberOfChannels;   // default as 1

/// kPLAudioStreamingQualityHigh2 as default
+ (instancetype)defaultConfiguration;

/*!
 * 指定可选分辨率和推流质量生成一个配置
 */
+ (instancetype)configurationWithAudioQuality:(NSString *)quality;

@end
