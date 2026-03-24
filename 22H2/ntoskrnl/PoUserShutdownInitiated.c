/*
 * XREFs of PoUserShutdownInitiated @ 0x140776090
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F1BE4 (PopPowerInformationInternal.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025F5D0 (KiSetTimerEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402D19C0 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x14032CC74 (PopQueueWorkItem.c)
 *     KeInitializeTimerEx @ 0x140341AF0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1403446C0 (KeInitializeDpc.c)
 *     PpmBeginHighPerfRequest @ 0x1403A72D0 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     PopTransitionCheckpoint @ 0x1407761D8 (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x140990044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140990084 (PopAcquirePolicyLock.c)
 */

char __fastcall PoUserShutdownInitiated(__int64 a1, __int64 a2)
{
  char result; // al
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl

  result = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !result )
  {
    PopTransitionCheckpoint(7LL, 0LL);
    result = PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
    if ( qword_140C543B8 )
    {
      PopAcquirePolicyLock(v3);
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock(v5, v4);
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140C241E4 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140C241E4 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock(v5, v4);
        v6 = ((__int64 (*)(void))qword_140C543B8)();
        result = KiSetTimerEx(
                   (__int64)&PopUserShutdownDelayTimer,
                   -900000000LL,
                   0,
                   0,
                   (__int64)&PopUserShutdownDelayDpc);
        if ( v6 )
          return PpmBeginHighPerfRequest();
      }
    }
  }
  return result;
}
