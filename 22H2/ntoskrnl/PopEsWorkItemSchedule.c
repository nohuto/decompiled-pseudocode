/*
 * XREFs of PopEsWorkItemSchedule @ 0x14077FEDC
 * Callers:
 *     PopEsQueueStateEvaluation @ 0x14077FEBC (PopEsQueueStateEvaluation.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1407D45C0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1408F28D0 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140A3F95C (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
