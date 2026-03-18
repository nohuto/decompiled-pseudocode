/*
 * XREFs of PopSetNotificationWork @ 0x14032C950
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140383A54 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x14058E240 (PopUserPresentSetWorker.c)
 *     PopSetPowerSettingValue @ 0x140782F08 (PopSetPowerSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140783590 (PopGetSettingNotificationName.c)
 *     PoRegisterPowerSettingCallback @ 0x1407A7570 (PoRegisterPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14082513C (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x140870950 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409898A4 (PopExecutePowerAction.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x14032C984 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x14032C9D8 (PopCheckForWork.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4LL, a2, a3, a4);
    return PopCheckForWork();
  }
  return result;
}
