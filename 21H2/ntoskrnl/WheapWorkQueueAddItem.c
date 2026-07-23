/*
 * XREFs of WheapWorkQueueAddItem @ 0x1405BD9D8
 * Callers:
 *     WheapReportBootError @ 0x1405BB0F4 (WheapReportBootError.c)
 *     WheapReportPersistedErrorRecord @ 0x1405BB1C8 (WheapReportPersistedErrorRecord.c)
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14021D900 (ExInterlockedInsertTailList.c)
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
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
