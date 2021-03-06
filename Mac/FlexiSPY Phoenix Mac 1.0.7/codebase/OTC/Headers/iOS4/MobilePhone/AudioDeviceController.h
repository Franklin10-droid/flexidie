/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

@class AVController, NSArray, NSDictionary;

@interface AudioDeviceController : NSObject
{
    id _delegate;
    AVController *_avController;
    NSDictionary *_pickedRoute;
    NSArray *_pickableRoutes;
}

- (void)dealloc;
- (void)setAVController:(id)arg1;
- (void)invalidateAVController;
- (void)setDelegate:(id)arg1;
- (BOOL)auxiliaryAudioRoutesAvailable;
- (BOOL)routeOtherThanHandsetIsAvailable;
- (BOOL)routeOtherThanHandsetAndSpeakerIsAvailable;
- (unsigned int)numberOfAudioRoutes;
- (BOOL)pickSpeakerRoute;
- (BOOL)pickHandsetRoute;
- (void)restorePickedRoute;
- (void)clearCachedRoutes;
- (BOOL)speakerRouteIsPicked;
- (BOOL)receiverRouteIsPicked;
- (BOOL)audioCategoryIsTTY;
- (id)routeNameAtIndex:(unsigned int)arg1 isPicked:(char *)arg2;
- (void)pickRouteAtIndex:(unsigned int)arg1;
- (id)_pickedRoute;
- (id)_pickableRoutes;
- (void)_pickRoute:(id)arg1;
- (BOOL)_routeIsSpeaker:(id)arg1;
- (BOOL)_routeIsHandset:(id)arg1;
- (BOOL)_routeIsReceiver:(id)arg1;
- (void)_mediaServerDied;
- (void)_pickableRoutesChanged;
- (void)_registerForAVControllerNotifications;

@end

