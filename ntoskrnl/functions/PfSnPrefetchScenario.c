__int64 __fastcall PfSnPrefetchScenario(PVOID P, unsigned int a2)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  struct _WORK_QUEUE_ITEM *v5; // rbx
  KPRIORITY PriorityThread; // eax
  unsigned int v7; // ebx
  struct _EX_RUNDOWN_REF RunRef; // [rsp+30h] [rbp+8h] BYREF

  RunRef.Count = 0LL;
  Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 248LL, 1632658243LL);
  v5 = Pool2;
  if ( Pool2 )
  {
    PfSnAsyncContextInitialize(Pool2, (__int64)P, (__int64)&RunRef, (a2 >> 4) & 1);
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
