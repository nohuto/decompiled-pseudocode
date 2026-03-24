/*
 * XREFs of PsGetNextProcess @ 0x1406CE7A0
 * Callers:
 *     MiEmptyAccessLogs @ 0x1403A3430 (MiEmptyAccessLogs.c)
 *     PsGetNextProcessEx @ 0x1406B4B20 (PsGetNextProcessEx.c)
 *     PsEnumProcesses @ 0x1406CE06C (PsEnumProcesses.c)
 *     ExGetNextProcess @ 0x1406CE748 (ExGetNextProcess.c)
 *     NtGetNextProcess @ 0x14078A8B0 (NtGetNextProcess.c)
 *     PfpRpControlRequestReset @ 0x1407C5A90 (PfpRpControlRequestReset.c)
 *     DbgkpCloseObject @ 0x140884830 (DbgkpCloseObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895A08 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A134C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     MiHotPatchAllProcesses @ 0x1408CA278 (MiHotPatchAllProcesses.c)
 *     MiLogHotPatchRundown @ 0x1408CBFBC (MiLogHotPatchRundown.c)
 *     MiScrubProcesses @ 0x1408DC010 (MiScrubProcesses.c)
 *     PsUpdateActiveProcessAffinity @ 0x140907AE4 (PsUpdateActiveProcessAffinity.c)
 *     PsShutdownSystem @ 0x14090A9F4 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x14090ADF8 (PsWaitForAllProcesses.c)
 *     PspProcessRundownWorker @ 0x14090B130 (PspProcessRundownWorker.c)
 *     EtwpLogMemInfoWs @ 0x140936A0C (EtwpLogMemInfoWs.c)
 *     EtwQueryPerformanceTraceInformation @ 0x140937E6C (EtwQueryPerformanceTraceInformation.c)
 *     EtwpCoverageSamplerStop @ 0x140947458 (EtwpCoverageSamplerStop.c)
 *     ExpDebuggerWorker @ 0x1409B5030 (ExpDebuggerWorker.c)
 *     PopEtInit @ 0x140A6D9A4 (PopEtInit.c)
 * Callees:
 *     PspUnlockProcessListShared @ 0x1402D6218 (PspUnlockProcessListShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x140348AA0 (ObReferenceObjectSafeWithTag.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
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
