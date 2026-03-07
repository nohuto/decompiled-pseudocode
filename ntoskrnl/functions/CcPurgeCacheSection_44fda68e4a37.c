BOOLEAN __stdcall CcPurgeCacheSection(
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        PLARGE_INTEGER FileOffset,
        ULONG Length,
        ULONG Flags)
{
  char v7; // r12
  char *SharedCacheMap; // rbx
  unsigned __int64 v9; // r15
  BOOLEAN v10; // r15
  bool v12; // zf
  __int64 v13; // rcx
  unsigned __int64 v14; // r15
  int v15; // r15d
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  LONGLONG QuadPart; // rax
  int v22; // ebx
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v27; // edx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  _QWORD *i; // r15
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rbx
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r9
  _DWORD *v43; // r8
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  _DWORD *v47; // r8
  int v48; // eax
  _BYTE v49[4]; // [rsp+30h] [rbp-50h] BYREF
  int v50; // [rsp+34h] [rbp-4Ch]
  __int64 v51; // [rsp+38h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE v52; // [rsp+40h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-28h] BYREF
  char *v54; // [rsp+70h] [rbp-10h]
  PSECTION_OBJECT_POINTERS SectionPointera; // [rsp+C0h] [rbp+40h]
  char v57; // [rsp+D8h] [rbp+58h]

  v57 = Flags;
  v50 = -1;
  v49[0] = 0;
  v7 = 0;
  v51 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v52, 0, sizeof(v52));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  v54 = SharedCacheMap;
  if ( SharedCacheMap )
  {
    v12 = (*((_DWORD *)SharedCacheMap + 38) & 0x2000) == 0;
    v13 = *((_QWORD *)SharedCacheMap + 67);
    v51 = v13;
    if ( !v12 )
    {
      if ( ((unsigned __int8)FileOffset & 1) == 0 )
      {
        KxReleaseQueuedSpinLock(&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v27 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v12 = (v27 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v27;
            if ( v12 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(OldIrql);
        return 1;
      }
      FileOffset = (PLARGE_INTEGER)((unsigned __int64)FileOffset ^ 1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v13 + 768), &v52);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 136);
    KxReleaseQueuedSpinLock(&v52);
    v14 = v52.OldIrql;
    if ( KiIrqlFlags )
    {
      v28 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && v52.OldIrql <= 0xFu && v28 >= 2u )
      {
        v29 = KeGetCurrentPrcb();
        v30 = v29->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << (v52.OldIrql + 1));
        v12 = (v31 & v30[5]) == 0;
        v30[5] &= v31;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(v29);
      }
    }
    __writecr8(v14);
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v9 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v32 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
    {
      v33 = KeGetCurrentPrcb();
      v34 = v33->SchedulerAssist;
      v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v12 = (v35 & v34[5]) == 0;
      v34[5] &= v35;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v33);
    }
  }
  __writecr8(v9);
  if ( !SharedCacheMap )
    goto LABEL_4;
  v15 = (int)SectionObjectPointer;
  if ( v51 != *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) )
    KeBugCheckEx(0x34u, 0x13F6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v16 = v57;
  if ( (v57 & 1) != 0 )
  {
    for ( i = SharedCacheMap + 232; (_QWORD *)*i != i; CcUninitializeCacheMap(*(PFILE_OBJECT *)(*i - 88LL), 0LL, 0LL) )
      ;
    v15 = (int)SectionObjectPointer;
    v16 = v57;
  }
  if ( (v16 & 8) == 0 )
  {
    CcUnmapVacbArray((__int64)SharedCacheMap, (__int64 *)FileOffset, Length, 0, 1, 0);
    goto LABEL_16;
  }
  if ( (int)MmTrimSection(v15, (__int64 *)FileOffset, Length, 0) >= 0 )
  {
LABEL_16:
    if ( FileOffset )
      v7 = 1;
LABEL_4:
    if ( (v57 & 4) != 0 )
    {
      v7 |= 2u;
      v50 = 5;
    }
    v10 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, Length, v7, v49);
    if ( !v10 && !Length )
    {
      v22 = v50;
      do
      {
        if ( !MmCanFileBeTruncated(SectionObjectPointer, FileOffset) )
          break;
        if ( (v57 & 2) != 0 )
          break;
        KeDelayExecutionThread(0, 0, &CcCollisionDelay);
        if ( !--v22 )
          break;
        v10 = MmPurgeSection(SectionObjectPointer, (__int64 *)FileOffset, 0, v7, v49);
      }
      while ( !v10 );
      SharedCacheMap = v54;
    }
    if ( SharedCacheMap )
    {
      if ( !Length )
      {
        if ( FileOffset )
        {
          QuadPart = FileOffset->QuadPart;
          if ( FileOffset->QuadPart < *((_QWORD *)SharedCacheMap + 47) )
          {
            SectionPointera = (PSECTION_OBJECT_POINTERS)(QuadPart + 0x3FFFF);
            LODWORD(SectionPointera) = (QuadPart + 0x3FFFF) & 0xFFFC0000;
            *((_QWORD *)SharedCacheMap + 47) = (char *)SectionPointera + 0x40000;
          }
        }
        else
        {
          *((_QWORD *)SharedCacheMap + 47) = 0LL;
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v51 + 768), &v52);
      CcDecrementOpenCount((__int64)SharedCacheMap, v17, v18, v19);
      KxReleaseQueuedSpinLock(&v52);
      v20 = v52.OldIrql;
      if ( KiIrqlFlags )
      {
        v45 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && v52.OldIrql <= 0xFu && v45 >= 2u )
        {
          v46 = KeGetCurrentPrcb();
          v47 = v46->SchedulerAssist;
          v48 = ~(unsigned __int16)(-1LL << (v52.OldIrql + 1));
          v12 = (v48 & v47[5]) == 0;
          v47[5] &= v48;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(v46);
        }
      }
      __writecr8(v20);
    }
    return v10;
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v51 + 768), &v52);
  CcDecrementOpenCount((__int64)SharedCacheMap, v37, v38, v39);
  KxReleaseQueuedSpinLock(&v52);
  v40 = v52.OldIrql;
  if ( KiIrqlFlags )
  {
    v41 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v52.OldIrql <= 0xFu && v41 >= 2u )
    {
      v42 = KeGetCurrentPrcb();
      v43 = v42->SchedulerAssist;
      v44 = ~(unsigned __int16)(-1LL << (v52.OldIrql + 1));
      v12 = (v44 & v43[5]) == 0;
      v43[5] &= v44;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(v42);
    }
  }
  __writecr8(v40);
  return 0;
}
