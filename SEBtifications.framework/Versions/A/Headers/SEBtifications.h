//
//  SEBtifications.h
//  SyncToken
//
//  Created by SEB on 8/11/16.
//  Copyright © 2016 SEB. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>

@interface SEBtifications : NSObject

//Registration
+(void)registerApp:(nonnull NSString*)appKey;
+(void)registerAppWithoutSwizzling:(nonnull NSString*)appKey;



+ (void) didRegisterForRemoteNotificationsWithDeviceToken:(nonnull NSData *)deviceToken;
+ (void)didFailToRegisterForRemoteNotificationsWithError:(nullable NSError *)err;
+(void)didRegisterUserNotificationSettings:(nullable UIUserNotificationSettings *)notificationSettings;
+(void)didReceiveRemoteNotification:(nonnull NSDictionary *)userInfo;
 
@end
