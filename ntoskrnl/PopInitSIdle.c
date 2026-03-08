/*
 * XREFs of PopInitSIdle @ 0x14082A7A4
 * Callers:
 *     PopUserPresentSetWorker @ 0x14058BD10 (PopUserPresentSetWorker.c)
 *     PopSleepPowerSettingCallback @ 0x140829820 (PopSleepPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     PopUpdateSystemIdleContext @ 0x14082A808 (PopUpdateSystemIdleContext.c)
 */

__int64 __fastcall PopInitSIdle(unsigned int a1)
{
  _BYTE v3[96]; // [rsp+20h] [rbp-78h] BYREF

  memset(v3, 0, sizeof(v3));
  if ( !PopPlatformAoAc )
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
  return PopUpdateSystemIdleContext(a1);
}
