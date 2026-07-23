/*
 * XREFs of WheapWorkQueueAddItem @ 0x1405BD6E8
 * Callers:
 *     WheapReportBootError @ 0x1405BAE04 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1405BAED8 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1405BB070 (WheaReportHwError.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD20 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     ExInterlockedInsertTailList @ 0x1402F86D0 (ExInterlockedInsertTailList.c)
 */

void __fastcall WheapWorkQueueAddItem(__int64 a1, _LIST_ENTRY *a2)
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
