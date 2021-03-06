/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKAnimation, VKAttributedRouteMatch, VKPuckAnimatorLocationProjector, VKRunningCurve;

@interface VKPuckAnimator : NSObject
{
    id <VKPuckAnimatorTarget> _target;
    VKAnimation *_animation;
    VKRunningCurve *_curve;
    VKPuckAnimatorLocationProjector *_locationProjector;
    id <VKPuckAnimatorDelegate> _delegate;
    int _pausedCount;
    BOOL _suspended;
    double _tracePlaybackSpeedMultiplier;
    VKAttributedRouteMatch *_lastProjectedLocation;
}

@property(nonatomic) double tracePlaybackSpeedMultiplier; // @synthesize tracePlaybackSpeedMultiplier=_tracePlaybackSpeedMultiplier;
@property(retain, nonatomic) VKAttributedRouteMatch *lastProjectedLocation; // @synthesize lastProjectedLocation=_lastProjectedLocation;
@property(nonatomic) id <VKPuckAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) id <VKPuckAnimatorTarget> target; // @synthesize target=_target;
- (void)updateLocation:(id)arg1 routeMatch:(id)arg2;
- (void)_step;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

