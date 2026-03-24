/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0089634
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00879A8 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01B1F48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0042200 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00563DC (RimInputTypeToDeviceInputType.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00897D4 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C0089A08 (GetKnownRIMDeviceKind.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(int *a1, int a2)
{
  CInputThread *v2; // rdi
  bool v5; // bl
  int v6; // eax
  struct DEVICEINFO *v7; // rbx
  int v8; // edi
  __int64 result; // rax
  unsigned int KnownRIMDeviceKind; // eax

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  v5 = CInputThread::_CalledOnInputThread(v2);
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( !v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1404LL);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1440LL);
    result = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v6 = RimInputTypeToDeviceInputType(a1[36]);
    v7 = CBaseInput::_spDevList;
    v8 = v6;
    while ( v7 )
    {
      if ( *((unsigned __int8 *)v7 + 48) == v8 && (*((_QWORD *)v7 + 29) || (*((_DWORD *)v7 + 46) & 0x2000) != 0) )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(v7);
        if ( KnownRIMDeviceKind )
          CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v7, *(_QWORD *)v7, 2LL);
      }
      v7 = (struct DEVICEINFO *)*((_QWORD *)v7 + 7);
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
