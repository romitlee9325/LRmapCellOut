//
//  LRAnnotation.h
//  LRmapCellOut
//
//  Created by RomitLee on 15/6/29.
//  Copyright (c) 2015年 RomitLee. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <BaiduMapAPI/BMKAnnotation.h>

//自定义的一个坐标信息类，类似于pointannotaion  然而并没有什么暖用  具体的绘画 在annotationView上面
//任务点击后的坐标信息

@interface LRAnnotation : NSObject<BMKAnnotation>


@property (nonatomic) CLLocationDegrees latitude;
@property (nonatomic) CLLocationDegrees longitude;
@property (nonatomic,assign) CLLocationCoordinate2D endPt;


@property(retain,nonatomic) NSDictionary *locationInfo;//callout吹出框要显示的各信息



- (id)initWithLatitude:(CLLocationDegrees)lat andLongitude:(CLLocationDegrees)lon;



@end
