//
//  NNHttpTool.h
//  H1Hub
//
//  Created by 吴狄 on 16/6/23.
//  Copyright © 2016年 NDL. All rights reserved.
//

#import <Foundation/Foundation.h>
@class AFHTTPSessionManager;
@interface NNHttpTool : NSObject
@property (nonatomic, strong) AFHTTPSessionManager *manager;

//包装afnGET请求
+ (void)GETWithURLString:(NSString *)URLString params:(id)params success:(void(^)(id response))success failure:(void(^)(NSError *error))failure;
//包装afnPOST请求
+ (void)POSTWithURLString:(NSString *)URLString params:(id)params success:(void(^)(id response))success failure:(void(^)(NSError *error))failure;
+ (instancetype)shareManager;
/**
 综合post请求还是get请求
 */
+ (void)GETMethod:(BOOL)getMethod URLString:(NSString *)URLString params:(id)params success:(void (^)(id))success failure:(void (^)(NSError *))failure;

+ (void)POSTNoBackJsonWithURLString:(NSString *)URLString params:(id)params success:(void (^)(id response))success failure:(void (^)(NSError *error))failure;
@end
