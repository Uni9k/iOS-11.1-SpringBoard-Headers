//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol SBIdleTimerObserving <NSObject>

@optional
- (void)idleTimerDidWarn:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidResetForUserAttention:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidExpire:(id <SBIdleTimer>)arg1;
- (void)idleTimerDidRefresh:(id <SBIdleTimer>)arg1;
@end

