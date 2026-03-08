/*
 * XREFs of KeIsThreadRunning @ 0x14056C7FC
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
 *     KeTryToInsertQueueApc @ 0x140570BD0 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x140571290 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1406010A0 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
