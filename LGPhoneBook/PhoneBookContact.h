//
//  PhoneBookContact.h
//  Find The Words
//
//  Created by David Sahakyan on 1/12/13.
//  Copyright (c) 2013 Davit Sahakyan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PhoneBookContact : NSObject

//Input Properties
@property (strong, nonatomic) NSString *mobile;
@property (strong, nonatomic) NSString *name;

+ (PhoneBookContact *)contactWithName:(NSString *)name
                               mobile:(NSString *)mobile;

@end
