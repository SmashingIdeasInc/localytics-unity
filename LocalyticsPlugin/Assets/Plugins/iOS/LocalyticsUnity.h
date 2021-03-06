#import "Localytics.h"

extern "C" {
    typedef void (*LocalyticsAnalyticsCallback)(const char*);
    typedef void (*LocalyticsMessagingCallback)(const char*);
    typedef void (*LocalyticsLocationCallback)(const char*);
}

@interface AnalyticsDelegate : NSObject <LLAnalyticsDelegate>

+ (AnalyticsDelegate *)instance;
+ (LocalyticsAnalyticsCallback) callback;

@end


@interface MessagingDelegate : NSObject <LLMessagingDelegate>

+ (MessagingDelegate *)instance;
+ (LocalyticsMessagingCallback) callback;

@end

@interface LocationDelegate : NSObject <LLLocationDelegate>

+ (LocationDelegate *)instance;
+ (LocalyticsLocationCallback) callback;

@end
