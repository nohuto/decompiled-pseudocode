/*
 * XREFs of PopSetNotificationWork @ 0x1402BCB00
 * Callers:
 *     PopInitilizeAcDcSettings @ 0x140380E04 (PopInitilizeAcDcSettings.c)
 *     PopUserPresentSetWorker @ 0x14058BD10 (PopUserPresentSetWorker.c)
 *     PopGetSettingNotificationName @ 0x14068CCC4 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14068CFA0 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14073B960 (PoRegisterPowerSettingCallback.c)
 *     PopApplyPolicy @ 0x14082A06C (PopApplyPolicy.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopExecutePowerAction @ 0x1409867F4 (PopExecutePowerAction.c)
 * Callees:
 *     PopGetPolicyWorker @ 0x1402BCB34 (PopGetPolicyWorker.c)
 *     PopCheckForWork @ 0x1402BCB88 (PopCheckForWork.c)
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
