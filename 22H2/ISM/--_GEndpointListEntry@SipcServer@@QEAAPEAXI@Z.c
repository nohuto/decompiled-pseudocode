/*
 * XREFs of ??_GEndpointListEntry@SipcServer@@QEAAPEAXI@Z @ 0x1800BF4DC
 * Callers:
 *     ?DispatchNextCallback@SipcServer@@UEAAJXZ @ 0x180039730 (-DispatchNextCallback@SipcServer@@UEAAJXZ.c)
 *     ?AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0PEAPEAU2@@Z @ 0x1800BF990 (-AcceptClientConnection@SipcServer@@UEAAJIP6AXPEAXPEAUISIPCEndpoint@@W4SIPC_ENDPOINT_STATUS@@@Z0.c)
 *     ?Clear@?$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ @ 0x1800BFC78 (-Clear@-$NtList@UEndpointListEntry@SipcServer@@@@QEAAXXZ.c)
 *     ?OnDisposePublic@SipcServer@@EEAAXXZ @ 0x1800C1390 (-OnDisposePublic@SipcServer@@EEAAXXZ.c)
 *     ?RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z @ 0x1800C1A20 (-RemoveEndpoint@SipcServer@@UEAAXPEAVSipcEndpoint@@@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003C400 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?ReleasePrivateReference@SharedObjectBase@@IEAAIXZ @ 0x1800BEEF0 (-ReleasePrivateReference@SharedObjectBase@@IEAAIXZ.c)
 *     ?RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z @ 0x1800C1A74 (-RemoveHandle@AggregateWaitHandle@@QEAAJPEAX@Z.c)
 *     ?RemoveOwner@SipcEndpoint@@QEAAXXZ @ 0x1800C1B10 (-RemoveOwner@SipcEndpoint@@QEAAXXZ.c)
 */

SipcServer::EndpointListEntry *__fastcall SipcServer::EndpointListEntry::`scalar deleting destructor'(
        SipcServer::EndpointListEntry *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    AggregateWaitHandle::RemoveHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 72LL), *((void **)this + 4));
    AggregateWaitHandle::RemoveHandle((AggregateWaitHandle *)(*((_QWORD *)this + 3) + 72LL), *((void **)this + 5));
    SipcEndpoint::RemoveOwner(*((SipcEndpoint **)this + 2));
    SharedObjectBase::ReleasePrivateReference(*((SharedObjectBase **)this + 2));
  }
  operator delete(this, (const struct std::nothrow_t *)0x38);
  return this;
}
