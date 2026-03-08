/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x140614E50
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x14038897C (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerDrainUsageNotificationsDpc(__int64 a1, __int64 a2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a2 + 424));
}
