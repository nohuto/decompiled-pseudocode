/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1405718E8
 * Callers:
 *     KasanDriverUnloadImage @ 0x14020B640 (KasanDriverUnloadImage.c)
 *     IopQueueIrpToFileObject @ 0x14022E440 (IopQueueIrpToFileObject.c)
 *     IopQueueThreadIrp @ 0x14022ED80 (IopQueueThreadIrp.c)
 *     KeReleaseSpinLock @ 0x14023E430 (KeReleaseSpinLock.c)
 *     KiExecuteAllDpcs @ 0x1402444A0 (KiExecuteAllDpcs.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KiInsertQueueDpc @ 0x140254670 (KiInsertQueueDpc.c)
 *     IoPageReadEx @ 0x1402A66F0 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1402A6AD0 (NtSetInformationFile.c)
 *     IopCompleteRequest @ 0x1402AB360 (IopCompleteRequest.c)
 *     IopDequeueIrpFromThread @ 0x1402AF700 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x1402AF910 (IopCancelIrpsInFileObjectList.c)
 *     PpmUpdatePerformanceFeedback @ 0x1402C6D10 (PpmUpdatePerformanceFeedback.c)
 *     IopfCompleteRequest @ 0x1402C9980 (IopfCompleteRequest.c)
 *     ExGenRandom @ 0x1403173F0 (ExGenRandom.c)
 *     KiCallInterruptServiceRoutine @ 0x140324770 (KiCallInterruptServiceRoutine.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14032F9A0 (KeReleaseSpinLockFromDpcLevel.c)
 *     KdPollBreakIn @ 0x140331D10 (KdPollBreakIn.c)
 *     PsGetThreadProperty @ 0x140332350 (PsGetThreadProperty.c)
 *     KeReleaseInterruptSpinLock @ 0x140340FB0 (KeReleaseInterruptSpinLock.c)
 *     KasanDriverLoadImage @ 0x14035FA60 (KasanDriverLoadImage.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140AE03E0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140600DE8 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
