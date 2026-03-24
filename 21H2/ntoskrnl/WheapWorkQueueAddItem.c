/*
 * XREFs of WheapWorkQueueAddItem @ 0x1405BD7A8
 * Callers:
 *     WheapReportBootError @ 0x1405BAEC4 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1405BAF98 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1405BB130 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x14023E750 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x1402A0380 (ExInterlockedInsertTailList.c)
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
