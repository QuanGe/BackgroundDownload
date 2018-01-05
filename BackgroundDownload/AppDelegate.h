//
//  AppDelegate.h
//  BackgroundDownload
//
//  Created by 张汝泉 on 2017/12/29.
//  Copyright © 2017年 QuanGe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (copy) void (^backgroundSessionCompletionHandler)();
+(void)registerNotification:(NSInteger )alerTime;
@end

