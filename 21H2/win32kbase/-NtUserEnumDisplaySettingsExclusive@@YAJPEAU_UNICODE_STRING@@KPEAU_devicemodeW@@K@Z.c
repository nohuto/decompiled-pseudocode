/*
 * XREFs of ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x1C015322C
 * Callers:
 *     NtUserEnumDisplaySettings @ 0x1C006F4E0 (NtUserEnumDisplaySettings.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     DrvEnumDisplaySettings @ 0x1C006F640 (DrvEnumDisplaySettings.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserEnumDisplaySettingsExclusive(
        struct _UNICODE_STRING *a1,
        __int64 a2,
        struct _devicemodeW *a3,
        int a4)
{
  unsigned int v6; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int Count; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v22; // rbx
  int v23; // eax
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-58h] BYREF

  v6 = a2;
  UserSessionSwitchEnterCrit((__int64)a1, a2, (__int64)a3);
  if ( gbVideoInitialized )
    v12 = DrvEnumDisplaySettings(a1, *(_QWORD *)(*((_QWORD *)gpDispInfo + 12) + 80LL), v6, a3, a4);
  else
    v12 = -1073741823;
  if ( qword_1C029C988 )
    qword_1C029C988(v9, v8, v10, v11);
  if ( UserIsUserCritSecInExclusive() )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
    gcInHMDestroyUnlockedObjectWorker = 0;
    gphePrimaryDestroyTarget = 0LL;
    DestroyExclusiveUserCritDeferredUnlockList(v14, v13, v15, v16);
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
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(v19, v18, v20);
    v22 = CurrentThreadWin32Thread;
    if ( CurrentThreadWin32Thread )
    {
      v23 = *(_DWORD *)(CurrentThreadWin32Thread + 24);
      if ( (*(_DWORD *)(v22 + 44) || *(_DWORD *)(v22 + 48) || v23 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && tlgKeywordOn((__int64)&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_1C028EE70,
          (unsigned __int8 *)dword_1C025AD03,
          (const GUID *)(v22 + 28),
          0LL,
          2u,
          &v25);
      }
      *(_DWORD *)(v22 + 44) = 0;
      *(_OWORD *)(v22 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v12;
}
