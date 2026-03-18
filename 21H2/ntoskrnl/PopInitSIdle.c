/*
 * XREFs of PopInitSIdle @ 0x140819CB8
 * Callers:
 *     PopBatteryApplyCompositeState @ 0x1407EE90C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x1407F32E0 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x1408194D8 (PopApplyPolicy.c)
 *     PopSleepPowerSettingCallback @ 0x1408578E0 (PopSleepPowerSettingCallback.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PopUpdateSystemIdleContext @ 0x140819D40 (PopUpdateSystemIdleContext.c)
 */

__int64 __fastcall PopInitSIdle(unsigned int a1)
{
  int v3; // [rsp+30h] [rbp-88h]
  _BYTE v4[96]; // [rsp+40h] [rbp-78h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( !PopPlatformAoAc )
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v3);
  return PopUpdateSystemIdleContext(a1);
}
