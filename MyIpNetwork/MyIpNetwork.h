
#ifndef _MYIPNETWORK_H_
#define _MYIPNETWORK_H_

#include "options.h"
#if ((USE_WIFI_NETWORK_LINK == 1) || (USE_ETHERNET_NETWORK_LINK == 1))
   
   // Private helper functions.
void ServiceMyIpNetwork(void);
void init_MyIpNetwork(void);

#endif // #if ((USE_WIFI_NETWORK_LINK == 1) || (USE_ETHERNET_NETWORK_LINK == 1))
#endif // _MYIPNETWORK_H_
