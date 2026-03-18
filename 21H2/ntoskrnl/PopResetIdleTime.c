/*
 * XREFs of PopResetIdleTime @ 0x140368F70
 * Callers:
 *     PopSetSystemState @ 0x140368E90 (PopSetSystemState.c)
 *     PopUserPresentSet @ 0x140368ED4 (PopUserPresentSet.c)
 *     PopSystemRequiredSet @ 0x1403B6DF8 (PopSystemRequiredSet.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PopHandleSystemIdleReset @ 0x140368FC4 (PopHandleSystemIdleReset.c)
 */

__int64 __fastcall PopResetIdleTime(unsigned int a1)
{
  int v3; // [rsp+30h] [rbp-18h]

  KeGetCurrentIrql();
  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v3);
  return PopHandleSystemIdleReset(a1);
}
