//
//  CBLQueryEnumerator.h
//  CouchbaseLite
//
//  Created by Jens Alfke on 5/11/17.
//  Copyright © 2017 Couchbase. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "c4.h"
@protocol CBLQueryInternal;
@class CBLDatabase;

NS_ASSUME_NONNULL_BEGIN

@interface CBLQueryEnumerator : NSEnumerator

- (instancetype) initWithQuery: (id<CBLQueryInternal>)query
                       c4Query: (C4Query*)c4Query
                    enumerator: (C4QueryEnumerator*)e
               returnDocuments: (bool)returnDocuments;

@property (readonly, nonatomic) CBLDatabase* database;
@property (readonly, nonatomic) C4Query* c4Query;

@end

NS_ASSUME_NONNULL_END
