/*
 * XREFs of KiWakeOtherQueueWaiters @ 0x140293BF4
 * Callers:
 *     KeSetEventBoostPriorityEx @ 0x1402396C0 (KeSetEventBoostPriorityEx.c)
 *     KeRegisterObjectNotification @ 0x14024F260 (KeRegisterObjectNotification.c)
 *     KiExpireTimer2 @ 0x14024FED0 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x140251B00 (KiTimerWaitTest.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14025D990 (ExpReleaseResourceSharedForThreadLite.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     KeReleaseSemaphore @ 0x140292210 (KeReleaseSemaphore.c)
 *     KeInsertQueueEx @ 0x140292940 (KeInsertQueueEx.c)
 *     KeRundownQueueCommon @ 0x140292D44 (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140292FB8 (KeDeleteMutant.c)
 *     KiInsertQueueInternal @ 0x140293C9C (KiInsertQueueInternal.c)
 *     KeSetProcess @ 0x140293FE4 (KeSetProcess.c)
 *     KeSignalGate @ 0x1402F0524 (KeSignalGate.c)
 *     KeInsertQueue @ 0x1402F3300 (KeInsertQueue.c)
 *     CcUnpinFileDataEx @ 0x140337E50 (CcUnpinFileDataEx.c)
 *     KeWakeWaitChain @ 0x14033AF30 (KeWakeWaitChain.c)
 *     ExpCommitWakeResourceShared @ 0x14033B220 (ExpCommitWakeResourceShared.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14033B5E0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     AlpcpSignal @ 0x14033E410 (AlpcpSignal.c)
 *     KeReleaseSemaphoreEx @ 0x14033E940 (KeReleaseSemaphoreEx.c)
 *     NtReleaseWorkerFactoryWorker @ 0x140340900 (NtReleaseWorkerFactoryWorker.c)
 *     IoSetIoCompletionEx2 @ 0x140341170 (IoSetIoCompletionEx2.c)
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1403538F8 (KiResumeThread.c)
 *     KiRundownMutants @ 0x140353C9C (KiRundownMutants.c)
 *     KePulseEvent @ 0x14035F580 (KePulseEvent.c)
 *     KeInsertHeadQueue @ 0x140571290 (KeInsertHeadQueue.c)
 * Callees:
 *     KiTryUnwaitThread @ 0x140258880 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x140293C9C (KiInsertQueueInternal.c)
 */

__int64 __fastcall KiWakeOtherQueueWaiters(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  char v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx

  v2 = *(_QWORD **)(a2 + 16);
  do
  {
    result = (__int64)v2;
    v2 = (_QWORD *)v2[1];
    v6 = *(_BYTE *)(result + 16);
    if ( v6 == 2 )
    {
      v8 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
        goto LABEL_13;
      *v2 = v8;
      *(_QWORD *)(v8 + 8) = v2;
      *(_BYTE *)(result + 17) = 5;
      KiInsertQueueInternal(*(_QWORD *)(result + 24), result);
    }
    else
    {
      if ( v6 != 1 )
        return result;
      v7 = *(_QWORD *)result;
      if ( *(_QWORD *)(*(_QWORD *)result + 8LL) != result || *v2 != result )
LABEL_13:
        __fastfail(3u);
      *v2 = v7;
      *(_QWORD *)(v7 + 8) = v2;
      KiTryUnwaitThread(a1, result, *(unsigned __int16 *)(result + 18), 0LL);
    }
    result = a2 + 8;
  }
  while ( v2 != (_QWORD *)(a2 + 8) );
  return result;
}
