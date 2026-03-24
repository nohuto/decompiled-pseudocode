/*
 * XREFs of PsGetNextProcessThread @ 0x14070A2F0
 * Callers:
 *     NtGetNextThread @ 0x1405DAE20 (NtGetNextThread.c)
 *     PspBoostJobIoPriorityCallback @ 0x1406ABCA0 (PspBoostJobIoPriorityCallback.c)
 *     PsResumeProcess @ 0x1406BF460 (PsResumeProcess.c)
 *     PspTerminateAllThreads @ 0x1406D9E50 (PspTerminateAllThreads.c)
 *     NtSetInformationThread @ 0x1406FCE80 (NtSetInformationThread.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x14070A1F4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     ExSwapinWorkerThreads @ 0x140777354 (ExSwapinWorkerThreads.c)
 *     PsEnumProcessThreads @ 0x140797BC8 (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884E94 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140885810 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x14090B2EC (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x14090C820 (PsSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x140348AA0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x14034AB50 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x14034B140 (ObfDereferenceObjectWithTag.c)
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
    v9 = (_QWORD *)a2[157];
  else
    v9 = *v3;
  if ( v9 != v3 )
  {
    while ( 1 )
    {
      v6 = v9 - 157;
      if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 157)) )
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
