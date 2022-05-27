//
//  QRCScannerViewController.h
//  QRCodeScanner
//
//  Created by luhong on 2022/5/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol QRCodeScannerViewControllerDelegate <NSObject>
/**
 *  扫描成功后返回扫描结果
 *
 *  @param result 扫描结果
 */
- (void)didFinshedScanning:(NSString *)result;

@end

@interface QRCScannerViewController : UIViewController

@property (nonatomic,assign) id<QRCodeScannerViewControllerDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
