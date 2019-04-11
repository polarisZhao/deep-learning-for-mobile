//
//  NCNNWrapper.h
//  mobilefacenet_ios
//
//  Created by zhaozhichao on 2019/4/11.
//  Copyright © 2019 zhaozhichao. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface NCNNWrapper : NSObject

+(nonnull NSString *)openCVVersionString;
+(nonnull UIImage *)cvtColorBGR2GRAY:(nonnull UIImage *)image;
+(void)initialize;
+(bool)reSampleFace:(nonnull UIImage *)rawImage;
+(nonnull UIImage *)detectFace: (nonnull UIImage *)rawImage;

@end
