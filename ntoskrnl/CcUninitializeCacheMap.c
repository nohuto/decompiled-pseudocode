/*
 * XREFs of CcUninitializeCacheMap @ 0x140336C50
 * Callers:
 *     CcPurgeCacheSection @ 0x1402A0EA0 (CcPurgeCacheSection.c)
 * Callees:
 *     CcDeleteSharedCacheMap @ 0x140217A10 (CcDeleteSharedCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x140219E50 (CcFreeWorkQueueEntry.c)
 *     CcDereferencePartition @ 0x140219EF0 (CcDereferencePartition.c)
 *     CcScheduleLazyWriteScan @ 0x140242B0C (CcScheduleLazyWriteScan.c)
 *     CcInsertIntoDirtySharedCacheMapList @ 0x140242BEC (CcInsertIntoDirtySharedCacheMapList.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     CcPurgeCacheSection @ 0x1402A0EA0 (CcPurgeCacheSection.c)
 *     IoDiskIoAttributionDereference @ 0x14030C4DC (IoDiskIoAttributionDereference.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140337B70 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     CcFreePrivateCacheMapIgnoreNull @ 0x140409DB0 (CcFreePrivateCacheMapIgnoreNull.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x140533834 (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

BOOLEAN __stdcall CcUninitializeCacheMap(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER TruncateSize,
        PCACHE_UNINITIALIZE_EVENT UninitializeEvent)
{
  __int64 v5; // r15
  __int64 v6; // r13
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  __int64 v9; // rdx
  PFILE_OBJECT v10; // r8
  PFILE_OBJECT *PrivateCacheMap; // r12
  char *SharedCacheMap; // rbx
  PFILE_OBJECT v13; // rax
  __int64 v14; // rdx
  _QWORD *p_Type; // rcx
  PFILE_OBJECT v16; // rdx
  PVOID *v17; // rcx
  unsigned __int64 v18; // rbx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  _DWORD *v21; // r9
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rdx
  unsigned __int64 v25; // rbx
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  _DWORD *v28; // r9
  int v29; // eax
  int v30; // eax
  bool v31; // bl
  BOOLEAN v32; // di
  _BYTE *v33; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v35; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v37; // r9
  int v38; // eax
  unsigned __int64 v39; // rbx
  unsigned __int8 v40; // al
  struct _KPRCB *v41; // r10
  _DWORD *v42; // r9
  int v43; // eax
  __int64 v44; // rcx
  PSLIST_ENTRY ListEntry; // [rsp+30h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v47; // [rsp+38h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-30h] BYREF
  struct _KLOCK_QUEUE_HANDLE v49; // [rsp+68h] [rbp-18h] BYREF
  bool v51; // [rsp+D8h] [rbp+58h]

  ListEntry = 0LL;
  *(_QWORD *)&v47.OldIrql = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v47.LockQueue.Lock = &CcMasterLock;
  memset(&v49, 0, sizeof(v49));
  v47.LockQueue.Next = 0LL;
  v5 = 0LL;
  v51 = 0;
  v6 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v9) = 4;
    else
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  v47.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v47, &CcMasterLock);
  }
  else if ( _InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v47) )
  {
    KxWaitForLockOwnerShip(&v47);
  }
  v10 = FileObject;
  PrivateCacheMap = (PFILE_OBJECT *)FileObject->PrivateCacheMap;
  SharedCacheMap = (char *)FileObject->SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v6 = 0LL;
    v5 = *((_QWORD *)SharedCacheMap + 67);
    if ( CcEnablePerVolumeLazyWriter )
      v6 = *((_QWORD *)SharedCacheMap + 75);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 + 1296)) <= 1 )
      __fastfail(0xEu);
    if ( v6 && _InterlockedIncrement64((volatile signed __int64 *)(v6 + 8)) <= 1 )
      __fastfail(0xEu);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 768), &LockHandle);
    v10 = FileObject;
  }
  if ( PrivateCacheMap )
  {
    if ( PrivateCacheMap[1] != v10 )
      KeBugCheckEx(0x34u, 0xAAEuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( !v5 )
      KeBugCheckEx(0x34u, 0xAB4uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( PrivateCacheMap[14] )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v5 + 832), &v49);
      v13 = PrivateCacheMap[14];
      if ( v13 )
      {
        v14 = *(_QWORD *)&v13->Type;
        ++CcDbgNumberOfNoopedReadAheads;
        p_Type = &v13->DeviceObject->Type;
        ListEntry = (PSLIST_ENTRY)v13;
        if ( *(PFILE_OBJECT *)(v14 + 8) != v13 || (PFILE_OBJECT)*p_Type != v13 )
          goto LABEL_36;
        *p_Type = v14;
        *(_QWORD *)(v14 + 8) = p_Type;
        v13->DeviceObject = 0LL;
        *(_QWORD *)&v13->Type = 0LL;
        if ( (PFILE_OBJECT)v13->Vpb != FileObject )
          KeBugCheckEx(0x34u, 0xAD5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        --*((_DWORD *)SharedCacheMap + 1);
        --*((_DWORD *)SharedCacheMap + 136);
      }
      KxReleaseQueuedSpinLock(&v49);
      v10 = FileObject;
    }
    --*((_DWORD *)SharedCacheMap + 1);
    v16 = PrivateCacheMap[12];
    v17 = (PVOID *)PrivateCacheMap[13];
    if ( (PFILE_OBJECT *)v16->DeviceObject == PrivateCacheMap + 12 && *v17 == PrivateCacheMap + 12 )
    {
      *v17 = v16;
      v16->DeviceObject = (PDEVICE_OBJECT)v17;
      if ( PrivateCacheMap == (PFILE_OBJECT *)(SharedCacheMap + 384) )
      {
        *(_WORD *)PrivateCacheMap = 0;
        PrivateCacheMap = 0LL;
      }
      v10->PrivateCacheMap = 0LL;
      goto LABEL_37;
    }
LABEL_36:
    __fastfail(3u);
  }
LABEL_37:
  if ( !SharedCacheMap )
  {
    if ( TruncateSize && !TruncateSize->QuadPart && v10->SectionObjectPointer->DataSectionObject )
    {
      if ( v5 )
        KeBugCheckEx(0x34u, 0xBFCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      KxReleaseQueuedSpinLock(&v47);
      OldIrql = v47.OldIrql;
      if ( KiIrqlFlags )
      {
        v35 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v35 <= 0xFu && v47.OldIrql <= 0xFu && v35 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v37 = CurrentPrcb->SchedulerAssist;
          v38 = ~(unsigned __int16)(-1LL << (v47.OldIrql + 1));
          v23 = (v38 & v37[5]) == 0;
          v37[5] &= v38;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      CcPurgeCacheSection(FileObject->SectionObjectPointer, TruncateSize, 0, 0);
    }
    else
    {
      KxReleaseQueuedSpinLock(&v47);
      v39 = v47.OldIrql;
      if ( KiIrqlFlags )
      {
        v40 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v40 <= 0xFu && v47.OldIrql <= 0xFu && v40 >= 2u )
        {
          v41 = KeGetCurrentPrcb();
          v42 = v41->SchedulerAssist;
          v24 = -1LL << (v47.OldIrql + 1);
          v43 = ~(unsigned __int16)v24;
          v23 = (v43 & v42[5]) == 0;
          v42[5] &= v43;
          if ( v23 )
            KiRemoveSystemWorkPriorityKick(v41);
        }
      }
      __writecr8(v39);
    }
    if ( UninitializeEvent )
      KeSetEvent(&UninitializeEvent->Event, 0, 0);
    goto LABEL_107;
  }
  if ( TruncateSize )
  {
    if ( TruncateSize->QuadPart || !*((_QWORD *)SharedCacheMap + 1) )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
        *((LARGE_INTEGER *)SharedCacheMap + 1) = *TruncateSize;
    }
    else
    {
      *((_DWORD *)SharedCacheMap + 38) |= 0x10u;
    }
  }
  if ( *((_DWORD *)SharedCacheMap + 1) )
  {
    if ( UninitializeEvent )
    {
      if ( *((char **)SharedCacheMap + 29) == SharedCacheMap + 232 )
      {
        UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
        *((_QWORD *)SharedCacheMap + 35) = UninitializeEvent;
        v51 = (v10->DeviceObject->Characteristics & 0x10) != 0;
      }
      else
      {
        KeSetEvent(&UninitializeEvent->Event, 0, 0);
      }
    }
    goto LABEL_49;
  }
  if ( *((char **)SharedCacheMap + 29) != SharedCacheMap + 232 )
    KeBugCheckEx(0x34u, 0xB51uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( UninitializeEvent )
  {
    UninitializeEvent->Next = (_CACHE_UNINITIALIZE_EVENT *)*((_QWORD *)SharedCacheMap + 35);
    *((_QWORD *)SharedCacheMap + 35) = UninitializeEvent;
    v51 = (v10->DeviceObject->Characteristics & 0x10) != 0;
  }
  v30 = *((_DWORD *)SharedCacheMap + 38);
  if ( (v30 & 4) != 0 || UninitializeEvent )
  {
    if ( (v30 & 0x20) == 0 )
    {
      if ( !*((_DWORD *)SharedCacheMap + 28)
        && ((v30 & 0x400) == 0 || *((_QWORD *)SharedCacheMap + 5) == 0x7FFFFFFFFFFFFFFFLL) )
      {
        CcDeleteSharedCacheMap(SharedCacheMap, &v47, (__int64)&LockHandle, 0, 0LL);
        v31 = 0;
        v32 = 1;
        goto LABEL_108;
      }
      goto LABEL_75;
    }
  }
  else if ( (v30 & 0x20) == 0 )
  {
LABEL_75:
    CcInsertIntoDirtySharedCacheMapList((__int64)SharedCacheMap);
  }
  if ( CcEnablePerVolumeLazyWriter )
    v33 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 75) + 986LL);
  else
    v33 = (_BYTE *)(*((_QWORD *)SharedCacheMap + 67) + 1050LL);
  *v33 = 1;
  if ( *(_BYTE *)(v5 + 1294) )
  {
    *((_DWORD *)SharedCacheMap + 38) |= 0x10000u;
    LOBYTE(v10) = 1;
    CcScheduleLazyWriteScan((_BYTE *)v5, v6, (__int64)v10, 1);
  }
  else if ( !UninitializeEvent || (*((_DWORD *)SharedCacheMap + 38) & 0x20) != 0 )
  {
    LOBYTE(v10) = 0;
    CcScheduleLazyWriteScan((_BYTE *)v5, v6, (__int64)v10, 0);
  }
  else
  {
    LOBYTE(v10) = 1;
    CcScheduleLazyWriteScan((_BYTE *)v5, v6, (__int64)v10, 1);
  }
LABEL_49:
  KxReleaseQueuedSpinLock(&LockHandle);
  v18 = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    v19 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v19 <= 0xFu && LockHandle.OldIrql <= 0xFu && v19 >= 2u )
    {
      v20 = KeGetCurrentPrcb();
      v21 = v20->SchedulerAssist;
      v22 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v23 = (v22 & v21[5]) == 0;
      v21[5] &= v22;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(v20);
    }
  }
  __writecr8(v18);
  KxReleaseQueuedSpinLock(&v47);
  v25 = v47.OldIrql;
  if ( KiIrqlFlags )
  {
    v26 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v26 <= 0xFu && v47.OldIrql <= 0xFu && v26 >= 2u )
    {
      v27 = KeGetCurrentPrcb();
      v28 = v27->SchedulerAssist;
      v24 = -1LL << (v47.OldIrql + 1);
      v29 = ~(unsigned __int16)v24;
      v23 = (v29 & v28[5]) == 0;
      v28[5] &= v29;
      if ( v23 )
        KiRemoveSystemWorkPriorityKick(v27);
    }
  }
  __writecr8(v25);
LABEL_107:
  v31 = v51;
  v32 = 0;
LABEL_108:
  if ( EnableFeatureServicing_45016043 )
  {
    CcFreePrivateCacheMapIgnoreNull(PrivateCacheMap);
  }
  else if ( PrivateCacheMap )
  {
    ExFreePoolWithTag(PrivateCacheMap, 0);
  }
  if ( v31 )
  {
    LOBYTE(v24) = 1;
    CcAdjustWriteBehindThreadPoolIfNeeded(v5, v24);
  }
  if ( ListEntry )
  {
    ObfDereferenceObject(FileObject);
    v44 = *((_QWORD *)&ListEntry[1].Next + 1);
    if ( v44 )
      IoDiskIoAttributionDereference(v44);
    CcFreeWorkQueueEntry(ListEntry);
  }
  if ( v5 )
  {
    CcDereferencePartition(v5);
    if ( v6 )
    {
      if ( _InterlockedDecrement64((volatile signed __int64 *)(v6 + 8)) <= -1 )
        __fastfail(0xEu);
    }
  }
  return v32;
}
