/*
 * XREFs of PopInitSIdle @ 0x140825874
 * Callers:
 *     PopUserPresentSetWorker @ 0x14058E240 (PopUserPresentSetWorker.c)
 *     PopSleepPowerSettingCallback @ 0x1408248F0 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA91B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x140410BB4 (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     memset @ 0x140435400 (memset.c)
 *     PopUpdateSystemIdleContext @ 0x1408258D8 (PopUpdateSystemIdleContext.c)
 */

__int64 __fastcall PopInitSIdle(unsigned int a1)
{
  _BYTE v3[96]; // [rsp+20h] [rbp-78h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  return PopUpdateSystemIdleContext(a1);
}
