/*
 * XREFs of PsFreezeProcess @ 0x140600364
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     DbgkpSuspendProcess @ 0x140887E40 (DbgkpSuspendProcess.c)
 *     MiForceCrashForInvalidAccess @ 0x1408C4404 (MiForceCrashForInvalidAccess.c)
 * Callees:
 *     KeFreezeProcess @ 0x14023A64C (KeFreezeProcess.c)
 *     PsGetProcessSessionIdEx @ 0x14023A7B0 (PsGetProcessSessionIdEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeForceResumeProcess @ 0x14029BDA8 (KeForceResumeProcess.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1406A51B8 (PsSetProcessTelemetryAppState.c)
 *     EtwTraceFreezeThawProcess @ 0x140935E3C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BC7C (EtwTiLogSuspendResumeProcess.c)
 */

char __fastcall PsFreezeProcess(ULONG_PTR BugCheckParameter1, char a2)
{
  int v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
    if ( *(_QWORD *)(BugCheckParameter1 + 1288) )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(BugCheckParameter1);
      PsInvokeWin32Callout(22LL, BugCheckParameter1, 1LL, &ProcessSessionId);
    }
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      LOBYTE(v9) = 1;
      EtwTraceFreezeThawProcess(BugCheckParameter1, v9);
    }
    PsSetProcessTelemetryAppState(BugCheckParameter1);
  }
  return 1;
}
