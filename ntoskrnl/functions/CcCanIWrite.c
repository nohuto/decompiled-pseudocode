BOOLEAN __stdcall CcCanIWrite(PFILE_OBJECT FileObject, ULONG BytesToWrite, BOOLEAN Wait, UCHAR Retrying)
{
  PFILE_OBJECT v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v7; // rdx
  ULONG Flags; // eax
  unsigned __int8 CurrentIrql; // r8
  _DWORD *SchedulerAssist; // r10
  signed __int64 *v11; // rdx
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rcx
  _QWORD *SharedCacheMap; // rax
  __int64 v14; // r14
  struct _LIST_ENTRY *v15; // r12
  _BYTE *v16; // r13
  _QWORD *v17; // rax
  PVPB Vpb; // rcx
  PDEVICE_OBJECT DeviceObject; // rcx
  __int64 *v20; // rax
  __int64 *v21; // rcx
  __int64 *v22; // rax
  PSECTION_OBJECT_POINTERS v23; // rcx
  bool v24; // si
  _DWORD *v25; // rax
  PVOID v26; // rax
  __int64 v27; // rax
  unsigned __int8 v28; // cl
  unsigned __int64 v29; // rdi
  unsigned __int8 v30; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v32; // r9
  int v33; // eax
  bool v34; // zf
  char v35; // si
  ULONG v36; // ecx
  BOOLEAN v37; // di
  BOOLEAN CanIWriteStream; // al
  _QWORD *v39; // r13
  KSPIN_LOCK *v40; // r8
  __int64 v41; // r8
  unsigned __int64 OldIrql; // rdi
  unsigned __int8 v43; // al
  struct _KPRCB *v44; // r10
  _DWORD *v45; // r9
  int v46; // eax
  _BYTE *v47; // r12
  __int64 v48; // r8
  unsigned __int64 v49; // rdi
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  char v54; // si
  unsigned __int8 v55; // dl
  _DWORD *v56; // r9
  __int64 v57; // r10
  signed __int64 *v58; // rdx
  int v59; // eax
  int v60; // eax
  _QWORD **v61; // rdx
  PVOID *v62; // rcx
  void *v63; // rcx
  __int64 v64; // rax
  unsigned __int8 v65; // cl
  unsigned __int64 v66; // rbx
  unsigned __int8 v67; // cl
  struct _KPRCB *v68; // r10
  _DWORD *v69; // r9
  int v70; // eax
  int v71; // ebx
  signed __int64 v72; // rax
  bool v73; // cc
  signed __int64 v74; // rax
  signed __int32 v75[8]; // [rsp+0h] [rbp-100h] BYREF
  char v76; // [rsp+40h] [rbp-C0h] BYREF
  char v77; // [rsp+41h] [rbp-BFh]
  char v78; // [rsp+42h] [rbp-BEh]
  int v79; // [rsp+44h] [rbp-BCh]
  PVOID P; // [rsp+48h] [rbp-B8h]
  __int128 v81; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v82; // [rsp+60h] [rbp-A0h]
  __int64 v83; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int64 *v84; // [rsp+70h] [rbp-90h]
  __int64 v85; // [rsp+78h] [rbp-88h]
  _BYTE *v86; // [rsp+80h] [rbp-80h]
  __int64 Object; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v88[2]; // [rsp+90h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER Interval; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v91; // [rsp+C0h] [rbp-40h]
  __int64 v92; // [rsp+D0h] [rbp-30h]
  PFILE_OBJECT v93; // [rsp+D8h] [rbp-28h]
  struct _LIST_ENTRY ListEntry; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v95; // [rsp+F0h] [rbp-10h]
  __int64 *p_Object; // [rsp+F8h] [rbp-8h]
  __int128 v97; // [rsp+100h] [rbp+0h]
  __int64 v98; // [rsp+110h] [rbp+10h]
  __int64 v99; // [rsp+118h] [rbp+18h]
  __int128 v100; // [rsp+120h] [rbp+20h]
  __int64 v101; // [rsp+130h] [rbp+30h]
  __int128 v102; // [rsp+140h] [rbp+40h]
  __int64 v103; // [rsp+150h] [rbp+50h]
  void *retaddr; // [rsp+1A8h] [rbp+A8h]

  v82 = 0LL;
  v81 = 0LL;
  v4 = FileObject;
  v78 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v77 = 0;
  v5 = 0LL;
  v79 = 0;
  P = 0LL;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0 )
    return 1;
  v7 = 4LL;
  v91 = 4LL;
  if ( !FileObject )
  {
    v14 = *((_QWORD *)PspSystemPartition + 1);
    v86 = (_BYTE *)(v14 + 1292);
    v15 = (struct _LIST_ENTRY *)(v14 + 1168);
    v16 = (_BYTE *)(v14 + 780);
    goto LABEL_67;
  }
  Flags = FileObject->Flags;
  if ( (Flags & 0x10) != 0 || (Flags & 0x1000000) != 0 )
    return 1;
  *((_QWORD *)&v81 + 1) = &CcMasterLock;
  *(_QWORD *)&v81 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql != 2 )
      v7 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v7;
  }
  LOBYTE(v82) = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v81, &CcMasterLock);
  }
  else
  {
    v11 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v81);
    if ( v11 )
      KxWaitForLockOwnerShip((signed __int64)&v81, v11);
  }
  SectionObjectPointer = v4->SectionObjectPointer;
  if ( SectionObjectPointer && (SharedCacheMap = SectionObjectPointer->SharedCacheMap) != 0LL )
    v14 = SharedCacheMap[67];
  else
    v14 = *((_QWORD *)PspSystemPartition + 1);
  if ( CcEnablePerVolumeLazyWriter )
  {
    if ( SectionObjectPointer && (v17 = SectionObjectPointer->SharedCacheMap) != 0LL )
    {
      v5 = v17[75];
    }
    else
    {
      Vpb = v4->Vpb;
      if ( Vpb )
        DeviceObject = Vpb->DeviceObject;
      else
        DeviceObject = v4->DeviceObject;
      v20 = (__int64 *)CcVolumeCacheMapList;
      if ( (__int64 *)CcVolumeCacheMapList != &CcVolumeCacheMapList )
      {
        while ( (PDEVICE_OBJECT)*(v20 - 1) != DeviceObject )
        {
          v20 = (__int64 *)*v20;
          if ( v20 == &CcVolumeCacheMapList )
            goto LABEL_36;
        }
        v21 = v20 + 24;
        v22 = (__int64 *)v20[24];
        if ( v22 == v21 )
        {
LABEL_35:
          v5 = 0LL;
        }
        else
        {
          while ( 1 )
          {
            v5 = (__int64)(v22 - 74);
            if ( *(v22 - 70) == v14 )
              break;
            v22 = (__int64 *)*v22;
            if ( v22 == v21 )
              goto LABEL_35;
          }
        }
      }
    }
LABEL_36:
    v86 = (_BYTE *)(v5 + 1172);
    v15 = (struct _LIST_ENTRY *)(v5 + 1104);
    v16 = (_BYTE *)(v5 + 708);
  }
  else
  {
    v86 = (_BYTE *)(v14 + 1292);
    v15 = (struct _LIST_ENTRY *)(v14 + 1168);
    v16 = (_BYTE *)(v14 + 780);
  }
  v7 = 1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1296)) <= 1 )
    __fastfail(0xEu);
  if ( v5 && _InterlockedIncrement64((volatile signed __int64 *)(v5 + 8)) <= 1 )
    __fastfail(0xEu);
  v23 = v4->SectionObjectPointer;
  v24 = 0;
  v78 = 1;
  v103 = 0LL;
  v102 = 0LL;
  if ( v23 )
  {
    v25 = v23->SharedCacheMap;
    if ( v25 )
      v24 = (v25[38] & 0x40000000) != 0;
  }
  if ( !byte_140C5F501 )
  {
    if ( v23 )
    {
      v26 = v23->SharedCacheMap;
      if ( v26 )
      {
        P = (PVOID)*((_QWORD *)v26 + 64);
        v77 = 1;
        ++*((_DWORD *)P + 1);
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v81, retaddr);
  }
  else
  {
    _m_prefetchw(&v81);
    v27 = v81;
    if ( !(_QWORD)v81 )
    {
      if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v81 + 1), 0LL, (signed __int64)&v81) == &v81 )
        goto LABEL_56;
      v27 = KxWaitForLockChainValid((__int64 *)&v81);
    }
    v7 = v27 + 8;
    *(_QWORD *)&v81 = 0LL;
    v28 = BYTE8(v81);
    if ( ((v28 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v27 + 8), *((__int64 *)&v81 + 1))) & 4) != 0 )
    {
      _InterlockedOr(v75, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[(v7 >> 5) & 0x7F], 0LL));
    }
  }
LABEL_56:
  v29 = (unsigned __int8)v82;
  if ( KiIrqlFlags )
  {
    v30 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v30 <= 0xFu && (unsigned __int8)v82 <= 0xFu && v30 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v32 = CurrentPrcb->SchedulerAssist;
      v7 = -1LL << ((unsigned __int8)v82 + 1);
      v33 = ~(unsigned __int16)v7;
      v34 = (v33 & v32[5]) == 0;
      v32[5] &= v33;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v29);
  if ( v24 )
    goto LABEL_121;
  if ( !CcEnablePerVolumeLazyWriter )
    goto LABEL_69;
  if ( !v5 )
    goto LABEL_121;
  v4 = FileObject;
LABEL_67:
  if ( !CcEnablePerVolumeLazyWriter || v4 )
  {
    while ( 1 )
    {
LABEL_69:
      ++v79;
      v35 = 0;
      v36 = BytesToWrite;
      v37 = 0;
      v76 = 0;
      if ( Retrying
        || v15->Flink == v15
        || CcAzure_LargeWriteSize && BytesToWrite && BytesToWrite >= CcAzure_LargeWriteSize )
      {
        CanIWriteStream = CcCanIWriteStreamEx(v14, v5, (_DWORD)FileObject, BytesToWrite, 0, 0, (__int64)&v76);
        v35 = v76;
        v37 = CanIWriteStream;
        if ( CanIWriteStream && !v76 || v79 == 2 && CanIWriteStream )
          goto LABEL_121;
        v36 = BytesToWrite;
      }
      if ( (xmmword_140D1EAD0 & 0x20000) != 0 )
        CcPerfLogCanWriteFail(FileObject, v36, *(_QWORD *)(v14 + 1056), *(_QWORD *)(v14 + 1080));
      LOBYTE(v7) = 1;
      CcAdjustWriteBehindThreadPoolIfNeeded(v14, v7);
      if ( Wait )
        break;
      if ( v79 != 1 )
      {
        v39 = P;
        if ( P )
          ++*((_QWORD *)P + 49);
        goto LABEL_123;
      }
      if ( !v37 )
      {
        v37 = 0;
        goto LABEL_122;
      }
      if ( !v35 )
        goto LABEL_121;
      Interval.HighPart = -1;
      Interval.LowPart = -10000 * CcSoftThrottleDelay;
      DbgPrintEx(0x7Fu, 2u, "CcCanIWrite: will delay %lums before retrying async-write\n", CcSoftThrottleDelay);
      if ( P )
        ++*((_QWORD *)P + 50);
      KeDelayExecutionThread(0, 0, &Interval);
    }
    Object = 393216LL;
    v88[1] = v88;
    v88[0] = v88;
    v93 = FileObject;
    v92 = 6816508LL;
    v95 = 0LL;
    p_Object = &Object;
    ListEntry = 0LL;
    LODWORD(ListEntry.Flink) = BytesToWrite;
    v98 = 0LL;
    v99 = v14;
    v100 = (unsigned __int64)v5;
    v97 = 0LL;
    v101 = MEMORY[0xFFFFF78000000320];
    if ( !v37 || (BYTE8(v100) = 1, !v76) )
      BYTE8(v100) = 0;
    v40 = (KSPIN_LOCK *)(v14 + 1216);
    if ( Retrying )
      ExInterlockedInsertHeadList(v15, (PLIST_ENTRY)&ListEntry.Blink, v40);
    else
      ExInterlockedInsertTailList(v15, (PLIST_ENTRY)&ListEntry.Blink, v40);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &LockHandle);
    LOBYTE(v41) = 1;
    CcScheduleLazyWriteScan((_BYTE *)v14, v5, v41, 0);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      v43 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v43 <= 0xFu && LockHandle.OldIrql <= 0xFu && v43 >= 2u )
      {
        v44 = KeGetCurrentPrcb();
        v45 = v44->SchedulerAssist;
        v46 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v34 = (v46 & v45[5]) == 0;
        v45[5] &= v46;
        if ( v34 )
          KiRemoveSystemWorkPriorityKick(v44);
      }
    }
    __writecr8(OldIrql);
    CcPostDeferredWrites(v14, v5);
    if ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) )
    {
      v47 = v86;
      do
      {
        if ( *v47 || *v16 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 768), &LockHandle);
          LOBYTE(v48) = 1;
          CcScheduleLazyWriteScan((_BYTE *)v14, v5, v48, 0);
          if ( *v16 )
            *v16 = 0;
          KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
          v49 = LockHandle.OldIrql;
          if ( KiIrqlFlags )
          {
            v50 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v50 <= 0xFu && LockHandle.OldIrql <= 0xFu && v50 >= 2u )
            {
              v51 = KeGetCurrentPrcb();
              v52 = v51->SchedulerAssist;
              v53 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
              v34 = (v53 & v52[5]) == 0;
              v52[5] &= v53;
              if ( v34 )
                KiRemoveSystemWorkPriorityKick(v51);
            }
          }
          __writecr8(v49);
        }
        CcPostDeferredWrites(v14, v5);
      }
      while ( KeWaitForSingleObject(&Object, Executive, 0, 0, &CcIdleDelay) );
    }
  }
LABEL_121:
  v37 = 1;
LABEL_122:
  v39 = P;
LABEL_123:
  if ( !v77 )
    goto LABEL_158;
  ++v39[48];
  v84 = (volatile signed __int64 *)&CcMasterLock;
  v54 = 0;
  v83 = 0LL;
  v85 = 0LL;
  v55 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v55 <= 0xFu )
  {
    v56 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v55 == 2 )
      LODWORD(v57) = v91;
    else
      v57 = (-1LL << (v55 + 1)) & 4;
    v56[5] |= v57;
  }
  LOBYTE(v85) = v55;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v83, &CcMasterLock);
  }
  else
  {
    v58 = (signed __int64 *)_InterlockedExchange64((volatile __int64 *)&CcMasterLock, (__int64)&v83);
    if ( v58 )
      KxWaitForLockOwnerShip((signed __int64)&v83, v58);
  }
  v59 = *((_DWORD *)v39 + 1);
  if ( !v59 )
    KeBugCheckEx(0x34u, 0x645uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v60 = v59 - 1;
  *((_DWORD *)v39 + 1) = v60;
  if ( !v60 )
  {
    v61 = (_QWORD **)v39[2];
    v62 = (PVOID *)v39[3];
    v54 = 1;
    if ( v61[1] != v39 + 2 || *v62 != v39 + 2 )
      __fastfail(3u);
    *v62 = v61;
    v61[1] = v62;
    _InterlockedDecrement64(&qword_140C5F508);
    v63 = (void *)v39[20];
    if ( v63 )
    {
      ObfDereferenceObject(v63);
      v39[20] = 0LL;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v83, retaddr);
    goto LABEL_149;
  }
  _m_prefetchw(&v83);
  v64 = v83;
  if ( v83 )
  {
LABEL_147:
    v83 = 0LL;
    v65 = (unsigned __int8)v84;
    if ( ((v65 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v64 + 8), (__int64)v84)) & 4) != 0 )
    {
      _InterlockedOr(v75, 0);
      KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v64 + 8) >> 5) & 0x7F], 0LL));
    }
    goto LABEL_149;
  }
  if ( (__int64 *)_InterlockedCompareExchange64(v84, 0LL, (signed __int64)&v83) != &v83 )
  {
    v64 = KxWaitForLockChainValid(&v83);
    goto LABEL_147;
  }
LABEL_149:
  v66 = (unsigned __int8)v85;
  if ( KiIrqlFlags )
  {
    v67 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v67 <= 0xFu && (unsigned __int8)v85 <= 0xFu && v67 >= 2u )
    {
      v68 = KeGetCurrentPrcb();
      v69 = v68->SchedulerAssist;
      v70 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v85 + 1));
      v34 = (v70 & v69[5]) == 0;
      v69[5] &= v70;
      if ( v34 )
        KiRemoveSystemWorkPriorityKick(v68);
    }
  }
  __writecr8(v66);
  if ( v54 )
  {
    v71 = *((_DWORD *)v39 + 51);
    ExFreePoolWithTag(v39, 0x6D566343u);
    DbgPrintEx(
      0x7Fu,
      3u,
      "[%04x:%04x]CcDecrementVolumeUseCountWithDelete: VCM:%p(vid:%2lx) Freed!\n",
      LODWORD(KeGetCurrentThread()[1].CycleTime),
      KeGetCurrentThread()[1].CurrentRunTime,
      v39,
      v71);
  }
LABEL_158:
  if ( v78 )
  {
    v72 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 1296), 0xFFFFFFFFFFFFFFFFuLL);
    v73 = v72 <= 1;
    v74 = v72 - 1;
    if ( v73 )
    {
      if ( v74 )
        __fastfail(0xEu);
      KeSetEvent((PRKEVENT)(v14 + 1328), 0, 0);
    }
    if ( v5 && _InterlockedDecrement64((volatile signed __int64 *)(v5 + 8)) <= -1 )
      __fastfail(0xEu);
  }
  return v37;
}
