//
//  NSMutableDictionary+Set.h
//  PanGu
//
//  Created by 陈伟平 on 16/7/12.
//  Copyright © 2016年 Security Pacific Corporation. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSMutableDictionary (Set)
-(void)setNObject:(id)anObject forKey:(id<NSCopying>)aKey;
-(void)setNValue:(id)value forKey:(NSString *)key;
@end
