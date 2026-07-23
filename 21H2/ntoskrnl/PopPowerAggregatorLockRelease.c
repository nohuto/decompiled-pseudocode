/*
 * XREFs of PopPowerAggregatorLockRelease @ 0x1408EE670
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x1408EE1AC (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorScreenOffEnterStateHandler @ 0x1408EE950 (PopPowerAggregatorScreenOffEnterStateHandler.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 */

void PopPowerAggregatorLockRelease()
{
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
