//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSSecureAppAction.h"

@class SBApplicationSceneEntity;

@interface SBInProcessSecureAppAction : SBSSecureAppAction
{
    SBApplicationSceneEntity *_applicationSceneEntity;
}

@property(retain, nonatomic) SBApplicationSceneEntity *applicationSceneEntity; // @synthesize applicationSceneEntity=_applicationSceneEntity;
- (void).cxx_destruct;
- (_Bool)isInProcessAction;
- (id)initWithType:(unsigned long long)arg1 applicationSceneEntity:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end

