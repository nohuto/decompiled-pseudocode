/*
 * XREFs of VmPrefetchVirtualAddresses @ 0x1409D90F4
 * Callers:
 *     MmInSwapWorkingSet @ 0x1402000BC (MmInSwapWorkingSet.c)
 *     NtSetInformationVirtualMemory @ 0x14075BCB0 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     VmpPrefetchVirtualAddresses @ 0x1405F828C (VmpPrefetchVirtualAddresses.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

__int64 __fastcall VmPrefetchVirtualAddresses(_QWORD *Src, unsigned __int64 a2, int a3)
{
  unsigned int v4; // ebx
  _KPROCESS *Process; // rbp
  volatile LONG *v7; // rcx
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  struct _WORK_QUEUE_ITEM *v9; // rdi
  struct _LIST_ENTRY *v10; // rcx

  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = (volatile LONG *)Process[2].Affinity.StaticBitmap[5];
  if ( v7 )
  {
    if ( a3 )
    {
      return (unsigned int)VmpPrefetchVirtualAddresses(v7, Src, a2);
    }
    else
    {
      Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 16 * (a2 + 4), 1666215254LL);
      v9 = Pool2;
      if ( Pool2 )
      {
        Pool2->List.Blink = 0LL;
        Pool2[1].List.Flink = 0LL;
        Pool2[1].List.Blink = 0LL;
        Pool2[1].WorkerRoutine = 0LL;
        Pool2->WorkerRoutine = (void (__fastcall *)(void *))VmpPrefetchWorker;
        Pool2->Parameter = Pool2;
        Pool2->List.Flink = 0LL;
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
