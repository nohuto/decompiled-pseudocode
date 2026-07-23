/*
 * XREFs of PsGetNextProcessThread @ 0x1407216D0
 * Callers:
 *     PspBoostJobIoPriorityCallback @ 0x14060A390 (PspBoostJobIoPriorityCallback.c)
 *     PsResumeProcess @ 0x14061E370 (PsResumeProcess.c)
 *     PspTerminateAllThreads @ 0x1406B1130 (PspTerminateAllThreads.c)
 *     NtGetNextThread @ 0x1406CA5A0 (NtGetNextThread.c)
 *     NtSetInformationThread @ 0x140714260 (NtSetInformationThread.c)
 *     IopCancelIrpsInThreadListForCurrentProcess @ 0x1407215D4 (IopCancelIrpsInThreadListForCurrentProcess.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     ExSwapinWorkerThreads @ 0x140777514 (ExSwapinWorkerThreads.c)
 *     PsEnumProcessThreads @ 0x140797DC8 (PsEnumProcessThreads.c)
 *     DbgkpPostFakeThreadMessages @ 0x140884FF4 (DbgkpPostFakeThreadMessages.c)
 *     DbgkpSetProcessDebugObject @ 0x140885970 (DbgkpSetProcessDebugObject.c)
 *     PspWaitForUsermodeExit @ 0x14090B44C (PspWaitForUsermodeExit.c)
 *     PsSuspendProcess @ 0x14090C980 (PsSuspendProcess.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ObReferenceObjectSafeWithTag @ 0x1403537F0 (ObReferenceObjectSafeWithTag.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1403558A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v10, v11, v12);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  if ( v7 )
    return v6;
  return (_QWORD *)v4;
}
