/*
 * XREFs of CcDeleteBcbs @ 0x1403C0748
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 * Callees:
 *     CcAdjustVacbLevelLockCount @ 0x14021BD70 (CcAdjustVacbLevelLockCount.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     CcDeallocateBcb @ 0x14029CCF0 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14029CD20 (CcDeductDirtyPages.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1)
{
  __int64 v1; // r15
  _QWORD *v2; // r14
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rbp
  struct _KEVENT *v9; // rcx
  unsigned __int64 OldIrql; // rbp
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 536);
  v2 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( v3 != (_QWORD *)(a1 + 16) )
  {
    do
    {
      v5 = v3 - 2;
      v6 = v3;
      v3 = (_QWORD *)*v3;
      if ( *(_WORD *)v5 == 765 )
      {
        if ( *((_DWORD *)v5 + 16) )
          KeBugCheckEx(0x34u, 0xEFDuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v7 = (_QWORD *)v6[1];
        if ( (_QWORD *)v3[1] != v6 || (_QWORD *)*v7 != v6 )
          __fastfail(3u);
        *v7 = v3;
        v3[1] = v7;
        if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          CcAdjustVacbLevelLockCount(a1, v5[1], -1);
        if ( v5[23] )
        {
          v8 = *(_QWORD *)(v5[7] + 8LL);
          if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v5[7] + 16LL)) )
          {
            v9 = *(struct _KEVENT **)(v8 + 192);
            if ( v9 )
              KeSetEvent(v9, 0, 0);
            _InterlockedDecrement((volatile signed __int32 *)(v8 + 552));
          }
        }
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 768), &LockHandle);
        if ( *((_BYTE *)v5 + 2) )
          CcDeductDirtyPages(a1, *((_DWORD *)v5 + 1) >> 12);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        CcDeallocateBcb((char *)v5);
      }
    }
    while ( v3 != v2 );
  }
}
