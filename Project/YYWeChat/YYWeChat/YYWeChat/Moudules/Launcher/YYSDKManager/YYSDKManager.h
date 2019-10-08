//
//  YYSDKManager.h
//  YYWeChat
//
//  Created by yang on 2019/7/8.
//  Copyright © 2019 XingYeTechnology. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface YYSDKManager : NSObject

+ (YYSDKManager *)shareInstance;

- (void)launchInWindow:(UIWindow *)window;
@end

NS_ASSUME_NONNULL_END