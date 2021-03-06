//
//  RKDeviceSessionMac.h
//  RobotKit
//
//  Created by Michael DePhillips on 6/20/12.
//  Copyright (c) 2012 Orbotix Inc. All rights reserved.
//

#import "RKDeviceSession.h"
#import <IOBluetooth/IOBluetooth.h>

@interface RKDeviceSessionMac : RKDeviceSession <IOBluetoothRFCOMMChannelDelegate> 

@end
