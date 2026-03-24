/*
 * XREFs of PopPowerAggregatorLockRelease @ 0x1408EE560
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE09C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE840 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 */

void PopPowerAggregatorLockRelease()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
