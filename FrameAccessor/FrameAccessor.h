//
//  FrameAccessor.h
//  FrameAccessor
//
//  Created by Evgeniy Kirpichenko on 19/05/16.
//  Copyright © 2016 Talendo. All rights reserved.
//

#import <UIKit/UIKit.h>

//! Project version number for FrameAccessor.
FOUNDATION_EXPORT double FrameAccessorVersionNumber;

//! Project version string for FrameAccessor.
FOUNDATION_EXPORT const unsigned char FrameAccessorVersionString[];

#import <FrameAccessor/ViewFrameAccessor.h>

#if (TARGET_IPHONE_SIMULATOR || TARGET_OS_IPHONE)
#import <FrameAccessor/ScrollViewFrameAccessor.h>
#endif



