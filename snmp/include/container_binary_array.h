/*
 * binary_array.h
 * $Id: container_binary_array.h 9757 2004-03-02 05:03:36Z rstory $
 */

#ifndef BINARY_ARRAY_H
#define BINARY_ARRAY_H

#ifdef __cplusplus
extern          "C" {
#endif

#include "asn1.h"
#include "container.h"
#include "factory.h"

    /*
     * initialize binary array container. call at startup.
     */
    void netsnmp_container_binary_array_init(void);

    /*
     * get an container which uses an binary_array for storage
     */
    netsnmp_container *   netsnmp_container_get_binary_array(void);

    /*
     * get a factory for producing binary_array objects
     */
    netsnmp_factory *     netsnmp_container_get_binary_array_factory(void);


    int netsnmp_binary_array_remove(netsnmp_container *c, const void *key,
                                    void **save);

    void netsnmp_binary_array_release(netsnmp_container *c);

    void netsnmp_container_binary_array_init(void);

#ifdef __cplusplus
}
#endif
#endif
