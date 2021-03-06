//
// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

/**
 *  @file UIWebView+GREYAdditions+Internal.h
 *  @brief Exposes UIWebView+GREYAdditions' interfaces and methods that are otherwise private for
 *  testing purposes.
 */

@interface UIWebView (Internal)

/**
 *  Explicitly clears the pending interaction state for UIWebViews.
 */
- (void)grey_clearPendingInteraction;

/**
 *  Will mark the UIWebView's state as busy waiting for interaction until @c seconds have elapsed or
 *  UIWebView::grey_clearPendingInteraction is called (whichever comes first).
 *
 *  @param seconds Time interval in seconds for which to mark the UIWebView as busy.
 */
- (void)grey_pendingInteractionForTime:(NSTimeInterval)seconds;

/**
 *  Marks webview as pending load in GREYAppStateTracker.
 */
- (void)grey_trackAJAXLoading;

/**
 *  Untracks webview loading state from GREYAppStateTracker.
 */
- (void)grey_untrackAJAXLoading;

/**
 *  Sets the loading state for this webview.
 *
 *  @param loading BOOL value indicating the new loading state of this webview.
 */
- (void)grey_setIsLoadingFrame:(BOOL)loading;

/**
 *  @return the loading state for this webview.
 */
- (BOOL)grey_isLoadingFrame;

@end
