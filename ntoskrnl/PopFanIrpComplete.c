/*
 * XREFs of PopFanIrpComplete @ 0x1403AE190
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

__int64 __fastcall PopFanIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 368), DelayedWorkQueue);
  return 3221225494LL;
}
