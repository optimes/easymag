//
//  main.m
//  easymag
//
//  Created by Alper Tayfun on 06-28-2011.
//  Copyright 2011 Alper Tayfun. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "easymagAppDelegate.h"

int main(int argc, char *argv[])
{
    int retVal = 0;
    @autoreleasepool {
        retVal = UIApplicationMain(argc, argv, nil, NSStringFromClass([easymagAppDelegate class]));
    }
    return retVal;
}
