//
//  BottomAlertContentView.h
//  NKAlertView
//
//  Created by 聂宽 on 2019/3/20.
//  Copyright © 2019 聂宽. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
//typedef void(^backProblem)(NSString *problem);
@interface BottomAlertContentView : UIView

@property(nonatomic, copy)void(^backwenti)(NSString *wenti);

@property(nonatomic, copy)void(^cancerBlock)(void);

@end

NS_ASSUME_NONNULL_END
