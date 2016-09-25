#import "WeatherHTTPRequest.h"

@interface WeatherJSONHTTPRequest : WeatherHTTPRequest

- (id)aggregateDictionaryDomain;
- (void)didProcessJSONObject;
- (void)failWithError:(id)arg1;
- (void)processJSONObject:(id)arg1;
- (void)request:(id)arg1 receivedResponseData:(id)arg2;
- (void)willProcessJSONObject;

@end