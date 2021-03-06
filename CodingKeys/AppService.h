#import <Foundation/Foundation.h>

NSString * const AppServiceDidChangeHotKeys;

@interface AppService : NSObject

+ (instancetype)sharedService;

- (BOOL)isAppRegistered:(NSString *)appName;
- (NSArray *)hotKeysForAppWithName:(NSString *)appName;
- (void)openKeyMappings;
- (void)openAboutURL;

@end