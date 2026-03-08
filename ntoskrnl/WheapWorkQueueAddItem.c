/*
 * XREFs of WheapWorkQueueAddItem @ 0x1406115E4
 * Callers:
 *     WheapReportBootError @ 0x14060E01C (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x14060E0E4 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x14060E280 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402302B0 (KiInsertQueueDpc.c)
 *     ExInterlockedInsertTailList @ 0x1402B8DC0 (ExInterlockedInsertTailList.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, struct _LIST_ENTRY *a2)
{
  ExInterlockedInsertTailList((PLIST_ENTRY)a1, a2, (PKSPIN_LOCK)(a1 + 16));
  if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 24)) == 1 )
  {
    if ( KeGetCurrentIrql() > 2u )
      KiInsertQueueDpc(a1 + 32, 0LL, 0LL, 0LL, 0);
    else
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 96), DelayedWorkQueue);
  }
}
