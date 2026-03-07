__int64 __fastcall MiAllocateCombineBlock(__int64 a1)
{
  __int64 inserted; // rbx
  _QWORD *v3; // rax
  __int64 *v4; // rcx
  __int64 v5; // rcx
  unsigned __int64 OldIrql; // rdi
  char *Pool; // rax
  void *v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf
  struct _KLOCK_QUEUE_HANDLE v15; // [rsp+20h] [rbp-28h] BYREF

  memset(&v15, 0, sizeof(v15));
  inserted = 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &v15);
  v3 = (_QWORD *)(a1 + 72);
  v4 = *(__int64 **)(a1 + 72);
  if ( v4 != (__int64 *)(a1 + 72) )
  {
    inserted = *(_QWORD *)(a1 + 72);
    v5 = *v4;
    if ( *(_QWORD **)(inserted + 8) != v3 || *(_QWORD *)(v5 + 8) != inserted )
      __fastfail(3u);
    *v3 = v5;
    *(_QWORD *)(v5 + 8) = v3;
    ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
  }
  KxReleaseQueuedSpinLock(&v15);
  OldIrql = v15.OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v15.OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << (v15.OldIrql + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
  if ( inserted )
    goto LABEL_7;
  Pool = (char *)MiAllocatePool(274, 0x1000uLL, 0x6D75534Du);
  v9 = Pool;
  if ( Pool )
  {
    *((_DWORD *)Pool + 2) = 1;
    *((_QWORD *)Pool + 2) = a1;
    inserted = MiInsertNewCombineBlocks(a1, Pool + 72);
    if ( inserted )
    {
LABEL_7:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 388), 1u);
      return inserted;
    }
    ExFreePoolWithTag(v9, 0);
  }
  return 0LL;
}
