//
//  esriViewController.h
//  DemoApp
//
//  Created by Feng Zhang on 12/9/13.
//  Copyright (c) 2013 Feng Zhang. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ArcGIS/ArcGIS.h"


@interface esriViewController : UIViewController <AGSMapViewLayerDelegate>

@property (weak, nonatomic) IBOutlet AGSMapView *mapView;

- (IBAction)basemapChanged:(id)sender;


@end
