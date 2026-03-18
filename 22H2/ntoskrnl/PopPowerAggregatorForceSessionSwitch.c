/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x1409938F4
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403838F0 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x140992770 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x140997B20 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140410BB4 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407A9984 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v3 = 0;
  if ( (_DWORD)xmmword_140C3AAB0 == 1 )
  {
    v2 = 3LL;
    if ( a1 != 4 && BYTE8(xmmword_140C3AAC0) )
      v2 = 2LL;
    goto LABEL_12;
  }
  if ( (_DWORD)xmmword_140C3AAB0 == 4 && BYTE8(xmmword_140C3AAC0) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v2 = 10LL;
LABEL_12:
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, (__int64)&v3, 0, a1);
  }
  PopReleaseRwLock(&PopPowerAggregatorLock);
}
