//
//  TUPFUser.h
//  Tugram
//
//  Created by tim on 4/7/15.
//  Copyright (c) 2015 Timothy Yeh. All rights reserved.
//
#import <Parse/Parse.h>

@interface TUPFUser : PFObject<PFSubclassing>

//PFUser has email, username, password
@property (nonatomic, strong) NSString *fullName;
@property (nonatomic, strong) NSData *profileThumbnailImage;
@property (nonatomic, strong) NSArray *followers;
@property (nonatomic, strong) NSArray *followings;
@property (nonatomic, strong) NSArray *likes;

+ (NSString *)parseClassName;

@end
