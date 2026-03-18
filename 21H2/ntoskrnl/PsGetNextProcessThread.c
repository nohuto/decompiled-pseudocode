/*
 * XREFs of PsGetNextProcessThread @ 0x1407E7750
 * Callers:
 *     PsMultiResumeProcess @ 0x140259668 (PsMultiResumeProcess.c)
 *     KeTraceHgsPlusRundown @ 0x140573740 (KeTraceHgsPlusRundown.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406CA810 (PspBoostJobIoPriorityCallback.c)
 *     NtGetNextThread @ 0x1406D7150 (NtGetNextThread.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     PspTerminateAllThreads @ 0x1407E6274 (PspTerminateAllThreads.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407E65A0 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     ExSwapinWorkerThreads @ 0x1407FFFE4 (ExSwapinWorkerThreads.c)
 *     PsEnumProcessThreads @ 0x140814B24 (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140927D44 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1409286EC (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1409B196C (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1409B2EF0 (PsSuspendProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD **v3; // r13
  __int64 v4; // rbx
  _QWORD *v6; // r15
  int v7; // r14d
  signed __int64 *v8; // rbp
  _QWORD *v9; // rsi

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD **)(a1 + 1504);
  v4 = 0LL;
  v6 = 0LL;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = (signed __int64 *)(a1 + 1080);
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[167];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 167;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 167)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v3 )
        goto LABEL_6;
    }
    v7 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v7 )
    return v6;
  return (_QWORD *)v4;
}
