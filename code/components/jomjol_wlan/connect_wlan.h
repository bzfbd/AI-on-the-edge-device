#ifndef CONNECT_WLAN_H
#define CONNECT_WLAN_H

#include <string>

void wifi_init_sta(const char *_ssid, const char *_password, const char *_hostname, const char *_ipadr, const char *_gw,  const char *_netmask, const char *_dns, const char *_ipv6en);
void wifi_init_sta(const char *_ssid, const char *_password, const char *_hostname, const char *_ipadr, const char *_gw,  const char *_netmask, const char *_dns);
void wifi_init_sta(const char *_ssid, const char *_password, const char *_hostname);
void wifi_init_sta(const char *_ssid, const char *_password);

std::string* getIPAddress();
std::string* getSSID();
int get_WIFI_RSSI();

extern std::string hostname;
extern std::string std_hostname;
extern std::string ipv6en;
extern std::string std_ipv6en;

#endif
