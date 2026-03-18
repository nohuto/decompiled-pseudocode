/*
 * XREFs of CiSchedulerCommitPriority @ 0x1C0002720
 * Callers:
 *     CiThreadSetRelativePriority @ 0x1C000AA20 (CiThreadSetRelativePriority.c)
 * Callees:
 *     CiSchedulerSetPriority @ 0x1C00029B0 (CiSchedulerSetPriority.c)
 */

void __fastcall CiSchedulerCommitPriority(__int64 a1)
{
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = KeGetCurrentThread();
  CiSchedulerSetPriority(a1);
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.DeviceObject, 0);
}
