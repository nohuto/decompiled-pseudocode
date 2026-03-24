/*
 * XREFs of PsFreezeProcess @ 0x14067CC1C
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x140887CE0 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C42A4 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     PsGetProcessSessionIdEx @ 0x1402830D0 (PsGetProcessSessionIdEx.c)
 *     KeFreezeProcess @ 0x1402830E8 (KeFreezeProcess.c)
 *     KeForceResumeProcess @ 0x1402EAA58 (KeForceResumeProcess.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     PsInvokeWin32Callout @ 0x14061B140 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1406CDED4 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x140935C6C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BAAC (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR BugCheckParameter1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 8) != 0 )
    return 0;
  v4 = KeFreezeProcess(BugCheckParameter1, a2);
  if ( (*(_DWORD *)(BugCheckParameter1 + 1124) & 8) != 0 )
  {
    KeForceResumeProcess(BugCheckParameter1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v4 && (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, BugCheckParameter1, 2LL);
  if ( a2 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    *(_QWORD *)(BugCheckParameter1 + 2224) = KiQueryUnbiasedInterruptTime();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter1 + 1080);
    KeAbPostRelease(BugCheckParameter1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(BugCheckParameter1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(BugCheckParameter1);
      PsInvokeWin32Callout(22, BugCheckParameter1, 1, (__int64)&ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v6) = 1;
      EtwTraceFreezeThawProcess(BugCheckParameter1, v6);
    }
    PsSetProcessTelemetryAppState(BugCheckParameter1);
  }
  return 1;
}
