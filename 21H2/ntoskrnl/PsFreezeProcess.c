/*
 * XREFs of PsFreezeProcess @ 0x1406C03F0
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140687754 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x14092AC20 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x140967E00 (MiForceCrashForInvalidAccess.c)
 *     NtChangeProcessState @ 0x1409AEC10 (NtChangeProcessState.c)
 * Callees:
 *     KeFreezeProcess @ 0x1402443D8 (KeFreezeProcess.c)
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402F5718 (KiQueryUnbiasedInterruptTime.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeForceResumeProcess @ 0x14035EB3C (KeForceResumeProcess.c)
 *     PsInvokeWin32Callout @ 0x1406F83A0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x14071147C (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E2110 (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E6524 (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR a1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
    return 0;
  v4 = KeFreezeProcess(a1, a2);
  if ( (*(_DWORD *)(a1 + 1124) & 8) != 0 )
  {
    KeForceResumeProcess(a1);
    return 0;
  }
  CurrentThread = KeGetCurrentThread();
  if ( !v4 && (*(_DWORD *)(a1 + 2172) & 0x80000) != 0 )
    EtwTiLogSuspendResumeProcess(0LL, CurrentThread, a1, 2LL);
  if ( a2 )
  {
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1080, 0LL);
    *(_QWORD *)(a1 + 2224) = KiQueryUnbiasedInterruptTime();
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 1080);
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22LL, a1, 1LL, &ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v6) = 1;
      EtwTraceFreezeThawProcess(a1, v6);
    }
    PsSetProcessTelemetryAppState(a1);
  }
  return 1;
}
