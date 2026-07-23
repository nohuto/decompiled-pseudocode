/*
 * XREFs of ViPendingQueuePassiveLevelCompletion @ 0x1409D6DE4
 * Callers:
 *     ViPendingDelayCompletion @ 0x1409D6C78 (ViPendingDelayCompletion.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KeQueryPriorityThread @ 0x14028B7A0 (KeQueryPriorityThread.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     ViPendingTryReserveWorker @ 0x1405A1F40 (ViPendingTryReserveWorker.c)
 */

__int64 __fastcall ViPendingQueuePassiveLevelCompletion(signed __int64 a1)
{
  KPRIORITY PriorityThread; // eax
  struct _KTHREAD *CurrentThread; // rdx
  KPRIORITY v4; // edi
  unsigned int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  if ( !ViPendingWorkersCount )
    return 0LL;
  PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
  CurrentThread = KeGetCurrentThread();
  v4 = PriorityThread;
  --CurrentThread->KernelApcDisable;
  v5 = ViPendingTryReserveWorker(a1);
  if ( v5 == -1 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
    return 0LL;
  }
  v10 = 48LL * v5;
  KeSetPriorityThread(*(PKTHREAD *)((char *)&ViPendingWorkers + v10), v4);
  KeSetEvent((PRKEVENT)((char *)&ViPendingWorkers + v10 + 16), 0, 0);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  return 1LL;
}
