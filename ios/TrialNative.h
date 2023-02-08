#ifdef __cplusplus
#import "trial-native.h"
#endif

#ifdef RCT_NEW_ARCH_ENABLED
#import "RNTrialNativeSpec.h"

@interface TrialNative : NSObject <NativeTrialNativeSpec>
#else
#import <React/RCTBridgeModule.h>

@interface TrialNative : NSObject <RCTBridgeModule>
#endif

@end
