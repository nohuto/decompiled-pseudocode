/*
 * XREFs of PopUserPresentSet @ 0x1403A6054
 * Callers:
 *     PopSetSystemState @ 0x1403A6010 (PopSetSystemState.c)
 * Callees:
 *     PopResetIdleTime @ 0x14024EAF0 (PopResetIdleTime.c)
 *     PopSetNotificationWork @ 0x1402700D0 (PopSetNotificationWork.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x140888C90 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rdi
  __int32 v2; // esi

  v1 = (void *)a1;
  if ( (PopSimulate & 0x40000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"UserPresenceSet", PopFullWake, 0LL, 0LL, 0LL, 0);
  if ( byte_140C23A61 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, (__int32)v1);
  }
  else
  {
    v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
    if ( _InterlockedCompareExchange(&dword_140C23334, 0, 0) )
    {
      if ( !v2 )
      {
        _InterlockedExchange(&PopUserPresentSetStatus, 0);
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      }
    }
    else
    {
      if ( (PopFullWake & 3) == 0 )
      {
        _InterlockedOr(&PopFullWake, 2u);
        PopSetNotificationWork(1u);
      }
      PopResetIdleTime();
      if ( !v2 )
      {
        PopUserPresentWorkItem.Parameter = v1;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        PopUserPresentWorkItem.List.Flink = 0LL;
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      }
    }
  }
}
