/*
 * XREFs of CcDeleteMbcb @ 0x14029CBA4
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 * Callees:
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140298E70 (ExFreeToNPagedLookasideList.c)
 *     CcDeallocateBcb @ 0x14029CCF0 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14029CD20 (CcDeductDirtyPages.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  __int64 v1; // rbx
  struct _FAST_MUTEX *v2; // r14
  unsigned int *v4; // rdi
  unsigned __int64 OldIrql; // rbx
  unsigned int **v6; // rsi
  unsigned int *v7; // rbx
  __int64 v8; // rcx
  unsigned int **v9; // rax
  unsigned int *v10; // rdx
  PVOID v11; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf
  PVOID *v17; // rax
  PVOID *v18; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = (struct _FAST_MUTEX *)(a1 + 288);
  p_P = &P;
  P = &P;
  memset(&LockHandle, 0, sizeof(LockHandle));
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 288));
  v4 = *(unsigned int **)(a1 + 168);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
    CcDeductDirtyPages(a1, v4[2]);
    KxReleaseQueuedSpinLock(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
LABEL_27:
        __fastfail(3u);
      *v9 = (unsigned int *)v8;
      *(_QWORD *)(v8 + 8) = v9;
      v10 = (unsigned int *)*((_QWORD *)v7 + 5);
      if ( v10 && v10 != v4 + 24 )
        ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v10);
      if ( v7 < v4 || v7 >= v4 + 48 )
      {
        v17 = p_P;
        if ( *p_P != &P )
          goto LABEL_27;
        *((_QWORD *)v7 + 1) = p_P;
        *(_QWORD *)v7 = &P;
        *v17 = v7;
        p_P = (PVOID *)v7;
      }
    }
    *(_QWORD *)(a1 + 168) = 0LL;
    ExReleaseFastMutex(v2);
    while ( 1 )
    {
      v11 = P;
      if ( P == &P )
        break;
      v18 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v18[1] != P )
        goto LABEL_27;
      P = *(PVOID *)P;
      v18[1] = &P;
      ExFreePoolWithTag(v11, 0);
    }
    CcDeallocateBcb(v4);
  }
  else
  {
    ExReleaseFastMutex(v2);
  }
}
