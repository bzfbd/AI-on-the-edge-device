#include "ClassFlowDefineTypes.h"

#define LWT_TOPIC        "connection"
#define LWT_CONNECTED    "connected"
#define LWT_DISCONNECTED "connection lost"


void SetHomeassistantDiscoveryEnabled(bool enabled);
void mqttServer_Init(std::vector<NumberPost*>* _NUMBERS, int interval);
void mqttServer_setMeterType(std::string meterType, std::string valueUnit, std::string timeUnit,std::string rateUnit);

void register_server_mqtt_uri(httpd_handle_t server);

void publishRuntimeData(std::string maintopic, int SetRetainFlag);

std::string getTimeUnit(void);
void GotConnected(std::string maintopic, int SetRetainFlag);