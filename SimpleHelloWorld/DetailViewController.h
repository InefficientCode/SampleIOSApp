//
//  DetailViewController.h
//  SimpleHelloWorld
//
//  Created by Alexander on 3/9/17.
//  Copyright © 2017 Nope. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

