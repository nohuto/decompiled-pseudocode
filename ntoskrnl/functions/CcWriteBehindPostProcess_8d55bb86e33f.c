char __fastcall CcWriteBehindPostProcess(__int64 a1, char a2)
{
  __int64 v3; // r14
  _DWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r12
  int valid; // esi
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  unsigned __int64 OldIrql; // rbx
  struct _FILE_OBJECT *FileObject; // rsi
  int v14; // ecx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  char v18; // dl
  int v19; // eax
  unsigned __int64 v20; // rbx
  struct _FILE_OBJECT *v21; // rbx
  __int64 v22; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v26; // eax
  bool v27; // zf
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  unsigned __int8 v32; // al
  struct _KPRCB *v33; // r11
  _DWORD *v34; // r10
  int v35; // eax
  unsigned __int64 v36; // rbx
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  _DWORD *v39; // r8
  int v40; // eax
  _BYTE *v41; // rax
  unsigned __int8 v42; // al
  struct _KPRCB *v43; // r9
  _DWORD *v44; // r8
  int v45; // eax
  KSPIN_LOCK *SpinLock; // [rsp+30h] [rbp-48h]
  _DWORD *v47; // [rsp+38h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+58h] [rbp-20h] BYREF
  char v50; // [rsp+C0h] [rbp+48h]
  char v51; // [rsp+C8h] [rbp+50h]
  LARGE_INTEGER FlushedValidData; // [rsp+D0h] [rbp+58h] BYREF
  __int64 v53; // [rsp+D8h] [rbp+60h]

  v51 = 0;
  v50 = 0;
  memset(&v49, 0, sizeof(v49));
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    CcWriteBehindReleaseFile();
  v3 = *(_QWORD *)(a1 + 256);
  v4 = *(_DWORD **)(a1 + 112);
  v47 = v4;
  if ( *(_DWORD *)(v3 + 128) == 2 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    v50 = *(_BYTE *)(v3 + 56);
    v53 = *(_QWORD *)(v5 + 536);
    if ( CcEnablePerVolumeLazyWriter )
      v6 = *(_QWORD *)(v5 + 600);
    else
      v6 = 0LL;
  }
  else
  {
    v5 = *(_QWORD *)(v3 + 24);
    v6 = *(_QWORD *)(v3 + 144);
    v53 = *(_QWORD *)(v3 + 136);
  }
  if ( *v4 != -2147483626 && (unsigned __int8)CcIsFatalWriteError(v5) )
  {
    v22 = CcReferenceSharedCacheMapFileObject(v5);
    CcMmLogLostDelayedWriteError(v22, (unsigned int)*v4);
    ObFastDereferenceObjectDeferDelete(v5 + 96, v22, 1666409283LL);
  }
  valid = 0;
  ExAcquireFastMutex((PFAST_MUTEX)(v5 + 288));
  FlushedValidData = *(LARGE_INTEGER *)(v5 + 40);
  if ( (unsigned __int8)CcShouldIssueVDLUpdate(v5) )
  {
    FlushedValidData = CcGetFlushedValidData(*(PSECTION_OBJECT_POINTERS *)(a1 + 24), 1u);
    if ( FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 40) )
    {
      ExReleaseFastMutex((PFAST_MUTEX)(v5 + 288));
      v21 = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
      valid = CcSetValidData(v21, (__int64 *)&FlushedValidData);
      ObFastDereferenceObjectDeferDelete(v5 + 96, v21, 1666409283LL);
      ExAcquireFastMutex((PFAST_MUTEX)(v5 + 288));
      if ( valid < 0 )
      {
        if ( valid != -1073741670 && valid != -2147483626 && valid != -1073741740 )
          FlushedValidData = *(LARGE_INTEGER *)(v5 + 48);
      }
      else
      {
        *(LARGE_INTEGER *)(v5 + 40) = FlushedValidData;
      }
    }
  }
  ExReleaseFastMutex((PFAST_MUTEX)(v5 + 288));
  v8 = v53;
  SpinLock = (KSPIN_LOCK *)(v53 + 768);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v53 + 768), &LockHandle);
  v11 = *(_DWORD *)(v5 + 4);
  --*(_DWORD *)(v5 + 544);
  *(_DWORD *)(v5 + 4) = --v11;
  if ( !v11 )
  {
    if ( valid == -1073741740 || valid == -2147483626 || valid == -1073741670 )
    {
      if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
        CcCancelMmWaitForUninitializeCacheMap(v5);
      if ( !*(_DWORD *)(v5 + 112) )
      {
        CcInsertIntoDirtySharedCacheMapList(v5);
        v18 = 1;
        goto LABEL_31;
      }
    }
    else
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
          v26 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v26 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v26;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      FileObject = (struct _FILE_OBJECT *)CcReferenceSharedCacheMapFileObject(v5);
      FsRtlAcquireFileExclusive(FileObject);
      KeAcquireInStackQueuedSpinLock(&CcMasterLock, &v49);
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      v14 = *(_DWORD *)(v5 + 4);
      if ( !v14
        && (!*(_DWORD *)(v5 + 112)
         && (*(_QWORD *)(v5 + 40) == 0x7FFFFFFFFFFFFFFFLL
          || (*(_DWORD *)(v5 + 152) & 0x400) == 0
          || FlushedValidData.QuadPart >= *(_QWORD *)(v5 + 48))
         || !*(_QWORD *)(v5 + 8) && (*(_DWORD *)(v5 + 152) & 4) == 0) )
      {
        CcDeleteSharedCacheMap((_QWORD *)v5, &v49, (__int64)&LockHandle, 1, FileObject);
        *((_QWORD *)v47 + 1) = 0LL;
LABEL_18:
        if ( v50 )
          KeSetEvent((PRKEVENT)(v3 + 32), 0, 0);
        return 1;
      }
      if ( *(_DWORD *)(v5 + 112) )
      {
        if ( (*(_DWORD *)(v5 + 152) & 0x10000) != 0 )
          CcCancelMmWaitForUninitializeCacheMap(v5);
      }
      else if ( !v14 )
      {
        CcInsertIntoDirtySharedCacheMapList(v5);
        v51 = 1;
      }
      KxReleaseQueuedSpinLock(&LockHandle);
      v16 = LockHandle.OldIrql;
      if ( KiIrqlFlags )
      {
        v28 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v28 <= 0xFu && LockHandle.OldIrql <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v30 = v29->SchedulerAssist;
          v31 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v27 = (v31 & v30[5]) == 0;
          v30[5] &= v31;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v29);
        }
      }
      __writecr8(v16);
      KxReleaseQueuedSpinLock(&v49);
      v17 = v49.OldIrql;
      if ( KiIrqlFlags )
      {
        v32 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v32 <= 0xFu && v49.OldIrql <= 0xFu && v32 >= 2u )
        {
          v33 = KeGetCurrentPrcb();
          v34 = v33->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (v49.OldIrql + 1));
          v27 = (v35 & v34[5]) == 0;
          v34[5] &= v35;
          if ( v27 )
            KiRemoveSystemWorkPriorityKick(v33);
        }
      }
      __writecr8(v17);
      FsRtlReleaseFile(FileObject);
      ObFastDereferenceObjectDeferDelete(v5 + 96, FileObject, 1666409283LL);
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      v8 = v53;
    }
  }
  v18 = v51;
LABEL_31:
  v19 = *(_DWORD *)(v5 + 152);
  if ( (v19 & 0x10000) == 0 || *(_BYTE *)(a1 + 136) )
  {
    if ( *((_QWORD *)v47 + 1) != 35422LL )
      *(_DWORD *)(v5 + 152) = v19 & 0xFFFFFFDF;
    if ( v18 )
    {
      if ( CcEnablePerVolumeLazyWriter )
        v41 = (_BYTE *)(*(_QWORD *)(v5 + 600) + 986LL);
      else
        v41 = (_BYTE *)(*(_QWORD *)(v5 + 536) + 1050LL);
      *v41 = 1;
      if ( _bittest((const signed __int32 *)(v5 + 152), 0x10u) )
      {
        LOBYTE(v10) = 1;
        LOBYTE(v9) = 1;
      }
      else
      {
        v10 = 0LL;
        v9 = 0LL;
      }
      CcScheduleLazyWriteScan(v8, v6, v9, v10);
    }
    KxReleaseQueuedSpinLock(&LockHandle);
    v20 = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v42 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v42 <= 0xFu && LockHandle.OldIrql <= 0xFu && v42 >= 2u )
      {
        v43 = KeGetCurrentPrcb();
        v44 = v43->SchedulerAssist;
        v45 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v27 = (v45 & v44[5]) == 0;
        v44[5] &= v45;
        if ( v27 )
          KiRemoveSystemWorkPriorityKick(v43);
      }
    }
    __writecr8(v20);
    goto LABEL_18;
  }
  KxReleaseQueuedSpinLock(&LockHandle);
  v36 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v37 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v37 <= 0xFu && LockHandle.OldIrql <= 0xFu && v37 >= 2u )
    {
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      v40 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v27 = (v40 & v39[5]) == 0;
      v39[5] &= v40;
      if ( v27 )
        KiRemoveSystemWorkPriorityKick(v38);
    }
  }
  __writecr8(v36);
  *(_BYTE *)(a1 + 137) = 1;
  return 0;
}
