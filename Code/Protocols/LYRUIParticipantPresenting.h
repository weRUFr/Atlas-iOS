//
//  LYRUIParticipantPresenting.h
//  Atlas
//
//  Created by Kevin Coleman on 8/29/14.
//  Copyright (c) 2014 Layer, Inc. All rights reserved.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//  http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//

#import <Foundation/Foundation.h>
#import "LYRUIParticipant.h"

/**
 @abstract The `LYRUIParticipantPickerSortType` allows for configuration of the sorting order of participants.
 */
typedef NS_ENUM(NSUInteger, LYRUIParticipantPickerSortType) {
    LYRUIParticipantPickerSortTypeFirstName,
    LYRUIParticipantPickerSortTypeLastName,
};

/**
 @abstract The `LYRUIParticipantPresenting` protocol must be adopted by objects that wish to present Layer
 participants in the user interface.
 */
@protocol LYRUIParticipantPresenting <NSObject>

/**
 @abstract Tells the receiver to present an interface for the given participant.
 @param participant The participant to present.
 @param sortType The type of sorting currently used.
 @param shouldShowAvatarImage Whether or not the receiver should display the participant's avatar.
 */
- (void)presentParticipant:(id<LYRUIParticipant>)participant
              withSortType:(LYRUIParticipantPickerSortType)sortType
      shouldShowAvatarItem:(BOOL)shouldShowAvatarItem;


@end
