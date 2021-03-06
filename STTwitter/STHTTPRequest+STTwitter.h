//
//  STHTTPRequest+STTwitter.h
//  STTwitter
//
//  Created by Nicolas Seriot on 8/6/13.
//  Copyright (c) 2013 Nicolas Seriot. All rights reserved.
//

#import "STHTTPRequest.h"

@interface STHTTPRequest (STTwitter)

+ (STHTTPRequest *)twitterRequestWithURLString:(NSString *)urlString
                        stTwitterProgressBlock:(void(^)(id json))progressBlock
                         stTwitterSuccessBlock:(void(^)(NSDictionary *headers, id json))successBlock
                           stTwitterErrorBlock:(void(^)(NSDictionary *headers, NSError *error))errorBlock;

@end
