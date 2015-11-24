//
//  RCSignInViewController.h
//  FBLA Fashion 2015
//
//  Created by Stephen Polcyn on 11/24/15.
//  Copyright © 2015 SPYN Enterprises. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Constants.h"
#import "RCSignInView.h"

@interface RCSignInViewController : UIViewController <UITextFieldDelegate>

@property (nonatomic) RCSignInView* signInView;

@end