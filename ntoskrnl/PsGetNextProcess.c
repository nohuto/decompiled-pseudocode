/*
 * XREFs of PsGetNextProcess @ 0x1406AA530
 * Callers:
 *     MiEmptyAccessLogs @ 0x1402005B0 (MiEmptyAccessLogs.c)
 *     KiUpdateProcessConcurrencyCounts @ 0x14022BAA0 (KiUpdateProcessConcurrencyCounts.c)
 *     KeTraceHgsPlusRundown @ 0x140574738 (KeTraceHgsPlusRundown.c)
 *     ExGetNextProcess @ 0x1406A8CF4 (ExGetNextProcess.c)
 *     PsEnumProcesses @ 0x1407809CC (PsEnumProcesses.c)
 *     NtGetNextProcess @ 0x140784C70 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x14084C784 (PfpRpControlRequestReset.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14085C154 (EtwQueryPerformanceTraceInformation.c)
 *     EtwpLogMemInfoWs @ 0x1408A21C4 (EtwpLogMemInfoWs.c)
 *     DbgkpCloseObject @ 0x1409341B0 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409481C8 (IopQueryProcessIdsUsingFile.c)
 *     IopLiveDumpExcludeProtectedProcesses @ 0x14094B038 (IopLiveDumpExcludeProtectedProcesses.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140955108 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsUpdateActiveProcessAffinity @ 0x1409AB80C (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x1409B05A4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x1409B099C (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x1409B0CD0 (PspProcessRundownWorker.c)
 *     EtwpCoverageSamplerStop @ 0x1409F08E4 (EtwpCoverageSamplerStop.c)
 *     MiHotPatchAllProcesses @ 0x140A34748 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     MiReferenceNonPagedMemoryProcessList @ 0x140A434AC (MiReferenceNonPagedMemoryProcessList.c)
 *     ExpDebuggerWorker @ 0x140AAED30 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140B678A0 (PopEtInit.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

__int64 *__fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rbx
  __int64 *v4; // r15
  int v5; // ebp
  __int64 *v6; // r14
  bool v7; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
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
  if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  if ( v5 )
    return v4;
  return (__int64 *)v3;
}
