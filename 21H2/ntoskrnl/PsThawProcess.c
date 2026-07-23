/*
 * XREFs of PsThawProcess @ 0x1406001EC
 * Callers:
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x1408872B4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1408873A0 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140887CD8 (DbgkpResumeProcess.c)
 * Callees:
 *     KeThawProcess @ 0x14023A474 (KeThawProcess.c)
 *     PsGetProcessSessionIdEx @ 0x14023A7B0 (PsGetProcessSessionIdEx.c)
 *     KiQueryUnbiasedInterruptTime @ 0x140275C64 (KiQueryUnbiasedInterruptTime.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     PsInvokeWin32Callout @ 0x140684DA0 (PsInvokeWin32Callout.c)
 *     PspWow64GetSharedInformation @ 0x1406A16E4 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1406A16FC (PsWow64GetProcessNtdllType.c)
 *     PsSetProcessTelemetryAppState @ 0x1406A51B8 (PsSetProcessTelemetryAppState.c)
 *     VslUpdateFreezeTimeBias @ 0x1408906F0 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x140935E3C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BC7C (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawProcess(ULONG_PTR BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int ProcessNtdllType; // eax
  __int64 SharedInformation; // rax
  __int64 result; // rax
  int v12; // ebx
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *v14; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v14 = CurrentThread;
  if ( a2 )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1288) && (*(_DWORD *)(BugCheckParameter1 + 1124) & 8) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(BugCheckParameter1);
      PsInvokeWin32Callout(23LL, BugCheckParameter1, 1LL, &ProcessSessionId);
    }
    v5 = 0LL;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
    if ( *(_QWORD *)(BugCheckParameter1 + 2224) )
    {
      v5 = KiQueryUnbiasedInterruptTime() - *(_QWORD *)(BugCheckParameter1 + 2224);
      *(_QWORD *)(BugCheckParameter1 + 2224) = 0LL;
      *(_QWORD *)(BugCheckParameter1 + 2320) += v5;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter1 + 1080);
    KeAbPostRelease(BugCheckParameter1 + 1080);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v6, v7, v8);
    if ( (*(_BYTE *)(BugCheckParameter1 + 992) & 1) != 0 )
    {
      VslUpdateFreezeTimeBias(BugCheckParameter1, v5);
    }
    else
    {
      *(_QWORD *)PspFreezeTimeBiasAddress += v5;
      ProcessNtdllType = PsWow64GetProcessNtdllType(BugCheckParameter1);
      if ( ProcessNtdllType )
      {
        SharedInformation = PspWow64GetSharedInformation(ProcessNtdllType);
        **(_QWORD **)(SharedInformation + 64) += v5;
      }
    }
  }
  result = KeThawProcess(BugCheckParameter1, a2);
  v12 = result;
  if ( (_DWORD)result == 1 && (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, BugCheckParameter1, 3LL);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState(BugCheckParameter1);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v12 )
        return EtwTraceFreezeThawProcess(BugCheckParameter1, 0LL);
    }
  }
  return result;
}
