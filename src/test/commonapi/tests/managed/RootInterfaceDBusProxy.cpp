/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.3.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#include "RootInterfaceDBusProxy.h"

namespace commonapi {
namespace tests {
namespace managed {

std::shared_ptr<CommonAPI::DBus::DBusProxy> createRootInterfaceDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyConnection) {
    return std::make_shared<RootInterfaceDBusProxy>(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyConnection);
}

__attribute__((constructor)) void registerRootInterfaceDBusProxy(void) {
    CommonAPI::DBus::DBusFactory::registerProxyFactoryMethod(RootInterface::getInterfaceId(),
       &createRootInterfaceDBusProxy);
}

RootInterfaceDBusProxy::RootInterfaceDBusProxy(
                    const std::shared_ptr<CommonAPI::DBus::DBusFactory>& factory,
                    const std::string& commonApiAddress,
                    const std::string& interfaceName,
                    const std::string& busName,
                    const std::string& objectPath,
                    const std::shared_ptr<CommonAPI::DBus::DBusProxyConnection>& dbusProxyconnection):
        CommonAPI::DBus::DBusProxy(factory, commonApiAddress, interfaceName, busName, objectPath, dbusProxyconnection)
,        proxyManagerLeafInterface_(*this, "commonapi.tests.managed.LeafInterface", factory),
        proxyManagerBranchInterface_(*this, "commonapi.tests.managed.BranchInterface", factory)
    {
    }



void RootInterfaceDBusProxy::testRootMethod(const int32_t& inInt, const std::string& inString, CommonAPI::CallStatus& callStatus, RootInterface::testRootMethodError& methodError, int32_t& outInt, std::string& outString) {
    CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t, std::string>,
                                     CommonAPI::DBus::DBusSerializableArguments<RootInterface::testRootMethodError, int32_t, std::string> >::callMethodWithReply(
        *this,
        "testRootMethod",
        "is",
        inInt, inString, 
        callStatus,
        methodError
        , outInt, outString);
}
std::future<CommonAPI::CallStatus> RootInterfaceDBusProxy::testRootMethodAsync(const int32_t& inInt, const std::string& inString, TestRootMethodAsyncCallback callback) {
    return CommonAPI::DBus::DBusProxyHelper<CommonAPI::DBus::DBusSerializableArguments<int32_t, std::string>,
                                     CommonAPI::DBus::DBusSerializableArguments<RootInterface::testRootMethodError, int32_t, std::string> >::callMethodAsync(
        *this,
        "testRootMethod",
        "is",
        inInt, inString, 
        std::move(callback));
}

CommonAPI::ProxyManager& RootInterfaceDBusProxy::getProxyManagerLeafInterface() {
    return proxyManagerLeafInterface_;
}
CommonAPI::ProxyManager& RootInterfaceDBusProxy::getProxyManagerBranchInterface() {
    return proxyManagerBranchInterface_;
}


void RootInterfaceDBusProxy::getOwnVersion(uint16_t& ownVersionMajor, uint16_t& ownVersionMinor) const {
    ownVersionMajor = 1;
    ownVersionMinor = 0;
}

} // namespace managed
} // namespace tests
} // namespace commonapi
