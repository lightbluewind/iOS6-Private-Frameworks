/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SKUIApplication.h"

#import "iGaiaGrapeSystemUi-Protocol.h"

@interface GrapeCal_GUI_APP : SKUIApplication <iGaiaGrapeSystemUi>
{
    id <iGaiaProject> proj;
}

- (void)SetProject:(id)arg1;
- (BOOL)handleEvent:(struct __GSEvent *)arg1;
- (void)quit;
- (id)init;

@end
