/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1408EE374
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403AE610 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x1408EC3F0 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x1408EFB50 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14026A224 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14026FD14 (PopAcquireRwLockExclusive.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140775FD4 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  if ( (_DWORD)xmmword_140C217F8 == 1 )
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)3, 0, a1);
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
