/*
 * XREFs of WheapWorkQueueAddItem @ 0x140646270
 * Callers:
 *     WheapReportBootError @ 0x1406433D0 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x140643498 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x140643630 (WheaReportHwError.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x140223920 (ExInterlockedInsertTailList.c)
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
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
