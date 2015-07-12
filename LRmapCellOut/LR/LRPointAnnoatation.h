//
//  LRPointAnnoatation.h
//  LRmapCellOut
//
//  Created by RomitLee on 15/6/29.
//  Copyright (c) 2015年 RomitLee. All rights reserved.
//

#import <BaiduMapAPI/BMKPointAnnotation.h>

//一个自定义的坐标点，就是多了一个字段而已，用于点击这个小图标 把数据传递到气泡上，
@interface LRPointAnnoatation : BMKPointAnnotation

@property (nonatomic,strong) NSDictionary *dataInfo;
@end
