/*
* This file was generated by the CommonAPI Generators. 
* Used org.genivi.commonapi.core 2.1.3.qualifier.
* Used org.franca.core 0.8.10.201309262002.
*
* This Source Code Form is subject to the terms of the Mozilla Public License, v. 2.0.
* If a copy of the MPL was not distributed with this file, You can obtain one at
* http://mozilla.org/MPL/2.0/.
*/
#ifndef COMMONAPI_TESTS_MANAGED_Root_Interface_STUB_H_
#define COMMONAPI_TESTS_MANAGED_Root_Interface_STUB_H_



#include <commonapi/tests/managed/BranchInterfaceStub.h>
#include <commonapi/tests/managed/LeafInterfaceStub.h>

#include "RootInterface.h"

#if !defined (COMMONAPI_INTERNAL_COMPILATION)
#define COMMONAPI_INTERNAL_COMPILATION
#endif


#include <CommonAPI/Stub.h>

#undef COMMONAPI_INTERNAL_COMPILATION

namespace commonapi {
namespace tests {
namespace managed {

/**
 * Receives messages from remote and handles all dispatching of deserialized calls
 * to a stub for the service RootInterface. Also provides means to send broadcasts
 * and attribute-changed-notifications of observable attributes as defined by this service.
 * An application developer should not need to bother with this class.
 */
class RootInterfaceStubAdapter: virtual public CommonAPI::StubAdapter, public RootInterface {
 public:

    
    virtual bool registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub>, const std::string&) = 0;
    virtual bool deregisterManagedStubLeafInterface(const std::string&) = 0;
    virtual std::set<std::string>& getLeafInterfaceInstances() = 0;
    virtual bool registerManagedStubBranchInterface(std::shared_ptr<BranchInterfaceStub>, const std::string&) = 0;
    virtual bool deregisterManagedStubBranchInterface(const std::string&) = 0;
    virtual std::set<std::string>& getBranchInterfaceInstances() = 0;
    
    virtual void deactivateManagedInstances() = 0;
    
protected:
    /**
     * Defines properties for storing the ClientIds of clients / proxies that have
     * subscribed to the selective broadcasts
     */
};


/**
 * Defines the necessary callbacks to handle remote set events related to the attributes
 * defined in the IDL description for RootInterface.
 * For each attribute two callbacks are defined:
 * - a verification callback that allows to verify the requested value and to prevent setting
 *   e.g. an invalid value ("onRemoteSet<AttributeName>").
 * - an action callback to do local work after the attribute value has been changed
 *   ("onRemote<AttributeName>Changed").
 *
 * This class and the one below are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class RootInterfaceStubRemoteEvent {
 public:
    virtual ~RootInterfaceStubRemoteEvent() { }

};


/**
 * Defines the interface that must be implemented by any class that should provide
 * the service RootInterface to remote clients.
 * This class and the one above are the ones an application developer needs to have
 * a look at if he wants to implement a service.
 */
class RootInterfaceStub : public CommonAPI::Stub<RootInterfaceStubAdapter , RootInterfaceStubRemoteEvent> {
 public:
    virtual ~RootInterfaceStub() { }


    /// This is the method that will be called on remote calls on the method testRootMethod.
    virtual void testRootMethod(const std::shared_ptr<CommonAPI::ClientId> clientId, int32_t inInt, std::string inString, RootInterface::testRootMethodError& methodError, int32_t& outInt, std::string& outString) = 0;
    
    virtual bool registerManagedStubLeafInterface(std::shared_ptr<LeafInterfaceStub>, const std::string&) = 0;
    virtual bool deregisterManagedStubLeafInterface(const std::string&) = 0;
    virtual std::set<std::string>& getLeafInterfaceInstances() = 0;
    virtual bool registerManagedStubBranchInterface(std::shared_ptr<BranchInterfaceStub>, const std::string&) = 0;
    virtual bool deregisterManagedStubBranchInterface(const std::string&) = 0;
    virtual std::set<std::string>& getBranchInterfaceInstances() = 0;
};

} // namespace managed
} // namespace tests
} // namespace commonapi

#endif // COMMONAPI_TESTS_MANAGED_Root_Interface_STUB_H_
