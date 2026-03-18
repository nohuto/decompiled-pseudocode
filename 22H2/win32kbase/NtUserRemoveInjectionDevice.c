/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C0149F80
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0146E70 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C000AB30 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C0045E80 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     W32GetCurrentThread @ 0x1C0046320 (W32GetCurrentThread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004FAF0 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0053D40 (EtwTraceReleaseUserCrit.c)
 *     RIMLockExclusive @ 0x1C0055140 (RIMLockExclusive.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0072E20 (RawInputManagerDeviceObjectResolveHandle.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C0088180 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0178FE8 (RIMIDERemoveInjectionDevice.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // ecx
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  char *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int Count; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  PVOID v28; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Object);
  v28 = 0LL;
  if ( (_BYTE)Object )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v2) = 0;
    }
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        2,
        27,
        (__int64)&WPP_a9f39ec931323428c3fb254cb6384520_Traceguids);
    }
    v4 = 5;
    goto LABEL_24;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v28) < 0 )
  {
    v4 = 6;
LABEL_24:
    v6 = 0;
    UserSetLastError(v4);
    goto LABEL_25;
  }
  v6 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v8 = *(_QWORD *)(CurrentProcessWin32Process + 904);
  v9 = v28;
  if ( !v8 )
    goto LABEL_19;
  v10 = *(char **)(v8 + 96);
  if ( !v10 )
    goto LABEL_19;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v10, 3u, 1, &Object) < 0 )
    goto LABEL_19;
  if ( v9 == Object )
  {
    v6 = 0;
    UserSetLastError(6);
  }
  ObfDereferenceObject(Object);
  if ( v6 == 1 )
  {
LABEL_19:
    v11 = v9[51];
    RIMLockExclusive(v11 + 104);
    if ( (v9[34] & 4) == 0 )
      RIMIDERemoveInjectionDevice(v9);
    *(_QWORD *)(v11 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v11 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(v9);
LABEL_25:
  if ( qword_1C0296058 )
    qword_1C0296058();
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v13, v12, v14, v15) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1170);
    }
    if ( gphePrimaryDestroyTarget )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1178);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1184);
    }
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList();
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetCurrentThread() )
    *((_DWORD *)PtiCurrentShared() + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit(v18, v17, v19, v20);
  v25 = SGDGetUserSessionState(v22, v21, v23, v24);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v25 + 8));
  return v6;
}
