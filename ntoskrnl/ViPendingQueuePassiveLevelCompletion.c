/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x140ACEEB0
 * Callers:
 *     ViPendingDelayCompletion @ 0x140ACED48 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1402261B0 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ViPendingTryReserveWorker @ 0x1405CD854 (ViPendingTryReserveWorker.c)
 */

__int64 __fastcall ViPendingQueuePassiveLevelCompletion(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  KPRIORITY v4; // edi
  unsigned int v5; // eax
  __int64 v7; // rbx

  if ( !ViPendingWorkersCount )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v4 = PriorityThread;
  --CurrentThread->KernelApcDisable;
  v5 = ViPendingTryReserveWorker(a1);
  if ( v5 == -1 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return 0LL;
  }
  v7 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v7), v4);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v7 + 16), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return 1LL;
}
