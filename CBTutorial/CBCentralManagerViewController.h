//
//  CBCentralManagerViewController.h
//  CBTutorial
//
//  Created by Orlando Pereira on 10/8/13.
//  Copyright (c) 2013 Mobiletuts. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreBluetooth/CoreBluetooth.h>

#import "SERVICES.h"

@interface CBCentralManagerViewController : UIViewController

@property (strong, nonatomic) IBOutlet UITextView *textview;

@property (strong, nonatomic) CBCentralManager *centralManager;             // Server host
@property (strong, nonatomic) CBPeripheral *discoveredPeripheral;    // Client host
@property (strong, nonatomic) NSMutableData *data;                          // Data to send/recv
@end
