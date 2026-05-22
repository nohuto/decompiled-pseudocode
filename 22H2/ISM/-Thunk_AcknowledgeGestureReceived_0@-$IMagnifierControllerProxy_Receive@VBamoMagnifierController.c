/*
 * XREFs of ?Thunk_AcknowledgeGestureReceived_0@?$IMagnifierControllerProxy_Receive@VBamoMagnifierControllerProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180100D50
 * Callers:
 *     <none>
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IMagnifierControllerProxy_Receive<BamoImpl::BamoMagnifierControllerProxyImpl>::Thunk_AcknowledgeGestureReceived_0(
        __int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
    (Microsoft::BamoImpl::DropAndReacquireLock *)&v5,
    *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL) + 32LL));
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 16) + 80LL))(a1 - 16);
  v3 = v5;
  if ( v5 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(v5 + 128));
    *(_DWORD *)(v3 + 168) = GetCurrentThreadId();
  }
  return v2;
}
