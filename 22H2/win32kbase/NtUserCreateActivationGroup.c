/*
 * XREFs of NtUserCreateActivationGroup @ 0x1C012D590
 * Callers:
 *     <none>
 * Callees:
 *     ??1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ @ 0x1C0037480 (--1CritAcquire@Perf@InputTraceLogging@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0037600 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0039290 (EtwTraceAcquiredSharedUserCrit.c)
 *     ??0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z @ 0x1C00394B0 (--0CritAcquire@Perf@InputTraceLogging@@QEAA@_N@Z.c)
 *     EnterSharedCritAvoidingDitHitTestHazard @ 0x1C003D1C0 (EnterSharedCritAvoidingDitHitTestHazard.c)
 *     __security_check_cookie @ 0x1C00C5400 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserCreateActivationGroup(__int64 a1)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  InputTraceLogging::Perf::CritAcquire::CritAcquire((InputTraceLogging::Perf::CritAcquire *)v6, 0);
  EnterSharedCritAvoidingDitHitTestHazard(0, 1);
  InputTraceLogging::Perf::CritAcquire::~CritAcquire((InputTraceLogging::Perf::CritAcquire *)v6, v2, v3, v4);
  EtwTraceAcquiredSharedUserCrit();
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
