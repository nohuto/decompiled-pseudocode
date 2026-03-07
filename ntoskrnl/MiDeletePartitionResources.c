void __fastcall MiDeletePartitionResources(__int64 a1)
{
  _QWORD *v2; // rcx
  int SessionId; // esi
  unsigned __int64 v4; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v7; // zf
  signed __int32 v8; // eax
  HANDLE *v9; // rbx
  __int64 v10; // r14
  HANDLE v11; // rbp
  struct _KTHREAD *CurrentThread; // r12
  __int64 v13; // r13
  ULONG_PTR v14; // rbp
  __int64 v15; // rbx
  struct _KTHREAD *v16; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v18; // ecx
  struct _KPRCB *v19; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  KIRQL v23; // al
  unsigned __int64 *v24; // rcx
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // r12
  unsigned __int64 *v27; // rax
  unsigned __int64 *v28; // r14
  unsigned __int64 *v29; // rcx
  _QWORD *v30; // rdx
  bool v31; // r8
  _QWORD *v32; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  __int64 v37; // rsi
  void *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rbx
  void *v43; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v44; // rcx
  void *v45; // rcx
  void *v46; // rcx
  struct _KTHREAD *v47; // [rsp+20h] [rbp-58h]
  unsigned int v48; // [rsp+80h] [rbp+8h]
  _QWORD *v49; // [rsp+90h] [rbp+18h] BYREF

  v2 = *(_QWORD **)(a1 + 200);
  v49 = 0LL;
  CcExitPartition(v2, 1);
  MiStoreDeletePartition(a1);
  SmDeletePartition(*(_QWORD *)(a1 + 200));
  KeSetEvent((PRKEVENT)(a1 + 104), 1, 0);
  SessionId = -1;
  if ( !*(_BYTE *)(a1 + 17052) )
    goto LABEL_14;
  MiUnlinkWorkingSet(a1 + 17344, 0LL);
  v4 = *(_QWORD *)(a1 + 17456);
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    goto LABEL_12;
  CurrentPrcb = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_12;
  if ( v4 + CachedResidentAvailable > 0x100 || v4 >= 0x80000 )
  {
LABEL_9:
    if ( (int)CachedResidentAvailable > 192
      && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                              192,
                                              CachedResidentAvailable) )
    {
      v4 += (int)CachedResidentAvailable - 192;
    }
LABEL_12:
    if ( v4 )
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 17280), v4);
    goto LABEL_14;
  }
  while ( 1 )
  {
    v8 = _InterlockedCompareExchange(
           (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
           v4 + CachedResidentAvailable,
           CachedResidentAvailable);
    v7 = (_DWORD)CachedResidentAvailable == v8;
    LODWORD(CachedResidentAvailable) = v8;
    if ( v7 )
      break;
    if ( v8 == -1 || v4 + v8 > 0x100 )
      goto LABEL_9;
  }
LABEL_14:
  v9 = (HANDLE *)(a1 + 152);
  v10 = 6LL;
  do
  {
    v11 = *v9;
    if ( *v9 )
    {
      ZwWaitForSingleObject(*v9, 0, 0LL);
      ObCloseHandle(v11, 0);
    }
    ++v9;
    --v10;
  }
  while ( v10 );
  MiFreeClonePool(a1);
  MiEmptyKernelStackCache((union _SLIST_HEADER *)a1, 1);
  *(_QWORD *)(a1 + 17816) -= MiDeletePagingFiles(a1);
  MiEnumerateSlabAllocators(
    a1,
    (unsigned int (__fastcall *)(__int64, unsigned __int64, __int64))MiDeleteSlabAllocator,
    0LL,
    0xFFFFFFFF);
  CurrentThread = KeGetCurrentThread();
  v47 = CurrentThread;
  v13 = **(_QWORD **)(*(_QWORD *)(a1 + 200) + 64LL);
  MiRemoveLowestPriorityStandbyPage(a1, 8u, 0);
  --CurrentThread->SpecialApcDisable;
  v14 = a1 + 216;
  v15 = 0LL;
  v16 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v16->AbEntrySummary;
  if ( v16->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 216, (__int64)v16)) != 0 )
  {
    _BitScanForward(&v18, AbEntrySummary);
    v48 = v18;
    v16->AbEntrySummary = AbEntrySummary & ~(1 << v18);
    v19 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v19->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v21 = *SchedulerAssist;
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v19);
    }
    _enable();
    v15 = (__int64)(&v16[1].Process + 12 * v48);
    if ( v14 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
    *(_DWORD *)(v15 + 8) = SessionId;
    *(_QWORD *)v15 = v14 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 216), v15, a1 + 216);
  if ( v15 )
    *(_BYTE *)(v15 + 18) = 1;
  MiLockDynamicMemoryNestedParentExclusive(a1);
  MiFreePartitionPhysicalPages(a1, v13);
  if ( (unsigned __int16 *)v13 == MiSystemPartition )
  {
    MiDeletePartitionPageNodes((unsigned __int64 *)(a1 + 24));
    goto LABEL_63;
  }
  v23 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v13 + 224));
  v24 = *(unsigned __int64 **)(a1 + 24);
  v25 = 0LL;
  v26 = v23;
  while ( v24 )
  {
    v25 = v24;
    v24 = (unsigned __int64 *)*v24;
  }
  if ( v25 )
  {
LABEL_38:
    v27 = (unsigned __int64 *)v25[1];
    v28 = v25;
    v29 = v25;
    if ( v27 )
    {
      do
      {
        v25 = v27;
        v27 = (unsigned __int64 *)*v27;
      }
      while ( v27 );
    }
    else
    {
      while ( 1 )
      {
        v25 = (unsigned __int64 *)(v25[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v25 || (unsigned __int64 *)*v25 == v29 )
          break;
        v29 = v25;
      }
    }
    RtlAvlRemoveNode((unsigned __int64 *)(a1 + 24), v28);
    if ( !(unsigned int)MiMergePageNodes(v13, v28, 0LL) )
      goto LABEL_53;
    v30 = v49;
    v31 = 0;
    if ( !v49 )
      goto LABEL_52;
    while ( 1 )
    {
      if ( (v28[3] & 0x3FFFFFFFFFFFFFFFLL) >= (v30[3] & 0x3FFFFFFFFFFFFFFFuLL) )
      {
        v32 = (_QWORD *)v30[1];
        if ( !v32 )
        {
          v31 = 1;
LABEL_52:
          RtlAvlInsertNodeEx((unsigned __int64 *)&v49, (unsigned __int64)v30, v31, (unsigned __int64)v28);
LABEL_53:
          if ( !v25 )
          {
            v14 = a1 + 216;
            break;
          }
          goto LABEL_38;
        }
      }
      else
      {
        v32 = (_QWORD *)*v30;
        if ( !*v30 )
        {
          v31 = 0;
          goto LABEL_52;
        }
      }
      v30 = v32;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v13 + 224));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v26 <= 0xFu && CurrentIrql >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v26 + 1));
      v7 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v7 )
        KiRemoveSystemWorkPriorityKick((__int64)v34);
    }
  }
  __writecr8(v26);
  MiMakePartitionMemoryBlock(v13);
  CurrentThread = v47;
LABEL_63:
  v37 = **(_QWORD **)(*(_QWORD *)(a1 + 200) + 64LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v37 + 216));
  KeAbPostRelease(v37 + 216);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v14);
  KeAbPostRelease(v14);
  v7 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v7 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  MiDeletePartitionPageNodes((unsigned __int64 *)&v49);
  v38 = *(void **)(a1 + 16920);
  if ( v38 )
  {
    ExFreePoolWithTag(v38, 0);
    *(_QWORD *)(a1 + 16920) = 0LL;
  }
  v39 = *(_QWORD *)(a1 + 96);
  if ( v39 )
    MiDereferencePageRunsEx(v39, 0);
  v40 = *(_QWORD *)(a1 + 32);
  if ( v40 )
    MiDereferencePageRunsEx(v40, 0);
  MiDeleteSpecialPurposeMemory(a1);
  MiDeletePfnBitMaps(a1);
  v41 = 11LL;
  v42 = a1 + 272;
  do
  {
    v43 = *(void **)(v42 + 88);
    if ( v43 )
      ObCloseHandle(v43, 0);
    if ( *(_QWORD *)v42 != a1 + 232 )
      ObfDereferenceObjectWithTag(*(PVOID *)v42, 0x746C6644u);
    v42 += 8LL;
    --v41;
  }
  while ( v41 );
  v44 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 2432);
  if ( v44 )
    ExFreeCacheAwareRundownProtection(v44);
  v45 = *(void **)(a1 + 264);
  if ( v45 )
    ObCloseHandle(v45, 0);
  v46 = *(void **)(a1 + 256);
  if ( v46 )
    ObCloseHandle(v46, 0);
}
