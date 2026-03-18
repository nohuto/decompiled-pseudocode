/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C00B5BF0
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C00B5A44 (UserActivateMITInputProcessing.c)
 *     UserDeactivateMITInputProcessing @ 0x1C01EBB48 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C0037CB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     RimInputTypeToDeviceInputType @ 0x1C00B5F24 (RimInputTypeToDeviceInputType.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C00B5F50 (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C00B614C (GetKnownRIMDeviceKind.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(unsigned int *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // eax
  struct DEVICEINFO *v8; // rbx
  int v9; // esi
  __int64 result; // rax
  unsigned int KnownRIMDeviceKind; // eax

  if ( !CInputThreadBase::IsInputThread(gpInputThread) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    v7 = RimInputTypeToDeviceInputType(a1[36]);
    v8 = CBaseInput::_spDevList;
    v9 = v7;
    while ( v8 )
    {
      if ( *((unsigned __int8 *)v8 + 48) == v9 )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(v8);
        CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v8, *(_QWORD *)v8, 2LL);
      }
      v8 = (struct DEVICEINFO *)*((_QWORD *)v8 + 7);
    }
    ExReleasePushLockSharedEx(&CBaseInput::_sLock, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
