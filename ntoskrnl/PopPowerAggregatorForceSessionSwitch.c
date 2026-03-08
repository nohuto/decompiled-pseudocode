/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x140990844
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x140380CA0 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x14098F6C0 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x140994A70 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v3 = 0;
  if ( (_DWORD)xmmword_140C3A710 == 1 )
  {
    v2 = 3LL;
    if ( a1 != 4 && BYTE8(xmmword_140C3A720) )
      v2 = 2LL;
    goto LABEL_12;
  }
  if ( (_DWORD)xmmword_140C3A710 == 4 && BYTE8(xmmword_140C3A720) && ((a1 - 43) & 0xFFFFFFFC) == 0 && a1 != 44 )
  {
    v2 = 10LL;
LABEL_12:
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, (__int64)&v3, 0, a1);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
