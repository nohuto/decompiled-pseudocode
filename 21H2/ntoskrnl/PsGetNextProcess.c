/*
 * XREFs of PsGetNextProcess @ 0x1406A5A80
 * Callers:
 *     MiEmptyAccessLogs @ 0x1403A3580 (MiEmptyAccessLogs.c)
 *     PsGetNextProcessEx @ 0x140613FA0 (PsGetNextProcessEx.c)
 *     PsEnumProcesses @ 0x1406A5350 (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x1406A5A2C (ExGetNextProcess.c)
 *     NtGetNextProcess @ 0x14078AA70 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1407C5FB0 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140884990 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895B68 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A14AC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x1408CA3D8 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CC11C (MiLogHotPatchRundown.c)
 *     MiScrubProcesses @ 0x1408DC170 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x140907C44 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14090AB54 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090AF58 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14090B290 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x140936BDC (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093803C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x140947628 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x1409B6030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A6E9A4 (PopEtInit.c)
 * Callees:
 *     PspUnlockProcessListShared @ 0x140287568 (PspUnlockProcessListShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
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
