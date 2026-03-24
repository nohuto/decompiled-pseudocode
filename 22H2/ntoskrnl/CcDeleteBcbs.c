/*
 * XREFs of CcDeleteBcbs @ 0x14032B8C0
 * Callers:
 *     CcSetFileSizesEx @ 0x14022DA90 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x14027445C (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x1402756E0 (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x140275D34 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x14029346C (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v5; // r14
  __int64 Partition; // r15
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rbp
  struct _KEVENT *v12; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = (_QWORD *)(a1 + 16);
  Partition = CcGetPartition((_QWORD *)a1, a2, a3, a4);
  v7 = (_QWORD *)*v5;
  while ( v7 != v5 )
  {
    v8 = v7 - 2;
    v9 = v7;
    v7 = (_QWORD *)*v7;
    if ( *(_WORD *)v8 == 765 )
    {
      if ( *((_DWORD *)v8 + 16) )
        KeBugCheckEx(0x34u, 0xD7DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      v10 = (_QWORD *)v9[1];
      if ( (_QWORD *)v7[1] != v9 || (_QWORD *)*v10 != v9 )
        __fastfail(3u);
      *v10 = v7;
      v7[1] = v10;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, v8[1], -1);
      if ( v8[23] )
      {
        v11 = *(_QWORD *)(v8[7] + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v8[7] + 16LL)) )
        {
          v12 = *(struct _KEVENT **)(v11 + 184);
          if ( v12 )
            KeSetEvent(v12, 0, 0);
          _InterlockedDecrement((volatile signed __int32 *)(v11 + 544));
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      if ( *((_BYTE *)v8 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v8 + 1) >> 12);
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
      CcDeallocateBcb((char *)v8);
    }
  }
}
