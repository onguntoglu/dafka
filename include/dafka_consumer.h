/*  =========================================================================
    dafka_consumer - class description

    Copyright (c) the Contributors as noted in the AUTHORS file.
    This file is part of CZMQ, the high-level C binding for 0MQ:
    http://czmq.zeromq.org.

    This Source Code Form is subject to the terms of the Mozilla Public
    License, v. 2.0. If a copy of the MPL was not distributed with this
    file, You can obtain one at http://mozilla.org/MPL/2.0/.
    =========================================================================
*/

#ifndef DAFKA_CONSUMER_H_INCLUDED
#define DAFKA_CONSUMER_H_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//  @warning THE FOLLOWING @INTERFACE BLOCK IS AUTO-GENERATED BY ZPROJECT
//  @warning Please edit the model at "api/dafka_consumer.api" to make changes.
//  @interface
//  This is a stable class, and may not change except for emergencies. It
//  is provided in stable builds.
//  Creates a new dafka consumer client that runs in its own background thread.
DAFKA_EXPORT dafka_consumer_t *
    dafka_consumer_new (zconfig_t *config);

//  Destroys an instance of dafka consumer client by gracefully stopping its
//  background thread.
DAFKA_EXPORT void
    dafka_consumer_destroy (dafka_consumer_t **self_p);

//  Subscribe to a given topic.
DAFKA_EXPORT int
    dafka_consumer_subscribe (dafka_consumer_t *self, const char *subject);

//  Unsubscribe from a topic currently subscribed to.
DAFKA_EXPORT int
    dafka_consumer_unsubscribe (dafka_consumer_t *self, const char *subject);

//  Returns the address of the consumer instance.
DAFKA_EXPORT const char *
    dafka_consumer_address (dafka_consumer_t *self);

//  Get the current subscription as list of strings.
DAFKA_EXPORT zlist_t *
    dafka_consumer_subscription (dafka_consumer_t *self);

//  Returns the internal record source socket.
DAFKA_EXPORT zsock_t *
    dafka_consumer_record_source (dafka_consumer_t *self);

//  Self test of this class.
DAFKA_EXPORT void
    dafka_consumer_test (bool verbose);

//  @end

#ifdef __cplusplus
}
#endif

#endif
