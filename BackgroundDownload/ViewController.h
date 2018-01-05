//
//  ViewController.h
//  BackgroundDownload
//
//  Created by 张汝泉 on 2017/12/29.
//  Copyright © 2017年 QuanGe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController< NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate,UIDocumentInteractionControllerDelegate>
@property (nonatomic) NSURLSession *session;
@property (nonatomic) NSURLSessionDownloadTask *downloadTask;
@property (strong, nonatomic) UIDocumentInteractionController *documentInteractionController;

@end

