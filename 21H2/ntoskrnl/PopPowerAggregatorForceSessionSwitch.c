/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1408EE214
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403AE4C0 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1408EC290 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x1408EF9F0 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14027C284 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140281AD4 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775E14 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C21798 == 1 )
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)3, 0, a1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
