#ifndef EDUPAGE_EDUPAGE_H
#define EDUPAGE_EDUPAGE_H

struct EdupageCanteen {};

struct EdupageClient {
    char * server;
    char * sessid;
};

/* Creates a client and log it in */
struct EdupageClient * edupage_client_create(char const username[static 1], char const password[static 1], char const server[static 1]);

/* Destroys a client */
void edupage_client_destroy(struct EdupageClient * client);

/* Retrieves the canteen
Date format: YYYYMMdd
*/
struct EdupageCanteen edupage_client_get_canteen(struct EdupageClient const client[static 1], char const * const date);

/* Changes the order status*/
bool edupage_client_canteen_change_order_status(struct EdupageClient const client[static 1], bool const status, char const * const date);

#endif // EDUPAGE_EDUPAGE_H