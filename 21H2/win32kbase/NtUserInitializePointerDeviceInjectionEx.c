/*
 * XREFs of NtUserInitializePointerDeviceInjectionEx @ 0x1C015C5F0
 * Callers:
 *     NtUserInitializePointerDeviceInjection @ 0x1C015C5C0 (NtUserInitializePointerDeviceInjection.c)
 * Callees:
 *     RIMIDECheckCurrentProcessForInjectionCapability @ 0x1C0004E54 (RIMIDECheckCurrentProcessForInjectionCapability.c)
 *     ?Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ @ 0x1C00070A0 (-Enter@EnterLeaveCritMitRitHandOffHazard@@AEAAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     HMValidateSharedHandle @ 0x1C0030048 (HMValidateSharedHandle.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     NtUserRemoveInjectionDevice @ 0x1C0160100 (NtUserRemoveInjectionDevice.c)
 *     RIMIDE_InitializePointerDeviceInjection @ 0x1C019FE90 (RIMIDE_InitializePointerDeviceInjection.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall NtUserInitializePointerDeviceInjectionEx(
        int a1,
        int a2,
        unsigned __int64 a3,
        int a4,
        int a5,
        _QWORD *a6)
{
  __int64 v10; // rdx
  __int64 v11; // r9
  int v12; // r14d
  PDEVICE_OBJECT v13; // rcx
  _UNKNOWN **v14; // r8
  __int16 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *v18; // rdx
  ULONG64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  BOOL v22; // edi
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int Count; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v34; // rsi
  int v35; // eax
  _BYTE v37[16]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v38[3]; // [rsp+60h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+78h] [rbp-60h] BYREF

  v37[0] = 0;
  EnterLeaveCritMitRitHandOffHazard::Enter((Enter *)v37);
  v12 = 0;
  v38[0] = 0LL;
  if ( v37[0] )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    v14 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v15 = 25;
LABEL_9:
    WPP_RECORDER_AND_TRACE_SF_(
      v13->AttachedDevice,
      v10,
      (_DWORD)v14,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      2,
      21,
      v15,
      (__int64)&WPP_14ee9c13ec1538daa1b6b9343e30462b_Traceguids);
LABEL_10:
    v16 = 5LL;
LABEL_36:
    v22 = 0;
    UserSetLastError(v16, v10, (__int64)v14, v11);
    goto LABEL_37;
  }
  if ( !(unsigned int)RIMIDECheckCurrentProcessForInjectionCapability() )
  {
    v13 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100000) == 0
      || (LOBYTE(v10) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v10) = 0;
    }
    v14 = &WPP_RECORDER_INITIALIZED;
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v10 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_10;
    v15 = 26;
    goto LABEL_9;
  }
  if ( a1 == 3 )
  {
    if ( a2 != 1 )
      goto LABEL_35;
  }
  else if ( a1 != 2 || (unsigned int)(a2 - 1) > 0xFF )
  {
    goto LABEL_35;
  }
  if ( (unsigned int)(a4 - 1) > 2 )
  {
LABEL_35:
    v16 = 87LL;
    goto LABEL_36;
  }
  if ( !a3 || (v17 = HMValidateSharedHandle(a3, v10), v12 = v17, v17) )
  {
    v23 = RIMIDE_InitializePointerDeviceInjection(a1, a2, v12, a4, 0, a5, (__int64)v38);
    v22 = v23 >= 0;
    if ( v23 == -2147483631 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18, v20);
    if ( v22 )
    {
      v19 = MmUserProbeAddress;
      v18 = a6;
      if ( (unsigned __int64)a6 >= MmUserProbeAddress )
        v18 = (_QWORD *)MmUserProbeAddress;
      *v18 = *v18;
      *a6 = v38[0];
    }
  }
  else
  {
    v22 = 0;
  }
LABEL_37:
  if ( qword_1C029C988 )
    qword_1C029C988(v19, v18, v20, v21);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v25, v24, v26);
    v28 = gcDeferredDestroyTargets;
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(gcDeferredDestroyTargets, v24, v26);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v28, v24, v26, v27);
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v31, v30, v32);
    v34 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v35 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v34 + 44) || *(_DWORD *)(v34 + 48) || v35 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v34 + 28),
          0LL,
          2u,
          &v39);
      }
      *(_DWORD *)(v34 + 44) = 0;
      *(_OWORD *)(v34 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v22;
}
