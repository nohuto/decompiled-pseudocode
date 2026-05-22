/*
 * XREFs of ?OnDisconnectedCallout@BamoProxy@Bamo@Microsoft@@AEAAJXZ @ 0x1800046D0
 * Callers:
 *     ?OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z @ 0x1800045D0 (-OnIDFreed@ConnectionIndirector@BamoImpl@Microsoft@@UEAAJIIPEAX@Z.c)
 *     ?Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z @ 0x1800724BC (-Disconnect@BamoProxyImpl@BamoImpl@Microsoft@@QEAAX_N@Z.c)
 * Callees:
 *     ?LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ @ 0x180006230 (-LeaveLock@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::Bamo::BamoProxy::OnDisconnectedCallout(Microsoft::Bamo::BamoProxy *this)
{
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v2; // rcx
  Microsoft::BamoImpl::BaseBamoConnectionImpl *v3; // rbx
  unsigned int v4; // edi

  v2 = *(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)((*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 48LL))(this)
                                                                               + 16)
                                                                   + 24LL)
                                                       + 32LL);
  v3 = 0LL;
  if ( !*((_DWORD *)v2 + 43) )
  {
    v3 = v2;
    Microsoft::BamoImpl::BaseBamoConnectionImpl::LeaveLock(v2);
  }
  v4 = (*(__int64 (__fastcall **)(Microsoft::Bamo::BamoProxy *))(*(_QWORD *)this + 40LL))(this);
  if ( v3 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v3 + 128));
    *((_DWORD *)v3 + 42) = GetCurrentThreadId();
  }
  return v4;
}
