/*
 * XREFs of PopEsQueueStateEvaluation @ 0x14086E7D0
 * Callers:
 *     PopPowerInformationInternal @ 0x14073E108 (PopPowerInformationInternal.c)
 *     PopEsPowerSettingPolicyCallback @ 0x140860990 (PopEsPowerSettingPolicyCallback.c)
 *     PopBatteryApplyCompositeState @ 0x14086E430 (PopBatteryApplyCompositeState.c)
 *     PopEsInStandbyEvaluate @ 0x1409953B0 (PopEsInStandbyEvaluate.c)
 * Callees:
 *     PopEsWorkItemSchedule @ 0x14086E7F0 (PopEsWorkItemSchedule.c)
 */

__int64 __fastcall PopEsQueueStateEvaluation(char a1)
{
  return PopEsWorkItemSchedule(a1 != 0 ? 12 : 4);
}
