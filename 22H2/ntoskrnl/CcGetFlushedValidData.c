/*
 * XREFs of CcGetFlushedValidData @ 0x140311450
 * Callers:
 *     CcWriteBehindInternal @ 0x14022D3E0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14022E780 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1402937BC (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x140293E80 (CcGetPartition.c)
 *     MmGetControlAreaPartition @ 0x1402B31A0 (MmGetControlAreaPartition.c)
 *     KeReleaseGuardedMutex @ 0x1402C9310 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1402CA770 (ExAcquireFastMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402CDE30 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFindBitmapRangeToClean @ 0x14031153C (CcFindBitmapRangeToClean.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 */

// local variable allocation has failed, the output may be wrong!
LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  char *SharedCacheMap; // rdi
  __int64 Partition; // r13
  __int64 v8; // rdx
  __int64 v9; // r8
  _DWORD *v10; // r9
  LARGE_INTEGER v11; // rbx
  __int64 v13; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r9
  _DWORD *v24; // r8
  int v25; // eax
  bool v26; // zf
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  _DWORD *v31; // r9
  int v32; // eax
  unsigned __int64 v33; // rbx
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r10
  _DWORD *v36; // r9
  int v37; // eax
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v42; // eax
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v43, 0, sizeof(v43));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
LABEL_3:
    Partition = CcGetPartition(SharedCacheMap, BcbListHeld, v2, v3);
    if ( *(_QWORD *)(MmGetControlAreaPartition((__int64)SectionObjectPointer, v8, v9, v10) + 8) != Partition )
      KeBugCheckEx(0x34u, 0x1E8CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v11 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v13 = *((_QWORD *)SharedCacheMap + 20);
      if ( v13 && *(_DWORD *)(v13 + 8) )
      {
        BitmapRangeToClean = CcFindBitmapRangeToClean(v13, 0LL);
        v11.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
      }
      v15 = SharedCacheMap + 16;
      v16 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v17 = (__int64)(v16 - 2);
      while ( v16 != v15 && (*(_WORD *)v17 != 765 || !*(_BYTE *)(v17 + 2)) )
      {
        v17 = *v16 - 16LL;
        v16 = (_QWORD *)*v16;
      }
      if ( (_QWORD *)(v17 + 16) != v15 && *(_QWORD *)(v17 + 8) < v11.QuadPart )
        v11 = *(LARGE_INTEGER *)(v17 + 8);
    }
    if ( !BcbListHeld )
    {
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v43);
      CcDecrementOpenCount((__int64)SharedCacheMap);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
      OldIrql = v43.OldIrql;
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v43.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v42 = ~(unsigned __int16)(-1LL << (v43.OldIrql + 1));
            v26 = (v42 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v42;
            if ( v26 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
      }
      __writecr8(OldIrql);
    }
    return v11;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v27 = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap, v18, v19, v20);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v27 + 128), &v43);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
    v28 = v43.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && v43.OldIrql <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = v30->SchedulerAssist;
          v32 = ~(unsigned __int16)(-1LL << (v43.OldIrql + 1));
          v26 = (v32 & v31[5]) == 0;
          v31[5] &= v32;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v30);
        }
      }
    }
    __writecr8(v28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    v33 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v34 = KeGetCurrentIrql();
        if ( v34 <= 0xFu && LockHandle.OldIrql <= 0xFu && v34 >= 2u )
        {
          v35 = KeGetCurrentPrcb();
          v36 = v35->SchedulerAssist;
          v37 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v26 = (v37 & v36[5]) == 0;
          v36[5] &= v37;
          if ( v26 )
            KiRemoveSystemWorkPriorityKick(v35);
        }
      }
    }
    __writecr8(v33);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
    goto LABEL_3;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  v21 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v22 = KeGetCurrentIrql();
      if ( v22 <= 0xFu && LockHandle.OldIrql <= 0xFu && v22 >= 2u )
      {
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        v25 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v26 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v26 )
          KiRemoveSystemWorkPriorityKick(v23);
      }
    }
  }
  __writecr8(v21);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
