/*
 * XREFs of CcSetFileSizesEx @ 0x14029F9B0
 * Callers:
 *     CcSetFileSizes @ 0x14029F4C0 (CcSetFileSizes.c)
 * Callees:
 *     CcDecrementOpenCount @ 0x14021B85C (CcDecrementOpenCount.c)
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x14025C890 (KeReleaseInStackQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x140292590 (RtlRaiseStatus.c)
 *     CcDeleteMbcb @ 0x14029CBA4 (CcDeleteMbcb.c)
 *     CcExtendVacbArray @ 0x14029E348 (CcExtendVacbArray.c)
 *     CcPurgeAndClearCacheSection @ 0x14029FCE4 (CcPurgeAndClearCacheSection.c)
 *     CcPurgeCacheSection @ 0x1402A0EA0 (CcPurgeCacheSection.c)
 *     FsRtlIsNtstatusExpected @ 0x1402ECFB0 (FsRtlIsNtstatusExpected.c)
 *     MmFlushSection @ 0x140333F20 (MmFlushSection.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeleteBcbs @ 0x1403C0748 (CcDeleteBcbs.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MmExtendSection @ 0x1407267DC (MmExtendSection.c)
 */

NTSTATUS __stdcall CcSetFileSizesEx(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rsi
  _LARGE_INTEGER AllocationSize; // r14
  _LARGE_INTEGER ValidDataLength; // rbx
  __int64 SharedCacheMap; // rdi
  char v6; // r13
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r14
  KSPIN_LOCK *v12; // r14
  LARGE_INTEGER v13; // rcx
  NTSTATUS v14; // ebx
  unsigned __int64 v15; // rdi
  NTSTATUS result; // eax
  unsigned __int64 v17; // rbx
  unsigned __int64 OldIrql; // r14
  unsigned __int64 v19; // r14
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  int v22; // r14d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v30; // eax
  bool v31; // zf
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r10
  _DWORD *v34; // r9
  int v35; // eax
  unsigned __int64 v36; // rbx
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  unsigned __int8 v41; // al
  struct _KPRCB *v42; // r10
  _DWORD *v43; // r9
  int v44; // eax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r10
  _DWORD *v47; // r9
  int v48; // eax
  unsigned __int8 v49; // al
  struct _KPRCB *v50; // r10
  _DWORD *v51; // r9
  int v52; // eax
  unsigned __int8 v53; // al
  struct _KPRCB *v54; // r9
  _DWORD *v55; // r8
  int v56; // eax
  unsigned __int8 v57; // al
  struct _KPRCB *v58; // r9
  _DWORD *v59; // r8
  int v60; // eax
  __int128 v61; // [rsp+30h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE v62; // [rsp+40h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-18h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+B0h] [rbp+40h] BYREF
  __int64 QuadPart; // [rsp+B8h] [rbp+48h] BYREF
  PSECTION_OBJECT_POINTERS v66; // [rsp+C0h] [rbp+50h]
  PKSPIN_LOCK SpinLock; // [rsp+C8h] [rbp+58h]

  SectionObjectPointer = FileObject->SectionObjectPointer;
  AllocationSize = FileSizes->AllocationSize;
  ValidDataLength = FileSizes->ValidDataLength;
  FileOffset = FileSizes->FileSize;
  v61 = 0LL;
  v66 = SectionObjectPointer;
  memset(&LockHandle, 0, sizeof(LockHandle));
  QuadPart = AllocationSize.QuadPart;
  memset(&v62, 0, sizeof(v62));
  KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
  SharedCacheMap = (__int64)SectionObjectPointer->SharedCacheMap;
  v6 = 1;
  if ( SharedCacheMap && *(_QWORD *)(SharedCacheMap + 176) )
  {
    SpinLock = (PKSPIN_LOCK)(*(_QWORD *)(SharedCacheMap + 536) + 768LL);
    KeAcquireInStackQueuedSpinLock(SpinLock, &v62);
    if ( AllocationSize.QuadPart <= *(_QWORD *)(SharedCacheMap + 32) )
      goto LABEL_4;
    ++*(_DWORD *)(SharedCacheMap + 4);
    ++*(_DWORD *)(SharedCacheMap + 544);
    KxReleaseQueuedSpinLock(&v62);
    OldIrql = v62.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v62.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
        v31 = (v30 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v30;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    KxReleaseQueuedSpinLock(&LockHandle);
    v19 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v32 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && LockHandle.OldIrql <= 0xFu && v32 >= 2u )
      {
        v33 = KeGetCurrentPrcb();
        v34 = v33->SchedulerAssist;
        v35 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = (v35 & v34[5]) == 0;
        v34[5] &= v35;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(v33);
      }
    }
    __writecr8(v19);
    QuadPart += 0xFFFFFLL;
    v20 = *(_QWORD *)(SharedCacheMap + 176);
    LODWORD(QuadPart) = QuadPart & 0xFFF00000;
    v6 = 0;
    v21 = MmExtendSection(v20, &QuadPart, 1LL);
    v22 = v21;
    if ( v21 < 0 )
    {
      if ( !FsRtlIsNtstatusExpected(v21) )
        v22 = -1073741588;
    }
    else
    {
      v22 = CcExtendVacbArray(SharedCacheMap, QuadPart);
    }
    KeAcquireInStackQueuedSpinLock(SpinLock, &v62);
    CcDecrementOpenCount(SharedCacheMap, v23, v24, v25);
    if ( v22 < 0 )
    {
      KeReleaseInStackQueuedSpinLock(&v62);
      RtlRaiseStatus(v22);
    }
    SharedCacheMap = (__int64)v66->SharedCacheMap;
    if ( SharedCacheMap )
    {
LABEL_4:
      ++*(_DWORD *)(SharedCacheMap + 4);
      ++*(_DWORD *)(SharedCacheMap + 544);
      if ( v6 )
      {
        KxReleaseQueuedSpinLock(&v62);
        v10 = v62.OldIrql;
        if ( KiIrqlFlags )
        {
          v41 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v41 <= 0xFu && v62.OldIrql <= 0xFu && v41 >= 2u )
          {
            v42 = KeGetCurrentPrcb();
            v43 = v42->SchedulerAssist;
            v44 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
            v31 = (v44 & v43[5]) == 0;
            v43[5] &= v44;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v42);
          }
        }
        __writecr8(v10);
        KxReleaseQueuedSpinLock(&LockHandle);
        v11 = LockHandle.OldIrql;
        if ( KiIrqlFlags )
        {
          v45 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v45 <= 0xFu && LockHandle.OldIrql <= 0xFu && v45 >= 2u )
          {
            v46 = KeGetCurrentPrcb();
            v47 = v46->SchedulerAssist;
            v48 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
            v31 = (v48 & v47[5]) == 0;
            v47[5] &= v48;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v46);
          }
        }
        __writecr8(v11);
        v12 = SpinLock;
        KeAcquireInStackQueuedSpinLock(SpinLock, &v62);
      }
      else
      {
        v12 = SpinLock;
      }
      v13 = *(LARGE_INTEGER *)(SharedCacheMap + 40);
      if ( v13.QuadPart != 0x7FFFFFFFFFFFFFFFLL )
      {
        if ( FileOffset.QuadPart < v13.QuadPart )
          *(LARGE_INTEGER *)(SharedCacheMap + 40) = FileOffset;
        *(_LARGE_INTEGER *)(SharedCacheMap + 48) = ValidDataLength;
      }
      v14 = 0;
      if ( FileOffset.QuadPart < *(_QWORD *)(SharedCacheMap + 8) && (*(_DWORD *)(SharedCacheMap + 152) & 4) == 0 )
      {
        KxReleaseQueuedSpinLock(&v62);
        v17 = v62.OldIrql;
        if ( KiIrqlFlags )
        {
          v49 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && v62.OldIrql <= 0xFu && v49 >= 2u )
          {
            v50 = KeGetCurrentPrcb();
            v51 = v50->SchedulerAssist;
            v52 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
            v31 = (v52 & v51[5]) == 0;
            v51[5] &= v52;
            if ( v31 )
              KiRemoveSystemWorkPriorityKick(v50);
          }
        }
        __writecr8(v17);
        v14 = 0;
        if ( CcUnmapVacbArray(SharedCacheMap, (__int64 *)&FileOffset, 0, 0, 0, 0) )
        {
          if ( !FileOffset.QuadPart )
          {
            if ( *(_QWORD *)(SharedCacheMap + 168) )
              CcDeleteMbcb(SharedCacheMap);
            if ( *(_QWORD *)(SharedCacheMap + 16) != SharedCacheMap + 16 )
              CcDeleteBcbs(SharedCacheMap);
          }
          v14 = CcPurgeAndClearCacheSection(SharedCacheMap, &FileOffset);
        }
        KeAcquireInStackQueuedSpinLock(v12, &v62);
      }
      *(LARGE_INTEGER *)(SharedCacheMap + 8) = FileOffset;
      CcDecrementOpenCount(SharedCacheMap, v7, v8, v9);
      KxReleaseQueuedSpinLock(&v62);
      v15 = v62.OldIrql;
      if ( KiIrqlFlags )
      {
        v53 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v53 <= 0xFu && v62.OldIrql <= 0xFu && v53 >= 2u )
        {
          v54 = KeGetCurrentPrcb();
          v55 = v54->SchedulerAssist;
          v56 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
          v31 = (v56 & v55[5]) == 0;
          v55[5] &= v56;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v54);
        }
      }
      __writecr8(v15);
      return v14;
    }
    else
    {
      KxReleaseQueuedSpinLock(&v62);
      v36 = v62.OldIrql;
      if ( KiIrqlFlags )
      {
        v37 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && v62.OldIrql <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = v38->SchedulerAssist;
          v40 = ~(unsigned __int16)(-1LL << (v62.OldIrql + 1));
          v31 = (v40 & v39[5]) == 0;
          v39[5] &= v40;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      __writecr8(v36);
      return 0;
    }
  }
  else
  {
    KxReleaseQueuedSpinLock(&LockHandle);
    v26 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v57 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 )
      {
        if ( v57 <= 0xFu && LockHandle.OldIrql <= 0xFu && v57 >= 2u )
        {
          v58 = KeGetCurrentPrcb();
          v59 = v58->SchedulerAssist;
          v60 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v31 = (v60 & v59[5]) == 0;
          v59[5] &= v60;
          if ( v31 )
            KiRemoveSystemWorkPriorityKick(v58);
        }
        SectionObjectPointer = v66;
      }
    }
    __writecr8(v26);
    if ( (FileOffset.LowPart & 0xFFF) == 0 )
      return CcPurgeCacheSection(SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
    MmFlushSection(SectionObjectPointer, &FileOffset, 1LL, 0LL, &v61, 0);
    result = v61;
    if ( (int)v61 >= 0 )
      return CcPurgeCacheSection(SectionObjectPointer, &FileOffset, 0, 0) == 0 ? 0xC0000435 : 0;
  }
  return result;
}
