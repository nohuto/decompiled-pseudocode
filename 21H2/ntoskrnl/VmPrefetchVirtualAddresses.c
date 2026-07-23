/*
 * XREFs of VmPrefetchVirtualAddresses @ 0x14092E9B0
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402A1434 (MmInSwapWorkingSet.c)
 *     NtSetInformationVirtualMemory @ 0x1406BD8D0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405A47B4 (VmpPrefetchVirtualAddresses.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VmPrefetchVirtualAddresses(_QWORD *Src, unsigned __int64 a2, int a3)
{
  unsigned int v4; // ebx
  _KPROCESS *Process; // rbp
  volatile LONG *v7; // rcx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v9; // rdi
  struct _LIST_ENTRY *v10; // rcx

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = (volatile LONG *)Process[2].Affinity.Bitmap[5];
  if ( v7 )
  {
    if ( a3 )
    {
      return (unsigned int)VmpPrefetchVirtualAddresses(v7, Src, a2);
    }
    else
    {
      PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * (a2 + 4), 0x63506D56u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        PoolWithTag->List.Blink = 0LL;
        PoolWithTag[1].List.Flink = 0LL;
        PoolWithTag[1].List.Blink = 0LL;
        PoolWithTag[1].WorkerRoutine = 0LL;
        PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))VmpPrefetchWorker;
        PoolWithTag->Parameter = PoolWithTag;
        PoolWithTag->List.Flink = 0LL;
        ObfReferenceObject(Process);
        v9[1].WorkerRoutine = (void (__fastcall *)(void *))a2;
        v10 = (struct _LIST_ENTRY *)(((unsigned __int64)&v9[1].Parameter + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        v9[1].List.Blink = v10;
        v9[1].List.Flink = (struct _LIST_ENTRY *)Process;
        memmove(v10, Src, 16 * a2);
        ExQueueWorkItem(v9, DelayedWorkQueue);
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741667;
  }
  return v4;
}
