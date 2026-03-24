/*
 * XREFs of PopThermalIrpComplete @ 0x1403CDCD0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 */

__int64 __fastcall PopThermalIrpComplete(__int64 a1, __int64 a2, __int64 a3)
{
  ExQueueWorkItem((PWORK_QUEUE_ITEM)(a3 + 264), DelayedWorkQueue);
  return 3221225494LL;
}
