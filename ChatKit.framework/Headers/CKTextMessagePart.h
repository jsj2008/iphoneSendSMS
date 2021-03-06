/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <ChatKit/CKMessagePart.h>

@class NSString;

@interface CKTextMessagePart : CKMessagePart {
	NSString *_text;	// 24 = 0x18
	NSString *_contentLocation;	// 28 = 0x1c
}
@property(copy, nonatomic) NSString *contentLocation;	// G=0x42a25; S=0x42f51; @synthesize=_contentLocation
@property(readonly, retain) NSString *text;	// G=0x42a15; converted property
- (id)detachedCopy;	// 0x430e5
- (BOOL)isDisplayable;	// 0x42a0d
- (int)type;	// 0x42a11
- (id)initWithText:(id)text;	// 0x4308d
// converted property getter: - (id)text;	// 0x42a15
- (void)dealloc;	// 0x4302d
- (id)description;	// 0x42fb9
- (void)copyToPasteboard;	// 0x42f75
// declared property getter: - (id)contentLocation;	// 0x42a25
// declared property setter: - (void)setContentLocation:(id)location;	// 0x42f51
@end
