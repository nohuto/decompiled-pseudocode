/*
 * XREFs of NtUserRemoveInjectionDevice @ 0x1C0160100
 * Callers:
 *     NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0 (NtUserInitializePointerDeviceInjectionEx.c)
 * Callees:
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01846E4 (RIMIDERemoveInjectionDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserRemoveInjectionDevice(char *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // esi
  __int64 CurrentProcessWin32Process; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  char *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int Count; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v29; // rbx
  int v30; // eax
  _BYTE v32[8]; // [rsp+50h] [rbp-48h] BYREF
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v34; // [rsp+60h] [rbp-38h] BYREF

  v32[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v32);
  Object = 0LL;
  if ( v32[0] )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v2) = 0;
    }
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v2,
        v3,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        2,
        21,
        27,
        (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
    v5 = 5LL;
    goto LABEL_22;
  }
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) < 0 )
  {
    v5 = 6LL;
LABEL_22:
    v7 = 0;
    UserSetLastError(v5, v2, v3, v4);
    goto LABEL_23;
  }
  v7 = 1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v9 = Object;
  v10 = *(_QWORD *)(CurrentProcessWin32Process + 896);
  if ( !v10 )
    goto LABEL_17;
  v11 = *(char **)(v10 + 96);
  if ( !v11 )
    goto LABEL_17;
  Object = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(v11, 3u, 1, &Object) < 0 )
    goto LABEL_17;
  if ( v9 == Object )
  {
    v7 = 0;
    UserSetLastError(6LL, v12, v13, v14);
  }
  ObfDereferenceObject(Object);
  if ( v7 == 1 )
  {
LABEL_17:
    v15 = v9[53];
    RIMLockExclusive(v15 + 104);
    if ( (v9[36] & 4) == 0 )
      RIMIDERemoveInjectionDevice(v9);
    *(_QWORD *)(v15 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(v15 + 104, 0LL);
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(v9);
LABEL_23:
  if ( qword_1C029C988 )
    qword_1C029C988(v17, v16, v18, v19);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v21, v20, v22);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v21, v20, v22, v23);
  }
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
  {
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
    DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 37LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  }
  if ( gptiCurrent && W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v26, v25, v27);
    v29 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v30 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v29 + 44) || *(_DWORD *)(v29 + 48) || v30 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v29 + 28),
          0LL,
          2u,
          &v34);
      }
      *(_DWORD *)(v29 + 44) = 0;
      *(_OWORD *)(v29 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v7;
}
