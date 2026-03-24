/*
 * XREFs of PsGetNextProcess @ 0x14062BFA0
 * Callers:
 *     MiEmptyAccessLogs @ 0x1403A2D30 (MiEmptyAccessLogs.c)
 *     PsEnumProcesses @ 0x14062B870 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x14062BF4C (ExGetNextProcess.c)
 *     PsGetNextProcessEx @ 0x140697AE0 (PsGetNextProcessEx.c)
 *     NtGetNextProcess @ 0x14078A7B0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1407C6250 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140884880 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895A58 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A139C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x1408CA2C8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CC00C (MiLogHotPatchRundown.c)
 *     MiScrubProcesses @ 0x1408DC060 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x140907B34 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14090AA44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090AE48 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14090B180 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x140936A5C (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937EBC (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x1409474A8 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A6D9A4 (PopEtInit.c)
 * Callees:
 *     PspUnlockProcessListShared @ 0x140264068 (PspUnlockProcessListShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1402C9130 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall PsGetNextProcess(_QWORD *Object)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 *v2; // r14
  int v3; // esi
  __int64 *v5; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v3 = 0;
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
  v5 = (__int64 *)PsActiveProcessHead;
  if ( Object )
    v5 = (__int64 *)Object[137];
  while ( v5 != &PsActiveProcessHead )
  {
    v2 = v5 - 137;
    if ( ObReferenceObjectSafeWithTag((__int64)(v5 - 137)) )
    {
      v3 = 1;
      break;
    }
    v5 = (__int64 *)*v5;
  }
  PspUnlockProcessListShared((__int64)CurrentThread);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x6E457350u);
  return (unsigned __int64)v2 & -(__int64)(v3 != 0);
}
