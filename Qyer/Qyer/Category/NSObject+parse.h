//
//  NSObject+parse.h
//  Day11-汽车之家
//
//  Created by tarena on 16/11/14.
//  Copyright © 2016年 tarena. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (parse)<YYModel>
+ (id)parse:(id)JSON;
@end
