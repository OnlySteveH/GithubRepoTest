//
//  DetailViewController.h
//  GithubRepoTest
//
//  Created by Steve Hunter on 12/08/2015.
//  Copyright (c) 2015 Big Dog Consultants Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

