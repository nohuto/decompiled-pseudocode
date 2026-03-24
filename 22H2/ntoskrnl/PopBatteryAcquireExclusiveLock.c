/*
 * XREFs of PopBatteryAcquireExclusiveLock @ 0x1408ECE24
 * Callers:
 *     PopBatteryWorker @ 0x14077F710 (PopBatteryWorker.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopBatteryAcquireExclusiveLock()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopCB);
}
