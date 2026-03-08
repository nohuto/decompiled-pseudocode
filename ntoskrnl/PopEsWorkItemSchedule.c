/*
 * XREFs of PopEsWorkItemSchedule @ 0x14086E7F0
 * Callers:
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x140860ED0 (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopEsQueueStateEvaluation @ 0x14086E7D0 (PopEsQueueStateEvaluation.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x140995540 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PopEsInit @ 0x140B47078 (PopEsInit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall PopEsWorkItemSchedule(int a1)
{
  _m_prefetchw(&PopEsWorkItemDue);
  if ( _InterlockedOr(&PopEsWorkItemDue, a1 | 0x80000000) >= 0 )
    ExQueueWorkItem(&PopEsWorkItem, DelayedWorkQueue);
}
