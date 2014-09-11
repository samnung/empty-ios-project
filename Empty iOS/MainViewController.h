//
//  MainViewController.h
//  Empty iOS
//
//  Created by Roman Kříž on 11.09.14.
//  Copyright (c) 2014 samnung. All rights reserved.
//

#import "FlipsideViewController.h"

@interface MainViewController : UIViewController <FlipsideViewControllerDelegate, UIPopoverControllerDelegate>

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@property (strong, nonatomic) UIPopoverController *flipsidePopoverController;

@end
