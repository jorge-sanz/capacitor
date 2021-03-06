
@interface CAPPluginCallResult : NSObject

@property (nonatomic, strong) NSDictionary<NSString *, id>* data;

- (instancetype)init:(NSDictionary<NSString *, id>*)data;

@end

@interface CAPPluginCallError : NSObject

@property (nonatomic, strong) NSString *message;
@property (nonatomic, strong) NSError *error;
@property (nonatomic, strong) NSDictionary<NSString *, id> *data;

- (instancetype)initWithMessage:(NSString *)message error:(NSError *)error data:(NSDictionary<NSString *, id>*)data;

@end

typedef void(^CAPPluginCallSuccessHandler)(CAPPluginCallResult *result);
typedef void(^CAPPluginCallErrorHandler)(CAPPluginCallError *error);

@interface CAPPluginCall : NSObject

@property (nonatomic, assign) BOOL save;
@property (nonatomic, strong) NSString *callbackId;
@property (nonatomic, strong) NSDictionary *options;
@property (nonatomic, copy) CAPPluginCallSuccessHandler successHandler;
@property (nonatomic, copy) CAPPluginCallErrorHandler errorHandler;

- (instancetype)initWithCallbackId:(NSString *)callbackId options:(NSDictionary *)options success:(CAPPluginCallSuccessHandler)success error:(CAPPluginCallErrorHandler)error;

@end


