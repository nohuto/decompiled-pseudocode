/*
 * XREFs of PfSnPrefetchScenario @ 0x1407DB6B0
 * Callers:
 *     PfSnBeginScenario @ 0x1407508D0 (PfSnBeginScenario.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14028B240 (ExAcquireRundownProtection_0.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     KeQueryPriorityThread @ 0x140304B70 (KeQueryPriorityThread.c)
 *     ExWaitForRundownProtectionRelease @ 0x14030A210 (ExWaitForRundownProtectionRelease.c)
 *     PfSnAsyncContextInitialize @ 0x1407DB758 (PfSnAsyncContextInitialize.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnPrefetchScenario(PVOID P, unsigned int a2)
{
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx
  KPRIORITY PriorityThread; // eax
  unsigned int v7; // ebx
  struct _EX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp+8h] BYREF

  RunRef.Count = 0LL;
  Pool2 = ExAllocatePool2(64LL, 248LL, 1632658243LL);
  v5 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( Pool2 )
  {
    PfSnAsyncContextInitialize(Pool2, P, &RunRef, (a2 >> 4) & 1);
    ExAcquireRundownProtection_0(&RunRef);
    PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
    ExQueueWorkItem(v5, (WORK_QUEUE_TYPE)(PriorityThread + 32));
    v7 = 0;
    ExWaitForRundownProtectionRelease(&RunRef);
  }
  else
  {
    v7 = -1073741670;
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v7;
}
