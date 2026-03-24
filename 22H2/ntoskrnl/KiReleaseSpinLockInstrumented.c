/*
 * XREFs of KiReleaseSpinLockInstrumented @ 0x1405168D8
 * Callers:
 *     IoRemoveIoCompletion @ 0x140204390 (IoRemoveIoCompletion.c)
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     PpmUpdatePerformanceFeedback @ 0x140224030 (PpmUpdatePerformanceFeedback.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     IopfCompleteRequest @ 0x140242E30 (IopfCompleteRequest.c)
 *     KiExecuteAllDpcs @ 0x140246C20 (KiExecuteAllDpcs.c)
 *     NtCancelTimer @ 0x140248470 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x140248D90 (ExpSetTimerObject.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IopDequeueIrpFromThread @ 0x1402D3F10 (IopDequeueIrpFromThread.c)
 *     KeReleaseSpinLock @ 0x1402E0C70 (KeReleaseSpinLock.c)
 *     NtAssociateWaitCompletionPacket @ 0x1402ED670 (NtAssociateWaitCompletionPacket.c)
 *     PsGetThreadProperty @ 0x1402EFE20 (PsGetThreadProperty.c)
 *     IopQueueIrpToFileObject @ 0x1402F1100 (IopQueueIrpToFileObject.c)
 *     KiCallInterruptServiceRoutine @ 0x1403439C0 (KiCallInterruptServiceRoutine.c)
 *     ViFilterDeviceUsageNotificationCompletion @ 0x1409E50D0 (ViFilterDeviceUsageNotificationCompletion.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x1405AB388 (PerfLogSpinLockRelease.c)
 */

__int64 __fastcall KiReleaseSpinLockInstrumented(volatile signed __int64 *a1, __int64 a2)
{
  _InterlockedAnd64(a1, 0LL);
  return PerfLogSpinLockRelease(a1, a2, __rdtsc());
}
