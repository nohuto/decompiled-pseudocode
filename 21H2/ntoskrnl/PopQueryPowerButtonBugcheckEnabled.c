/*
 * XREFs of PopQueryPowerButtonBugcheckEnabled @ 0x140998B6C
 * Callers:
 *     PopPowerButtonWorkCallback @ 0x1405D89F0 (PopPowerButtonWorkCallback.c)
 *     PopPowerInformationInternal @ 0x140751B78 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 */

__int64 PopQueryPowerButtonBugcheckEnabled()
{
  struct _KTHREAD *CurrentThread; // rax
  int v1; // esi
  unsigned int v2; // ebx
  unsigned int v3; // edi
  int v5; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopPowerButtonBugcheckLock, 0LL);
  v1 = PopPowerButtonBugcheckConfig;
  v2 = PopPowerButtonLiveDumpConfig;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegion();
  if ( v1 == 1 )
    goto LABEL_7;
  if ( v1 != 2 )
  {
    if ( (v2 & 1) == 0 )
      wil_details_FeatureReporting_ReportUsageToService(
        (__int64)&Feature_PowerButtonBugcheck__private_reporting,
        0x8DF90Eu,
        0,
        0,
        (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied_logged_traits,
        0,
        v5);
LABEL_7:
    v3 = 0;
    goto LABEL_8;
  }
  v3 = 1;
LABEL_8:
  LOBYTE(word_140C1F7F8) = v3;
  if ( !v3 )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerButtonLiveDump__private_reporting,
      0x1BFD6D2u,
      0,
      0,
      (__int64)&Feature_LiveDumpOnAppxAllUserStoreAccessDenied_logged_traits,
      0,
      v5);
  if ( (v2 & 1) != 0 && (v2 & 0xF0) - 32 > 0x40 )
  {
    v2 = v2 & 0xFFFFFF0F | 0x50;
    DbgPrintEx(
      0x92u,
      2u,
      "PopQueryPowerButtonBugcheckEnabled: PowerButtonLiveDump Timeout value is invalid or not specified. Set it to default.\n");
  }
  HIDWORD(qword_140C1F804) = v2;
  DbgPrintEx(
    0x92u,
    2u,
    "PopQueryPowerButtonBugcheckEnabled completed with BugcheckEnabled: %d, BugcheckConfig: %08x, LiveDumpConfig: %08x\n",
    v3,
    v1,
    v2);
  return v3;
}
