/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C0175990
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C0172660 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00097A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0037330 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C00399D0 (RIMLockExclusive.c)
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 *     EtwTraceReleaseUserCrit @ 0x1C004E0F0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C004E2E0 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C004F93C (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x1C004F968 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C004FE50 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01A64F8 (RIMIDERemoveInjectionDevice.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edx
  int v6; // r8d
  int v7; // ecx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  char *v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int Count; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rax
  PVOID Object; // [rsp+78h] [rbp+10h] BYREF
  PVOID v31; // [rsp+80h] [rbp+18h] BYREF

  LOBYTE(Object) = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)&Object, a2, a3, a4);
  v31 = 0LL;
  if ( (_BYTE)Object )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v5) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v5) = 0;
    }
    if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v5,
        v6,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        27,
        (__int64)&WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids);
    }
    v7 = 5;
    goto LABEL_24;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &v31) < 0 )
  {
    v7 = 6;
LABEL_24:
    v9 = 0;
    UserSetLastError(v7);
    goto LABEL_25;
  }
  v9 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v11 = *(_QWORD *)(CurrentProcessWin32Process + 880);
  v12 = v31;
  if ( !v11 )
    goto LABEL_19;
  v13 = *(char **)(v11 + 96);
  if ( !v13 )
    goto LABEL_19;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v13, 3u, 1, &Object) < 0 )
    goto LABEL_19;
  if ( v12 == Object )
  {
    v9 = 0;
    UserSetLastError(6);
  }
  ObfDereferenceObject(Object);
  if ( v9 == 1 )
  {
LABEL_19:
    v14 = v12[51];
    RIMLockExclusive(v14 + 104);
    if ( (v12[34] & 4) == 0 )
      RIMIDERemoveInjectionDevice(v12);
    *(_QWORD *)(v14 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v14 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(v12);
LABEL_25:
  if ( qword_1C02D71D0 )
    qword_1C02D71D0(v16, v15, v17, v18);
  if ( IS_USERCRIT_OWNED_EXCLUSIVE(v16, v15, v17, v18) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1206);
    }
    if ( gphePrimaryDestroyTarget )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1214);
    }
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
    {
      LODWORD(Object) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1220);
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
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *((_DWORD *)PtiCurrentShared(v21, v20, v22, v23) + 387) = 0;
  gptiCurrent = 0LL;
  EtwTraceReleaseUserCrit();
  v28 = SGDGetUserSessionState(v25, v24, v26, v27);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v28 + 8));
  return v9;
}
