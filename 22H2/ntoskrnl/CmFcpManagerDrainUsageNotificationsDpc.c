/*
 * XREFs of CmFcpManagerDrainUsageNotificationsDpc @ 0x140617300
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x140374BF0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerDrainUsageNotificationsDpc(
        struct _KDPC *Dpc,
        char *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(DeferredContext + 424));
}
