//
//  AppDelegate.h
//  TrackMix
//
//  Created by hxx on 13-10-17.
//  Copyright (c) 2013年 hxx. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;
- (IBAction)Mute:(id)sender;
- (IBAction)takeFloatValueForVolumeFrom:(id)sender;

@end
