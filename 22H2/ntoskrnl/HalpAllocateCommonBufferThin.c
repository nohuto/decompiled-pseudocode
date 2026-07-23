/*
 * XREFs of HalpAllocateCommonBufferThin @ 0x1404CB230
 * Callers:
 *     HalAllocateCommonBufferExThin @ 0x1404CA940 (HalAllocateCommonBufferExThin.c)
 *     HalAllocateCommonBufferWithBoundsThin @ 0x1404CAA10 (HalAllocateCommonBufferWithBoundsThin.c)
 *     HalAllocateDomainCommonBufferThin @ 0x1404CAA90 (HalAllocateDomainCommonBufferThin.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x140226C80 (MmMapLockedPagesSpecifyCache.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     MiFreePagesFromMdl @ 0x14027FB6C (MiFreePagesFromMdl.c)
 *     MmUnmapLockedPages @ 0x14029D0C0 (MmUnmapLockedPages.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmAllocatePagesForMdlEx @ 0x1403547F0 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x140354850 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     HalpDmaReferenceDomainObject @ 0x1403A0D14 (HalpDmaReferenceDomainObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4A38 (HalpDmaDereferenceDomainObject.c)
 *     HalpDomainLaAllocate @ 0x1404C4C54 (HalpDomainLaAllocate.c)
 *     HalpDomainLaDelete @ 0x1404C4D34 (HalpDomainLaDelete.c)
 *     HalpIommuDomainMapLogical @ 0x1404C91B0 (HalpIommuDomainMapLogical.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateCommonBufferThin(
        _QWORD *BugCheckParameter3,
        __int64 *a2,
        __int64 *a3,
        unsigned int a4,
        char a5,
        MEMORY_CACHING_TYPE *a6,
        unsigned int a7,
        __int64 *a8,
        _RTL_BALANCED_NODE **a9)
{
  struct _MDL *v9; // rsi
  SIZE_T v12; // r14
  _RTL_BALANCED_NODE *v14; // r15
  int v15; // edi
  __int64 v16; // rax
  MEMORY_CACHING_TYPE CacheType; // edi
  unsigned int v18; // ecx
  __int64 v19; // r8
  PHYSICAL_ADDRESS v20; // rdx
  struct _MDL *PagesForMdl; // rax
  __int64 v22; // r8
  __int64 *v23; // r9
  __int64 *v24; // rcx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // r14
  unsigned int v28; // ecx
  _RTL_BALANCED_NODE *PoolWithTag; // rax
  _RTL_BALANCED_NODE *v30; // r13
  __int64 v31; // r8
  KSPIN_LOCK *v33; // r12
  KIRQL v34; // al
  ULONG_PTR v35; // rbp
  unsigned __int64 v36; // rsi
  ULONG_PTR v37; // rdx
  BOOLEAN v38; // r8
  unsigned __int64 v39; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v43; // eax
  bool v44; // zf
  __int64 v45; // [rsp+40h] [rbp-38h] BYREF
  __int64 v46; // [rsp+48h] [rbp-30h] BYREF
  __int64 v47; // [rsp+50h] [rbp-28h] BYREF

  v47 = 0LL;
  v9 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v12 = a4;
  v14 = 0LL;
  v15 = HalpDmaReferenceDomainObject((__int64)BugCheckParameter3);
  if ( v15 < 0 )
    return (unsigned int)v15;
  v16 = BugCheckParameter3[9];
  if ( v16 )
    *(_BYTE *)(v16 + 516) = 1;
  CacheType = MmCached;
  if ( a6 )
  {
    CacheType = *a6;
    if ( *a6 > (unsigned int)MmCached )
    {
      v15 = -1073741811;
LABEL_27:
      HalpDmaDereferenceDomainObject(BugCheckParameter3);
      if ( v14 )
        MmUnmapLockedPages(v14, v9);
      if ( v9 )
        MiFreePagesFromMdl((ULONG_PTR)v9, 0, v31);
      return (unsigned int)v15;
    }
  }
  if ( (a5 & 1) != 0 )
  {
    v18 = 1;
    v12 = ((_DWORD)v12 + 0x1FFFFF) & 0xFFE00000;
    do
    {
      if ( 1LL << v18 >= (unsigned __int64)(unsigned int)v12 )
        break;
      ++v18;
    }
    while ( v18 < 0x3F );
  }
  v19 = BugCheckParameter3[3];
  v20 = (PHYSICAL_ADDRESS)BugCheckParameter3[2];
  if ( a7 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(0LL, v20, (PHYSICAL_ADDRESS)v19, v12, CacheType, 0x14u);
  else
    PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(0, v20.LowPart, v19, v12, CacheType, a7, 20, 0LL);
  v9 = PagesForMdl;
  if ( !PagesForMdl
    || (v14 = (_RTL_BALANCED_NODE *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, CacheType, 0LL, 0, 0x40000010u)) == 0LL )
  {
    v15 = -1073741670;
    goto LABEL_27;
  }
  LODWORD(v23) = 0;
  v24 = 0LL;
  if ( a2 )
  {
    v23 = &v46;
    v46 = *a2;
  }
  if ( a3 )
  {
    v24 = &v47;
    v47 = *a3;
  }
  v25 = HalpDomainLaAllocate((__int64)BugCheckParameter3, v12, v22, (int)v23, (__int64)v24, (__int64)&v45);
  v27 = v45;
  v15 = v25;
  if ( v25 < 0
    || (v28 = v9->ByteCount + v9->ByteOffset,
        v15 = HalpIommuDomainMapLogical(
                BugCheckParameter3[5],
                v26,
                (int)v9 + 48,
                (v28 >> 12) + ((v28 & 0xFFF) != 0),
                v45),
        v15 < 0) )
  {
LABEL_25:
    if ( v27 )
      HalpDomainLaDelete((__int64)BugCheckParameter3, v27);
    goto LABEL_27;
  }
  PoolWithTag = (_RTL_BALANCED_NODE *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x206C6148u);
  v30 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v15 = -1073741670;
    goto LABEL_25;
  }
  v33 = BugCheckParameter3 + 12;
  PoolWithTag[1].Children[0] = (_RTL_BALANCED_NODE *)v9;
  PoolWithTag[1].Children[1] = (_RTL_BALANCED_NODE *)BugCheckParameter3;
  v34 = KeAcquireSpinLockRaiseToDpc(BugCheckParameter3 + 12);
  v35 = (ULONG_PTR)(BugCheckParameter3 + 10);
  v36 = v34;
  v37 = *(_QWORD *)v35;
  if ( (*(_BYTE *)(v35 + 8) & 1) != 0 && v37 )
    v37 ^= v35;
  v38 = 0;
  if ( v37 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v37 + 24) + 24LL) <= (unsigned __int64)v14 )
      {
        v39 = *(_QWORD *)(v37 + 8);
        if ( (*(_BYTE *)(v35 + 8) & 1) != 0 )
        {
          if ( !v39 )
            goto LABEL_47;
          v39 ^= v37;
        }
        if ( !v39 )
        {
LABEL_47:
          v38 = 1;
          break;
        }
      }
      else
      {
        v39 = *(_QWORD *)v37;
        if ( (*(_BYTE *)(v35 + 8) & 1) != 0 )
        {
          if ( !v39 )
            break;
          v39 ^= v37;
        }
        if ( !v39 )
          break;
      }
      v37 = v39;
    }
  }
  RtlRbInsertNodeEx((PRTL_RB_TREE)v35, (PRTL_BALANCED_NODE)v37, v38, v30);
  KxReleaseSpinLock(v33);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v36 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v43 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v36 + 1));
        v44 = (v43 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v43;
        if ( v44 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        v27 = v45;
      }
    }
  }
  __writecr8(v36);
  *a8 = v27;
  *a9 = v14;
  return (unsigned int)v15;
}
