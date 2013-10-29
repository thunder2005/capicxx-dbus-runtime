/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.3.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "LeafInterfaceDBusProxy.h"

namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createLeafInterfaceDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<LeafInterfaceDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

__attribute__((constructor)) void registerLeafInterfaceDBusProxy(void) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(LeafInterface::getInterfaceId(),
       &createLeafInterfaceDBusProxy);
}

LeafInterfaceDBusProxy::LeafInterfaceDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
    {
    }



void LeafInterfaceDBusProxy::testLeafMethod(const int32_t& inInt, const std::string& inString, CommonAPI::CallStatus& callStatus, LeafInterface::testLeafMethodError& methodError, int32_t& outInt, std::string& outString) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t, std::string>,
                                     CommonAPI::DBus::DBusSerializableArguments<LeafInterface::testLeafMethodError, int32_t, std::string> >::callMethodWithReply(
        *this,
        "testLeafMethod",
        "is",
        inInt, inString, 
        callStatus,
        methodError
        , outInt, outString);
}
std::future<CommonAPI::CallStatus> LeafInterfaceDBusProxy::testLeafMethodAsync(const int32_t& inInt, const std::string& inString, TestLeafMethodAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t, std::string>,
                                     CommonAPI::DBus::DBusSerializableArguments<LeafInterface::testLeafMethodError, int32_t, std::string> >::callMethodAsync(
        *this,
        "testLeafMethod",
        "is",
        inInt, inString, 
        std::move(callback));
}



void LeafInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

} // namespace managed
} // namespace tests
} // namespace commonapi
