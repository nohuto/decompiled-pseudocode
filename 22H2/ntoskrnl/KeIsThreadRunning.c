/*
 * XREFs of KeIsThreadRunning @ 0x140512F94
 * Callers:
 *     KeRegisterObjectNotification @ 0x140202ED8 (KeRegisterObjectNotification.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x140203110 (NtWaitForWorkViaWorkerFactory.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402424E0 (NtReleaseWorkerFactoryWorker.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     IoSetIoCompletionEx2 @ 0x140245BA0 (IoSetIoCompletionEx2.c)
 *     KiTimerWaitTest @ 0x140247760 (KiTimerWaitTest.c)
 *     KiExpireTimer2 @ 0x14024AF30 (KiExpireTimer2.c)
 *     KeSetProcess @ 0x14025157C (KeSetProcess.c)
 *     KeReleaseSemaphoreEx @ 0x140262770 (KeReleaseSemaphoreEx.c)
 *     KeSetEventBoostPriorityEx @ 0x140271E08 (KeSetEventBoostPriorityEx.c)
 *     CcUnpinFileDataEx @ 0x140274CB0 (CcUnpinFileDataEx.c)
 *     KeReleaseMutant @ 0x1402C2B40 (KeReleaseMutant.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x1402CBCD0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x1402CD8D0 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     IoSetIoCompletionEx @ 0x1402E6D30 (IoSetIoCompletionEx.c)
 *     KeInsertQueueEx @ 0x1402E6F10 (KeInsertQueueEx.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402ED670 (NtAssociateWaitCompletionPacket.c)
 *     KeReleaseSemaphore @ 0x1402F19A0 (KeReleaseSemaphore.c)
 *     KeRundownQueueCommon @ 0x1403026FC (KeRundownQueueCommon.c)
 *     KeDeleteMutant @ 0x140302978 (KeDeleteMutant.c)
 *     KeWakeWaitChain @ 0x1403121AC (KeWakeWaitChain.c)
 *     KiInsertQueueInternal @ 0x140316088 (KiInsertQueueInternal.c)
 *     KeSignalGate @ 0x14031BEE0 (KeSignalGate.c)
 *     KeInsertQueue @ 0x140326130 (KeInsertQueue.c)
 *     KePulseEvent @ 0x14033AAD0 (KePulseEvent.c)
 *     KiRundownMutants @ 0x140340660 (KiRundownMutants.c)
 *     KeTerminateThread @ 0x140341500 (KeTerminateThread.c)
 *     KiResumeThread @ 0x1403428E0 (KiResumeThread.c)
 *     KeTryToInsertQueueApc @ 0x14051A750 (KeTryToInsertQueueApc.c)
 *     KeInsertHeadQueue @ 0x14051AEC0 (KeInsertHeadQueue.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405AED80 (EtwpCovSampCaptureQueueApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall KeIsThreadRunning(__int64 a1)
{
  return *(_BYTE *)(a1 + 388) == 2 && *(_DWORD *)(a1 + 536) == KeGetPcr()->Prcb.Number;
}
