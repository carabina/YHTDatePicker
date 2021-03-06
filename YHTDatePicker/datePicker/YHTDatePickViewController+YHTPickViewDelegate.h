//
//  YHTDatePickViewController+YHTPickViewDelegate.h
//  DMTimePick
//
//  Created by 君若见故 on 2017/6/6.
//  Copyright © 2017年 isoftstone. All rights reserved.
//

#import "YHTDatePickViewController.h"

@interface YHTDatePickViewController (YHTPickViewDelegate)<UIPickerViewDelegate, UIPickerViewDataSource>


/**
 设置默认选中的日期
 */
- (void)setDefaultSelectDate:(NSDate *)date;

/**
 获取选中日期

 @return [String]
 */
- (NSDate *)getSelectItem;

@end
