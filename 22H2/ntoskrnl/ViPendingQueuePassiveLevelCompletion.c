/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x140AD2EB0
 * Callers:
 *     ViPendingDelayCompletion @ 0x140AD2D48 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     KeSetPriorityThread @ 0x1402B0310 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x140304B70 (KeQueryPriorityThread.c)
 *     ViPendingTryReserveWorker @ 0x1405CFD04 (ViPendingTryReserveWorker.c)
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
