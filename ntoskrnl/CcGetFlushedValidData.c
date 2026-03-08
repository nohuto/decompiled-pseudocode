/*
 * XREFs of CcGetFlushedValidData @ 0x1402A1120
 * Callers:
 *     CcWriteBehindPostProcess @ 0x140219248 (CcWriteBehindPostProcess.c)
 * Callees:
 *     CcDecrementOpenCount @ 0x14021B85C (CcDecrementOpenCount.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     MmGetControlAreaPartition @ 0x1402A1224 (MmGetControlAreaPartition.c)
 *     CcFindBitmapRangeToClean @ 0x1402A34FC (CcFindBitmapRangeToClean.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 v5; // r13
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  _DWORD *v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int64 v19; // rbx
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  _DWORD *v22; // r9
  int v23; // eax
  unsigned __int64 v24; // rbx
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v36; // eax
  struct _KLOCK_QUEUE_HANDLE v37; // [rsp+30h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-18h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v37, 0, sizeof(v37));
  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
LABEL_3:
    v5 = *((_QWORD *)SharedCacheMap + 67);
    if ( *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) != v5 )
      KeBugCheckEx(0x34u, 0x2416uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v6 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
    if ( *((_DWORD *)SharedCacheMap + 28) )
    {
      v8 = *((_QWORD *)SharedCacheMap + 21);
      if ( v8 && *(_DWORD *)(v8 + 8) )
      {
        BitmapRangeToClean = CcFindBitmapRangeToClean(v8, 0LL);
        v6.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
      }
      v10 = SharedCacheMap + 16;
      v11 = (_QWORD *)*((_QWORD *)SharedCacheMap + 2);
      v12 = (__int64)(v11 - 2);
      while ( v11 != v10 && (*(_WORD *)v12 != 765 || !*(_BYTE *)(v12 + 2)) )
      {
        v12 = *v11 - 16LL;
        v11 = (_QWORD *)*v11;
      }
      if ( (_QWORD *)(v12 + 16) != v10 && *(_QWORD *)(v12 + 8) < v6.QuadPart )
        v6 = *(LARGE_INTEGER *)(v12 + 8);
    }
    if ( !BcbListHeld )
    {
      ExReleaseFastMutex((PFAST_MUTEX)(SharedCacheMap + 288));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &v37);
      CcDecrementOpenCount((__int64)SharedCacheMap, v29, v30, v31);
      KxReleaseQueuedSpinLock(&v37);
      OldIrql = v37.OldIrql;
      if ( KiIrqlFlags )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v37.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v36 = ~(unsigned __int16)(-1LL << (v37.OldIrql + 1));
          v18 = (v36 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v36;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
    }
    return v6;
  }
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 67) + 768LL), &v37);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 136);
    KxReleaseQueuedSpinLock(&v37);
    v19 = v37.OldIrql;
    if ( KiIrqlFlags )
    {
      v20 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v20 <= 0xFu && v37.OldIrql <= 0xFu && v20 >= 2u )
      {
        v21 = KeGetCurrentPrcb();
        v22 = v21->SchedulerAssist;
        v23 = ~(unsigned __int16)(-1LL << (v37.OldIrql + 1));
        v18 = (v23 & v22[5]) == 0;
        v22[5] &= v23;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v21);
      }
    }
    __writecr8(v19);
    KxReleaseQueuedSpinLock(&LockHandle);
    v24 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v25 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v25 <= 0xFu && LockHandle.OldIrql <= 0xFu && v25 >= 2u )
      {
        v26 = KeGetCurrentPrcb();
        v27 = v26->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v18 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v26);
      }
    }
    __writecr8(v24);
    ExAcquireFastMutex((PFAST_MUTEX)(SharedCacheMap + 288));
    goto LABEL_3;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v14 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && LockHandle.OldIrql <= 0xFu && v14 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = v15->SchedulerAssist;
      v17 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v18 = (v17 & v16[5]) == 0;
      v16[5] &= v17;
      if ( v18 )
        KiRemoveSystemWorkPriorityKick(v15);
    }
  }
  __writecr8(v13);
  return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
}
