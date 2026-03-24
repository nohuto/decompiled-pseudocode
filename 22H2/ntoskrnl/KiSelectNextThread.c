/*
 * XREFs of KiSelectNextThread @ 0x1402568EC
 * Callers:
 *     KeWaitForMultipleObjects @ 0x14024B500 (KeWaitForMultipleObjects.c)
 *     KiQuantumEnd @ 0x140257550 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140258040 (KiGroupSchedulingQuantumEnd.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KiSearchForNewThreadOnProcessor @ 0x1402C7A00 (KiSearchForNewThreadOnProcessor.c)
 *     KiExitThreadWait @ 0x140341340 (KiExitThreadWait.c)
 *     KiSetSystemAffinityThread @ 0x14035CE24 (KiSetSystemAffinityThread.c)
 *     KiRescheduleThreadAfterAffinityChange @ 0x14035DB70 (KiRescheduleThreadAfterAffinityChange.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14035E53C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetHeteroPolicyThread @ 0x1405202A4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     KiIsThreadRankNonZero @ 0x14024CDC0 (KiIsThreadRankNonZero.c)
 *     KiSelectLowestRankedThread @ 0x140256A04 (KiSelectLowestRankedThread.c)
 *     KiSetProcessorIdle @ 0x140256A7C (KiSetProcessorIdle.c)
 *     KiCheckThreadAffinity @ 0x140258BE4 (KiCheckThreadAffinity.c)
 *     KiSelectReadyThread @ 0x1402C7F90 (KiSelectReadyThread.c)
 *     KiInsertDeferredReadyList @ 0x14035BAA0 (KiInsertDeferredReadyList.c)
 *     KiAddThreadToReadyQueue @ 0x14051EE34 (KiAddThreadToReadyQueue.c)
 *     KiSetSchedulerAssistPriority @ 0x140520894 (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSelectNextThread(struct _KPRCB *a1, __int64 a2)
{
  __int64 ready; // rbx
  char v5; // cl
  _BYTE *SchedulerAssist; // r9
  _KTHREAD *IdleThread; // rax
  int v8; // eax
  int v9; // r9d
  bool IsThreadRankNonZero; // al
  __int64 v11; // rdx

  while ( 1 )
  {
    ready = KiSelectReadyThread(1LL, a1);
    if ( !ready )
    {
      ready = KiSelectLowestRankedThread(a1);
      if ( !ready )
        ready = KiSelectReadyThread(0LL, a1);
    }
    if ( !ready )
      goto LABEL_5;
    if ( (unsigned int)KiCheckThreadAffinity(ready) )
      goto LABEL_15;
    if ( !a2 )
      break;
    KiInsertDeferredReadyList(a2, ready);
  }
  LOBYTE(v9) = 1;
  KiAddThreadToReadyQueue((_DWORD)a1, 0, ready, v9, 1);
  ready = 0LL;
LABEL_15:
  if ( !ready )
  {
LABEL_5:
    ready = (__int64)a1->IdleThread;
    KiSetProcessorIdle(a1, 1LL, 1LL);
  }
  if ( (*(_BYTE *)(ready + 2) & 4) == 0
    || (IsThreadRankNonZero = KiIsThreadRankNonZero(ready, a1), v5 = 1, !IsThreadRankNonZero) )
  {
    v5 = *(_BYTE *)(ready + 195);
  }
  *a1->PriorityState = v5;
  SchedulerAssist = a1->SchedulerAssist;
  if ( SchedulerAssist )
  {
    v11 = (unsigned int)KiVpThreadSystemWorkPriority;
    if ( (_KTHREAD *)ready != a1->IdleThread )
      v11 = (unsigned int)v5;
    KiSetSchedulerAssistPriority(a1->SchedulerAssist, v11, 0LL);
    SchedulerAssist = a1->SchedulerAssist;
  }
  IdleThread = a1->IdleThread;
  a1->NextThread = (_KTHREAD *)ready;
  if ( SchedulerAssist )
    SchedulerAssist[16] = ready == (_QWORD)IdleThread;
  LOBYTE(v8) = *(_BYTE *)(ready + 388);
  if ( (_BYTE)v8 == 1 )
  {
    v8 = *(_DWORD *)(ready + 132) - *(_DWORD *)(ready + 436) + MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(ready + 132) = v8;
  }
  *(_BYTE *)(ready + 388) = 3;
  return v8;
}
