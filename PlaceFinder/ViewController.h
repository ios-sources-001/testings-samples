//
//  ViewController.h
//  PlaceFinder
//
//  Created by Softcraft Systems and Solutions Private Limited on 01/09/14.
//  Copyright (c) 2014 Softcraft Systems and Solutions Private Limited. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController<CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
    CLLocation *currentLocation;
}
@end
