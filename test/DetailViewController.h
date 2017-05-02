//
//  DetailViewController.h
//  test
//
//  Created by Jenkins on 5/2/17.
//  Copyright © 2017 Jenkins. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

