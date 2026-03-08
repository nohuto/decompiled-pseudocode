/*
 * XREFs of ExpTrackRaiseLimitNotification @ 0x1406066A4
 * Callers:
 *     ExpLimitDpcInsertEntry @ 0x140605DF0 (ExpLimitDpcInsertEntry.c)
 *     ExpTrackTableGetMoreLimit @ 0x140606710 (ExpTrackTableGetMoreLimit.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404204A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall ExpTrackRaiseLimitNotification(__int64 a1)
{
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 96), 1, 0) )
  {
    RtlpInterlockedPushEntrySList(&stru_140CF7EA0, (PSLIST_ENTRY)(a1 + 80));
    if ( !_InterlockedCompareExchange(&dword_140CF7EB0, 1, 0) )
    {
      stru_140CF7EB8.Parameter = 0LL;
      stru_140CF7EB8.List.Flink = 0LL;
      stru_140CF7EB8.WorkerRoutine = (void (__fastcall *)(void *))ExpPlProcessNotifications;
      ExQueueWorkItem(&stru_140CF7EB8, NormalWorkQueue);
    }
  }
}
