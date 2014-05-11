//
//  DJActionTaskEntity.h
//  Progress
//
//  Created by 独嘉 on 14-5-11.
//  Copyright (c) 2014年 dujia. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 *  动作实体
 */
@interface DJActionEntity : NSObject
@property(nonatomic,retain)NSString* ID;
@property(nonatomic,retain)NSString* initiator;
@property(nonatomic,retain)NSString* content;
@end
