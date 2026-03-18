/*
 * XREFs of PopPowerAggregatorForceSessionSwitch @ 0x140995B08
 * Callers:
 *     PopPowerSourceChangeCallback @ 0x1403C10B0 (PopPowerSourceChangeCallback.c)
 *     PopPreCriticalBatteryNotify @ 0x140993C50 (PopPreCriticalBatteryNotify.c)
 *     PdcPoReportLidState @ 0x140996C60 (PdcPoReportLidState.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402935D0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402D66A8 (PopAcquireRwLockExclusive.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407F22AC (PopPowerAggregatorHandleIntentUnsafe.c)
 */

void __fastcall PopPowerAggregatorForceSessionSwitch(unsigned int a1)
{
  __int64 v2; // rcx
  int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+58h] [rbp+10h] BYREF

  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v3);
  PopAcquireRwLockExclusive((ULONG_PTR)&PopPowerAggregatorLock);
  v4 = 0;
  if ( (_DWORD)xmmword_140C20BD0 == 1 )
  {
    v2 = 3LL;
    if ( a1 == 43 && BYTE8(xmmword_140C20BE0) )
      v2 = 2LL;
    goto LABEL_11;
  }
  if ( (_DWORD)xmmword_140C20BD0 == 4 && BYTE8(xmmword_140C20BE0) && a1 == 43 )
  {
    v2 = 10LL;
LABEL_11:
    PopPowerAggregatorHandleIntentUnsafe((_QWORD *)v2, (__int64)&v4, 0, a1);
  }
  PopReleaseRwLock((ULONG_PTR)&PopPowerAggregatorLock);
}
