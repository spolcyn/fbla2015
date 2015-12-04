//
//  RCOutfitsView.h
//  Red Carpet
//
//  Created by Stephen Polcyn on 12/3/15.
//  Copyright © 2015 SPYN Enterprises. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Constants.h"
#import "RCOutfitImageView.h"

@interface RCOutfitsView : UIView <OutfitImageDelegate>

@property UIScrollView* imageScrollView;
@property NSMutableArray* outfitImageViews;

@property (nonatomic,weak) id<OutfitImageDelegate, UIScrollViewDelegate> delegate;

@end
