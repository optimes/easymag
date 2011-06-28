//
//  DetailViewController.h
//  easymag
//
//  Created by Alper Tayfun on 06-28-2011.
//  Copyright 2011 Alper Tayfun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (strong, nonatomic) IBOutlet UIToolbar *toolbar;

@end
