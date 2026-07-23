/*
 * XREFs of PopSetNotificationWork @ 0x1402700D0
 * Callers:
 *     PopUserPresentSet @ 0x1403A6054 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x1403AE554 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x14066CF64 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14066E018 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14066F440 (PoRegisterPowerSettingCallback.c)
 *     PopExecutePowerAction @ 0x140775388 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14077FDDC (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x14078ED00 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x140793F7C (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x14026F4C0 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14026FD50 (PopGetPolicyWorker.c)
 */

__int64 __fastcall PopSetNotificationWork(unsigned int a1)
{
  __int64 result; // rax

  result = a1 & PopNotifyEvents;
  if ( (_DWORD)result != a1 )
  {
    _InterlockedOr(&PopNotifyEvents, a1);
    PopGetPolicyWorker(4);
    return PopCheckForWork();
  }
  return result;
}
