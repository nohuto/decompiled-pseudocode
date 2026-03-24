/*
 * XREFs of PopSetNotificationWork @ 0x140281E90
 * Callers:
 *     PopUserPresentSet @ 0x1403A5F04 (PopUserPresentSet.c)
 *     PopInitilizeAcDcSettings @ 0x1403AE404 (PopInitilizeAcDcSettings.c)
 *     PopGetSettingNotificationName @ 0x140679824 (PopGetSettingNotificationName.c)
 *     PopSetPowerSettingValue @ 0x14067A8D8 (PopSetPowerSettingValue.c)
 *     PoRegisterPowerSettingCallback @ 0x14067BD00 (PoRegisterPowerSettingCallback.c)
 *     PopExecutePowerAction @ 0x1407751C8 (PopExecutePowerAction.c)
 *     PopBatteryApplyCompositeState @ 0x14077FC1C (PopBatteryApplyCompositeState.c)
 *     PopUserPresentSetWorker @ 0x14078EB40 (PopUserPresentSetWorker.c)
 *     PopApplyPolicy @ 0x1407929CC (PopApplyPolicy.c)
 * Callees:
 *     PopCheckForWork @ 0x140281280 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x140281B10 (PopGetPolicyWorker.c)
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
