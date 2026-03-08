/*
 * XREFs of PsGetNextProcessThread @ 0x1406A8E30
 * Callers:
 *     PsMultiResumeProcess @ 0x1402FF188 (PsMultiResumeProcess.c)
 *     KeTraceHgsPlusRundown @ 0x140574738 (KeTraceHgsPlusRundown.c)
 *     NtSetInformationThread @ 0x1406D8E90 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1406EDFF0 (NtSetInformationProcess.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407700F8 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     ExpGetNextProcessThread @ 0x140773EF4 (ExpGetNextProcessThread.c)
 *     NtGetNextThread @ 0x140790200 (NtGetNextThread.c)
 *     PspTerminateAllThreads @ 0x1407DB73C (PspTerminateAllThreads.c)
 *     PsEnumProcessThreads @ 0x14080E25C (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140934820 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x1409351E4 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x1409B0E8C (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x1409B3100 (PsSuspendProcess.c)
 *     ExSwapinWorkerThreads @ 0x1409FD778 (ExSwapinWorkerThreads.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

_QWORD *__fastcall PsGetNextProcessThread(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  signed __int64 *v3; // rdi
  _QWORD **v5; // r13
  __int64 v6; // rbx
  _QWORD *v7; // rbp
  int v8; // esi
  _QWORD *v9; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = (signed __int64 *)(a1 + 1080);
  v5 = (_QWORD **)(a1 + 1504);
  v6 = 0LL;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  v8 = 0;
  ExAcquirePushLockSharedEx(a1 + 1080, 0LL);
  if ( a2 )
    v9 = (_QWORD *)a2[167];
  else
    v9 = *v5;
  if ( v9 != v5 )
  {
    while ( 1 )
    {
      v7 = v9 - 167;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 167)) )
        break;
      v9 = (_QWORD *)*v9;
      if ( v9 == v5 )
        goto LABEL_6;
    }
    v8 = 1;
  }
LABEL_6:
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v8 )
    return v7;
  return (_QWORD *)v6;
}
