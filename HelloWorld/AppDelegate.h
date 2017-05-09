//
//  AppDelegate.h
//  HelloWorld
//
//  Created by Komal Gaikwad on 09/05/17.
//  Copyright © 2017 Komal Gaikwad. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

