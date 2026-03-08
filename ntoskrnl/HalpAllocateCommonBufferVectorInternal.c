/*
 * XREFs of HalpAllocateCommonBufferVectorInternal @ 0x14050D000
 * Callers:
 *     HalAllocateCommonBufferVector @ 0x14050C510 (HalAllocateCommonBufferVector.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmUnmapLockedPages @ 0x14027CCB0 (MmUnmapLockedPages.c)
 *     MmAllocatePagesForMdlEx @ 0x1402B3960 (MmAllocatePagesForMdlEx.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x1402B39C0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 *     HalpDmaReferenceDomainObject @ 0x14038D02C (HalpDmaReferenceDomainObject.c)
 *     HalpMmAllocCtxAlloc @ 0x140396F30 (HalpMmAllocCtxAlloc.c)
 *     HalpMmAllocCtxFree @ 0x14039F980 (HalpMmAllocCtxFree.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall HalpAllocateCommonBufferVectorInternal(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        MEMORY_CACHING_TYPE a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        char a9,
        __int64 *a10)
{
  void *v10; // r14
  struct _MDL *v11; // r15
  __int64 v12; // r13
  unsigned __int8 CurrentIrql; // al
  __int64 v14; // rdi
  __int64 v15; // rcx
  int v16; // ebx
  void *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  ULONG_PTR v20; // rbx
  __int64 v21; // rcx
  void *v22; // rax
  unsigned __int64 v23; // r14
  __int64 v24; // r8
  ULONG Flags; // r10d
  PHYSICAL_ADDRESS v26; // rax
  unsigned __int64 v27; // rdx
  struct _MDL *PagesForMdl; // rax
  __int64 v29; // rcx
  unsigned int v30; // edx
  char *v31; // rax
  char *v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // r8
  __int64 v39; // rcx
  _QWORD *v40; // rcx
  __int64 v41; // r14
  struct _MDL *v42; // r15
  struct _MDL *Next; // rax
  volatile signed __int64 *v44; // r14
  KIRQL v45; // al
  __int64 *v46; // rdx
  unsigned __int64 v47; // rbx
  __int64 v48; // rax
  unsigned __int8 v49; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  int v52; // eax
  bool v53; // zf
  int v54; // [rsp+48h] [rbp-41h]
  PVOID v55; // [rsp+58h] [rbp-31h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-29h]
  __int128 v57; // [rsp+70h] [rbp-19h] BYREF
  int v58; // [rsp+80h] [rbp-9h]

  v58 = 0;
  v10 = 0LL;
  v55 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v57 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x1DCu, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( a6 )
    return 3221225485LL;
  v14 = *(_QWORD *)(a1 + 512);
  BugCheckParameter3 = v14;
  v54 = *(_DWORD *)(v14 + 48);
  if ( a9 )
    goto LABEL_7;
  if ( *(_DWORD *)(v14 + 48) != 2 )
    return 3221225485LL;
  v54 = 3;
LABEL_7:
  v16 = HalpDmaReferenceDomainObject(v14);
  if ( v16 < 0 )
    return (unsigned int)v16;
  v17 = (void *)HalpMmAllocCtxAlloc(v15, 80LL);
  v18 = (__int64)v17;
  if ( !v17 )
  {
    v16 = -1073741670;
LABEL_42:
    HalpDmaDereferenceDomainObject(BugCheckParameter3);
    if ( v18 )
      HalpMmAllocCtxFree(v35, v18);
    if ( v12 )
      HalpMmAllocCtxFree(v35, v12);
    if ( v11 )
    {
      if ( v10 )
        MmUnmapLockedPages(v10, v11);
      MiFreePagesFromMdl((ULONG_PTR)v11, 0);
      ExFreePoolWithTag(v11, 0);
    }
    return (unsigned int)v16;
  }
  memset(v17, 0, 0x50uLL);
  v19 = a7;
  v20 = BugCheckParameter3;
  *(_QWORD *)(v18 + 32) = BugCheckParameter3;
  v22 = (void *)HalpMmAllocCtxAlloc(v21, 16LL * a7);
  v12 = (__int64)v22;
  if ( !v22 )
  {
    v16 = -1073741670;
    goto LABEL_42;
  }
  memset(v22, 0, 16LL * a7);
  *(_QWORD *)(v18 + 64) = v12;
  v23 = (a8 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  if ( v54 != 3 )
  {
    v29 = 0LL;
    Flags = 36;
    while ( 1LL << v29 < v23 )
    {
      if ( (unsigned __int64)++v29 >= 0x40 )
        goto LABEL_21;
    }
    v23 = 1LL << v29;
LABEL_21:
    if ( 1LL << v29 == v23 )
    {
      v24 = v23;
      v26.QuadPart = a2;
      v30 = *(_DWORD *)(a1 + 448);
      if ( v30 < 0x40 )
        v27 = (1LL << v30) - 1;
      else
        v27 = -1LL;
      if ( a3 < v27 )
        v27 = a3;
      if ( a2 < v27 )
        goto LABEL_14;
      v16 = -1073741584;
    }
    else
    {
      v16 = -1073741577;
    }
    v10 = 0LL;
    goto LABEL_42;
  }
  v24 = 0LL;
  Flags = 20;
  v26.QuadPart = 0LL;
  v27 = -1LL;
LABEL_14:
  *(_DWORD *)(v18 + 24) = a7;
  *(_QWORD *)(v18 + 16) = v23;
  if ( a5 == 0x80000000 )
    PagesForMdl = MmAllocatePagesForMdlEx(v26, (PHYSICAL_ADDRESS)v27, (PHYSICAL_ADDRESS)v24, v23 * a7, a4, Flags);
  else
    PagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                   v26.LowPart,
                                   v27,
                                   v24,
                                   v23 * a7,
                                   a4,
                                   a5,
                                   Flags,
                                   0LL);
  v11 = PagesForMdl;
  if ( !PagesForMdl )
  {
    v16 = -1073741670;
LABEL_41:
    v10 = v55;
    goto LABEL_42;
  }
  v31 = (char *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, a4, 0LL, 0, 0x40000010u);
  v55 = v31;
  v32 = v31;
  if ( !v31 )
  {
    v16 = -1073741670;
    v10 = 0LL;
    goto LABEL_42;
  }
  *(_QWORD *)(v18 + 40) = v11;
  *(_QWORD *)(v18 + 48) = v31;
  if ( a7 )
  {
    v33 = (_QWORD *)v12;
    v34 = a7;
    do
    {
      *v33 = v32;
      v32 += v23;
      v33 += 2;
      --v34;
    }
    while ( v34 );
  }
  if ( v54 == 3 )
  {
    *((_QWORD *)&v57 + 1) = v11;
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *))(HalpDmaIommuInterfaceFcnTable + 56))(
            *(_QWORD *)(BugCheckParameter3 + 40),
            3LL,
            &v57);
    if ( v16 < 0 )
      goto LABEL_41;
    if ( a7 )
    {
      v37 = 0LL;
      v38 = (_QWORD *)(v12 + 8);
      do
      {
        v39 = v37;
        v37 += v23;
        *v38 = v39;
        v38 += 2;
        --v19;
      }
      while ( v19 );
    }
    v20 = BugCheckParameter3;
    *(_QWORD *)(v18 + 56) = 0LL;
    *(_BYTE *)(v18 + 72) = 1;
  }
  else if ( a7 )
  {
    v40 = (_QWORD *)(v12 + 8);
    v41 = 8 * (v23 >> 12);
    v42 = v11 + 1;
    do
    {
      Next = v42->Next;
      v42 = (struct _MDL *)((char *)v42 + v41);
      *v40 = (_QWORD)Next << 12;
      v40 += 2;
      --v19;
    }
    while ( v19 );
  }
  v44 = (volatile signed __int64 *)(v20 + 104);
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v20 + 104));
  v46 = (__int64 *)(BugCheckParameter3 + 88);
  v47 = v45;
  v48 = *(_QWORD *)(BugCheckParameter3 + 88);
  if ( *(_QWORD *)(v48 + 8) != BugCheckParameter3 + 88 )
    __fastfail(3u);
  *(_QWORD *)v18 = v48;
  *(_QWORD *)(v18 + 8) = v46;
  *(_QWORD *)(v48 + 8) = v18;
  *v46 = v18;
  KxReleaseSpinLock(v44);
  if ( KiIrqlFlags )
  {
    v49 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v49 <= 0xFu && (unsigned __int8)v47 <= 0xFu && v49 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v52 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v47 + 1));
      v53 = (v52 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v52;
      if ( v53 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v47);
  *a10 = v18;
  return 0LL;
}
