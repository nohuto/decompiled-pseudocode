/*
 * XREFs of PsThawProcess @ 0x14067D0F8
 * Callers:
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     DbgkpSendApiMessage @ 0x140887154 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140887240 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140887370 (DbgkpSendErrorMessage.c)
 *     DbgkpResumeProcess @ 0x140887B78 (DbgkpResumeProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KiQueryUnbiasedInterruptTime @ 0x1402546F4 (KiQueryUnbiasedInterruptTime.c)
 *     PsGetProcessSessionIdEx @ 0x1402830D0 (PsGetProcessSessionIdEx.c)
 *     KeThawProcess @ 0x140283E7C (KeThawProcess.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     PspWow64GetSharedInformation @ 0x140611C34 (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x140611C4C (PsWow64GetProcessNtdllType.c)
 *     PsInvokeWin32Callout @ 0x14061B140 (PsInvokeWin32Callout.c)
 *     PsSetProcessTelemetryAppState @ 0x1406CDED4 (PsSetProcessTelemetryAppState.c)
 *     VslUpdateFreezeTimeBias @ 0x140890590 (VslUpdateFreezeTimeBias.c)
 *     EtwTraceFreezeThawProcess @ 0x140935C6C (EtwTraceFreezeThawProcess.c)
 *     EtwTiLogSuspendResumeProcess @ 0x14093BAAC (EtwTiLogSuspendResumeProcess.c)
 */

__int64 __fastcall PsThawProcess(ULONG_PTR BugCheckParameter1, char a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // r15
  int ProcessNtdllType; // eax
  _QWORD **SharedInformation; // rax
  __int64 result; // rax
  int v9; // ebx
  int ProcessSessionId; // [rsp+70h] [rbp+18h] BYREF
  struct _KTHREAD *v11; // [rsp+78h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v11 = CurrentThread;
  if ( a2 )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1288) && (*(_DWORD *)(BugCheckParameter1 + 1124) & 8) == 0 )
    {
      ProcessSessionId = PsGetProcessSessionIdEx(BugCheckParameter1);
      PsInvokeWin32Callout(23, BugCheckParameter1, 1, (__int64)&ProcessSessionId);
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
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
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
        SharedInformation = (_QWORD **)PspWow64GetSharedInformation(ProcessNtdllType);
        *SharedInformation[8] += v5;
      }
    }
  }
  result = KeThawProcess(BugCheckParameter1, a2);
  v9 = result;
  if ( (_DWORD)result == 1 && (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x80000) != 0 )
    result = EtwTiLogSuspendResumeProcess(0LL, CurrentThread, BugCheckParameter1, 3LL);
  if ( a2 )
  {
    PsSetProcessTelemetryAppState(BugCheckParameter1);
    result = *((_QWORD *)&PerfGlobalGroupMask + 1);
    if ( (BYTE8(PerfGlobalGroupMask) & 2) != 0 )
    {
      if ( v9 )
        return EtwTraceFreezeThawProcess(BugCheckParameter1, 0LL);
    }
  }
  return result;
}
