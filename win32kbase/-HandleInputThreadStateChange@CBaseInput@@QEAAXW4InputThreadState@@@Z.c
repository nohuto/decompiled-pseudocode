/*
 * XREFs of ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C002EFEC
 * Callers:
 *     HandleInputThreadActivated @ 0x1C002EFA0 (HandleInputThreadActivated.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0093B20 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C002EC7C (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     RimInputTypeToDeviceInputType @ 0x1C002F180 (RimInputTypeToDeviceInputType.c)
 *     GetKnownRIMDeviceKind @ 0x1C002FBBC (GetKnownRIMDeviceKind.c)
 *     ?IsInputThread@CInputThreadBase@@QEBA_NXZ @ 0x1C007CCB8 (-IsInputThread@CInputThreadBase@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseInput::HandleInputThreadStateChange(__int64 a1, int a2)
{
  __int64 v4; // rbx
  int v5; // ebp
  __int64 i; // rdi
  __int64 result; // rax
  int KnownRIMDeviceKind; // eax

  if ( !CInputThreadBase::IsInputThread((CInputThreadBase *)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1473LL);
  if ( a2 )
  {
    if ( a2 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1508LL);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)result + 8LL))(result);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 1320);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v4, 0LL);
    v5 = RimInputTypeToDeviceInputType(*(unsigned int *)(a1 + 144));
    for ( i = **(_QWORD **)(a1 + 1328); i; i = *(_QWORD *)(i + 56) )
    {
      if ( *(unsigned __int8 *)(i + 48) == v5 )
      {
        KnownRIMDeviceKind = GetKnownRIMDeviceKind(i);
        CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, i, *(_QWORD *)i, 2);
      }
    }
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    if ( result )
      return (**(__int64 (__fastcall ***)(__int64))result)(result);
  }
  return result;
}
