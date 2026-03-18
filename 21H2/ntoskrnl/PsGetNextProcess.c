/*
 * XREFs of PsGetNextProcess @ 0x1407B6B90
 * Callers:
 *     KiUpdateProcessConcurrencyCounts @ 0x140302930 (KiUpdateProcessConcurrencyCounts.c)
 *     MiEmptyAccessLogs @ 0x140375ED0 (MiEmptyAccessLogs.c)
 *     KeTraceHgsPlusRundown @ 0x140573740 (KeTraceHgsPlusRundown.c)
 *     PsEnumProcesses @ 0x1406BF0AC (PsEnumProcesses.c)
 *     NtGetNextProcess @ 0x1406D2920 (NtGetNextProcess.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14081C05C (EtwQueryPerformanceTraceInformation.c)
 *     DbgkpCloseObject @ 0x1409276D0 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140939830 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140946508 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x140973630 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140975748 (MiLogHotPatchRundown.c)
 *     MiScrubProcesses @ 0x140983B80 (MiScrubProcesses.c)
 *     PfpRpControlRequestReset @ 0x140988C68 (PfpRpControlRequestReset.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AD870 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1409B1074 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B1468 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1409B17B0 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x1409E2E90 (EtwpLogMemInfoWs.c)
 *     EtwpCoverageSamplerStop @ 0x1409F39DC (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x140A70F90 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140B27E7C (PopEtInit.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 *__fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  __int64 *v4; // r14
  int v5; // ebp
  __int64 *v6; // r15
  bool v7; // zf

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0LL;
  v5 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  if ( Object )
    v6 = (__int64 *)Object[137];
  else
    v6 = (__int64 *)PsActiveProcessHead;
  if ( v6 != &PsActiveProcessHead )
  {
    while ( 1 )
    {
      v4 = v6 - 137;
      if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 137)) )
        break;
      v6 = (__int64 *)*v6;
      if ( v6 == &PsActiveProcessHead )
        goto LABEL_6;
    }
    v5 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v5 )
    return v4;
  return (__int64 *)v2;
}
