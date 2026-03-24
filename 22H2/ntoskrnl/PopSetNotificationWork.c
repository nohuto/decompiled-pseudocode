/*
 * XREFs of PopSetNotificationWork @ 0x14034AEA0
 * Callers:
 *     PopUserPresentSet @ 0x1403A5804 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x1403A9224 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x1406F2614 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x1406F36C8 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x1406F4AF0 (PoRegisterPowerSettingCallback.c)
 *     PopExecutePowerAction @ 0x140775C28 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14077FB1C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x14078EA40 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x14079CC2C (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x14034A290 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14034AB20 (PopGetPolicyWorker.c)
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
