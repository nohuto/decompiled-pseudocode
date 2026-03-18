/*
 * XREFs of NtUserReleaseDC @ 0x1C0029480
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023390 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0029830 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1C0029C98 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0029EE0 (EtwTraceReleaseUserCrit.c)
 *     DestroyExclusiveUserCritDeferredUnlockList @ 0x1C002A100 (DestroyExclusiveUserCritDeferredUnlockList.c)
 *     UserIsUserCritSecInExclusive @ 0x1C002A1D0 (UserIsUserCritSecInExclusive.c)
 *     IsEtwUserCritEnabled @ 0x1C002A200 (IsEtwUserCritEnabled.c)
 *     _tlgKeywordOn @ 0x1C002A380 (_tlgKeywordOn.c)
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C002A3A8 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@W4CritType@012@@Z @ 0x1C002A404 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@W4CritType@012@@Z.c)
 *     ReleaseCacheDC @ 0x1C002A470 (ReleaseCacheDC.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C004DAC0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall NtUserReleaseDC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _BOOL8 v4; // rdi
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int Count; // eax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+50h] [rbp-38h] BYREF

  InputTraceLogging::Perf::CritAcquire::CritAcquire(&v16, 0LL);
  if ( (unsigned int)IsEtwUserCritEnabled() )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  }
  ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
  EtwTraceAcquiredSharedUserCrit();
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)&v16);
  v4 = (unsigned int)ReleaseCacheDC(a1, 0LL) != 2;
  v6 = (unsigned int)gcSwitchInProgressWaiters;
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( qword_1C029C988 )
    qword_1C029C988(v3, v2, v6, v5);
  if ( (unsigned int)UserIsUserCritSecInExclusive(v3, v2, v6, v5) )
  {
    if ( gcInHMDestroyUnlockedObjectWorker )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    if ( gphePrimaryDestroyTarget )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
    if ( gcDeferredDestroyTargets > gcSecondaryDestroyTargets )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7, v9);
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
    *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1508) = 0;
  gptiCurrent = 0LL;
  if ( InputTraceLogging::Perf::s_userCritLoggingEnabled )
  {
    v13 = PsGetCurrentThreadWin32Thread();
    v14 = v13;
    if ( v13 )
    {
      v15 = *(_DWORD *)(v13 + 24);
      if ( (*(_DWORD *)(v14 + 44) || *(_DWORD *)(v14 + 48) || v15 > 0)
        && (unsigned int)dword_1C028EE70 > 6
        && (unsigned __int8)tlgKeywordOn(&dword_1C028EE70, 0x2000LL) )
      {
        tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C028EE70, (int)&dword_1C025AD03, v14 + 28, 0, 2u, &v16);
      }
      *(_DWORD *)(v14 + 44) = 0;
      *(_OWORD *)(v14 + 28) = 0LL;
    }
  }
  EtwTraceReleaseUserCrit();
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v4;
}
