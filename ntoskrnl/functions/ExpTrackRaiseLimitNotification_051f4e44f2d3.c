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
