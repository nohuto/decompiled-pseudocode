/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x14056F278
 * Callers:
 *     PpmUpdatePerformanceFeedback @ 0x14022E540 (PpmUpdatePerformanceFeedback.c)
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KiExecuteAllDpcs @ 0x140252F60 (KiExecuteAllDpcs.c)
 *     KeReleaseSpinLock @ 0x14025E560 (KeReleaseSpinLock.c)
 *     IopfCompleteRequest @ 0x14027B2C0 (IopfCompleteRequest.c)
 *     ExGenRandom @ 0x14027E2F0 (ExGenRandom.c)
 *     NtSetInformationFile @ 0x14027E490 (NtSetInformationFile.c)
 *     IoPageReadEx @ 0x14027F4F0 (IoPageReadEx.c)
 *     KiCallInterruptServiceRoutine @ 0x1402B7620 (KiCallInterruptServiceRoutine.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x1402C5C00 (KeReleaseSpinLockFromDpcLevel.c)
 *     KdPollBreakIn @ 0x1402C7DA0 (KdPollBreakIn.c)
 *     PsGetThreadProperty @ 0x1402C83E0 (PsGetThreadProperty.c)
 *     KeReleaseInterruptSpinLock @ 0x1402D92B0 (KeReleaseInterruptSpinLock.c)
 *     KasanDriverLoadImage @ 0x1402F4670 (KasanDriverLoadImage.c)
 *     IopDequeueIrpFromThread @ 0x14030F160 (IopDequeueIrpFromThread.c)
 *     IopCancelIrpsInFileObjectList @ 0x14030F360 (IopCancelIrpsInFileObjectList.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IopQueueIrpToFileObject @ 0x140315880 (IopQueueIrpToFileObject.c)
 *     KasanDriverUnloadImage @ 0x14036C820 (KasanDriverUnloadImage.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x140ADC3E0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405FE984 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
