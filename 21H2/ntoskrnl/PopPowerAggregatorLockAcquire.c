/*
 * XREFs of PopPowerAggregatorLockAcquire @ 0x1408EE4F4
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE04C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE7F0 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 */

struct _KTHREAD *PopPowerAggregatorLockAcquire()
{
  return PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
}
