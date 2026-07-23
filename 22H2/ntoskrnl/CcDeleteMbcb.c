/*
 * XREFs of CcDeleteMbcb @ 0x140272FBC
 * Callers:
 *     CcSetFileSizesEx @ 0x14022DA90 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x14027445C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     ExFreeToNPagedLookasideList @ 0x140252644 (ExFreeToNPagedLookasideList.c)
 *     CcDeallocateBcb @ 0x1402756E0 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14029346C (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  struct _FAST_MUTEX *v2; // r14
  __int64 Partition; // rbx
  unsigned int *v4; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned int **v6; // rsi
  unsigned int *v7; // rbx
  __int64 v8; // rcx
  unsigned int **v9; // rax
  unsigned int *v10; // rdx
  PVOID *v11; // rax
  PVOID v12; // rcx
  PVOID *v13; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = (struct _FAST_MUTEX *)(a1 + 280);
  Partition = CcGetPartition(a1);
  ExAcquireFastMutex(v2);
  v4 = *(unsigned int **)(a1 + 160);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, v4[2]);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v18 = (v17 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    v6 = (unsigned int **)(v4 + 4);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == (unsigned int *)v6 )
        break;
      v8 = *(_QWORD *)v7;
      v9 = (unsigned int **)*((_QWORD *)v7 + 1);
      if ( *(unsigned int **)(*(_QWORD *)v7 + 8LL) != v7 || *v9 != v7 )
LABEL_20:
        __fastfail(3u);
      *v9 = (unsigned int *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = (unsigned int *)*((_QWORD *)v7 + 5);
      if ( v10 && v10 != v4 + 24 )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v10);
      if ( v7 < v4 || v7 >= v4 + 48 )
      {
        v11 = p_P;
        if ( *p_P != &P )
          goto LABEL_20;
        *((_QWORD *)v7 + 1) = p_P;
        *(_QWORD *)v7 = &P;
        *v11 = v7;
        p_P = (PVOID *)v7;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    while ( 1 )
    {
      v12 = P;
      if ( P == &P )
        break;
      v13 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v13[1] != P )
        goto LABEL_20;
      P = *(PVOID *)P;
      v13[1] = &P;
      ExFreePoolWithTag(v12, 0);
    }
    CcDeallocateBcb(v4);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
