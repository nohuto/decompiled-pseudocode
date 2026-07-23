/*
 * XREFs of PopPowerAggregatorLockAcquire @ 0x1408EE654
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE1AC (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE950 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopPowerAggregatorLockAcquire()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
