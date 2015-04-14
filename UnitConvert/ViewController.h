//
//  ViewController.h
//  UnitConvert
//
//  Created by Bianca Binstock on 2015-04-14.
//  Copyright (c) 2015 Bianca Binstock. All rights reserved.
//


#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UITextField *tempText;

@property (weak, nonatomic) IBOutlet UILabel *resultLabel;

- (IBAction)convertTemp:(id)sender;

@end

