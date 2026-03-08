/*
 * XREFs of PsFreezeProcess @ 0x1407DD068
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F8AC0 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x1409365B4 (DbgkpSuspendProcess.c)
 *     NtChangeProcessState @ 0x1409ACD20 (NtChangeProcessState.c)
 *     MiForceCrashForInvalidAccess @ 0x140A28438 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     PsGetProcessSessionIdEx @ 0x1402BDFA0 (PsGetProcessSessionIdEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     KeForceResumeProcess @ 0x140355998 (KeForceResumeProcess.c)
 *     KeFreezeProcess @ 0x140355C58 (KeFreezeProcess.c)
 *     PsInvokeWin32Callout @ 0x1407D2D10 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1407E7C28 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x1409E243C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x1409E5EB4 (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(__int64 a1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v7; // rdx
  unsigned int ProcessSessionId; // [rsp+30h] [rbp+8h] BYREF

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
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1080));
    KeAbPostRelease(a1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( *(_QWORD *)(a1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(a1);
      PsInvokeWin32Callout(22, a1, 1, &ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask[0]) & 2) != 0 )
    {
      LOBYTE(v7) = 1;
      EtwTraceFreezeThawProcess(a1, v7);
    }
    PsSetProcessTelemetryAppState((PRKPROCESS)a1);
  }
  return 1;
}
