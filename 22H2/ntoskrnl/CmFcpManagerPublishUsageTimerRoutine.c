/*
 * XREFs of CmFcpManagerPublishUsageTimerRoutine @ 0x140419750
 * Callers:
 *     <none>
 * Callees:
 *     CmpWorkItemQueueWork @ 0x140374BF0 (CmpWorkItemQueueWork.c)
 */

void __fastcall CmFcpManagerPublishUsageTimerRoutine(__int64 a1, struct _WORK_QUEUE_ITEM *a2)
{
  CmpWorkItemQueueWork(a2 + 49);
}
