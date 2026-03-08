/*
 * XREFs of MiAllocateLargeProcessPagesFromCache @ 0x140664B5C
 * Callers:
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 * Callees:
 *     MiFreeLargeZeroPages @ 0x14020FD6C (MiFreeLargeZeroPages.c)
 *     MiZeroLargePage @ 0x1402441E4 (MiZeroLargePage.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPopLargePfnList @ 0x140349C1C (MiPopLargePfnList.c)
 *     MiInitializeLargePfnList @ 0x14035059C (MiInitializeLargePfnList.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiComputePreferredNode @ 0x140615350 (MiComputePreferredNode.c)
 *     MiGetVadCacheAttribute @ 0x14065E5C4 (MiGetVadCacheAttribute.c)
 *     MiAppendTailList @ 0x14066509C (MiAppendTailList.c)
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 *     MiCreateProcessLargePageCacheAnchor @ 0x1406657B8 (MiCreateProcessLargePageCacheAnchor.c)
 */

__int64 __fastcall MiAllocateLargeProcessPagesFromCache(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        int a4,
        char a5,
        _QWORD *a6)
{
  _QWORD *v6; // rsi
  __int64 v10; // r8
  unsigned int VadCacheAttribute; // ebp
  unsigned int v12; // r12d
  unsigned int v13; // ecx
  _KPROCESS *Process; // rdx
  __int64 v15; // r9
  __int64 ProcessLargePageCacheAnchor; // r8
  __int64 v17; // rdi
  unsigned int v18; // eax
  unsigned __int64 v19; // r14
  __int64 v20; // rdx
  __int64 **v21; // r13
  volatile LONG *v22; // rdi
  int v23; // esi
  unsigned __int64 i; // r12
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 **v27; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v31; // eax
  bool v32; // zf
  unsigned int v33; // esi
  _QWORD *v34; // rdi
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  int v37; // edx
  struct _KPRCB *v39; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v41; // eax
  unsigned __int64 v42; // rdi
  _QWORD *v43; // rbx
  _QWORD *v44; // rcx
  _QWORD *v45; // rax
  unsigned __int64 v46; // rbx
  _QWORD *v47; // r8
  unsigned int j; // r9d
  unsigned __int64 *v49; // rcx
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r10
  _DWORD *v52; // r9
  int v53; // eax
  int v54; // [rsp+20h] [rbp-108h]
  unsigned int v55; // [rsp+50h] [rbp-D8h]
  __int64 v56; // [rsp+60h] [rbp-C8h]
  __int64 v57; // [rsp+68h] [rbp-C0h]
  _QWORD v58[12]; // [rsp+80h] [rbp-A8h] BYREF

  v6 = a6;
  memset(v58, 0, sizeof(v58));
  if ( !*(_QWORD *)a1 )
  {
    v13 = *(_DWORD *)(a1 + 20);
    if ( v13 >> 3 == 3 )
    {
      if ( (v13 & 7) != 0 )
      {
        VadCacheAttribute = 2;
LABEL_9:
        v12 = *(_DWORD *)(a1 + 16) != 0;
        goto LABEL_10;
      }
    }
    else if ( v13 >> 3 == 1 )
    {
      VadCacheAttribute = 0;
      goto LABEL_9;
    }
    VadCacheAttribute = 1;
    goto LABEL_9;
  }
  VadCacheAttribute = MiGetVadCacheAttribute(*(_QWORD *)a1);
  v12 = (*(_DWORD *)(v10 + 48) & 0x1A00000) == 27262976;
LABEL_10:
  v55 = v12;
  Process = KeGetCurrentThread()->ApcState.Process;
  v15 = Process[1].ActiveProcessors.StaticBitmap[28] + 48;
  v56 = v15;
  ProcessLargePageCacheAnchor = *(_QWORD *)(Process[1].ActiveProcessors.StaticBitmap[28] + 328);
  v17 = *(_QWORD *)(qword_140C67048 + 8LL * Process[1].IdealProcessor[25]);
  v57 = v17;
  if ( !ProcessLargePageCacheAnchor )
  {
    ProcessLargePageCacheAnchor = MiCreateProcessLargePageCacheAnchor(v17);
    if ( !ProcessLargePageCacheAnchor )
      return 3221225626LL;
    v15 = v56;
  }
  if ( a4 )
  {
    v18 = a4 - 1;
    if ( a4 - 1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      return 3221225485LL;
  }
  else
  {
    v18 = MiComputePreferredNode(*(_QWORD *)a1);
  }
  *(_DWORD *)(ProcessLargePageCacheAnchor + 24) = *(_DWORD *)(v17 + 16104);
  v19 = a3 >> 4;
  v20 = v18 + (__int64)(int)(VadCacheAttribute * (unsigned __int16)KeNumberNodes);
  v21 = (__int64 **)(ProcessLargePageCacheAnchor + 8 * (v20 + 2 * (v20 + 2)));
  if ( v21[2] )
  {
    v22 = (volatile LONG *)(v15 + 288);
    v23 = 0;
    for ( i = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v15 + 288)); v19; --v19 )
    {
      v25 = *v21;
      if ( *v21 == (__int64 *)v21 )
        break;
      v26 = *v25;
      if ( (__int64 **)v25[1] != v21 )
        goto LABEL_63;
      if ( *(__int64 **)(v26 + 8) != v25 )
        goto LABEL_63;
      *v21 = (__int64 *)v26;
      *(_QWORD *)(v26 + 8) = v21;
      v21[2] = (__int64 *)((char *)v21[2] - 1);
      v27 = (__int64 **)a6[7];
      if ( *v27 != a6 + 6 )
        goto LABEL_63;
      *v25 = (__int64)(a6 + 6);
      v25[1] = (__int64)v27;
      *v27 = v25;
      a6[7] = v25;
      ++a6[8];
      if ( (v25[2] & 0x3E0) != 0 )
        ++v23;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v22);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)i <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)i + 1));
        v32 = (v31 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v31;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(i);
    v12 = v55;
    if ( !v55 )
    {
      if ( v23 )
      {
        v33 = 0;
        v34 = (_QWORD *)a6[6];
        if ( a6[8] )
        {
          v35 = (__int64)a6;
          do
          {
            if ( (v34[2] & 0x3E0LL) != 0 )
            {
              MiZeroLargePage(v35, (__int64)v34, 2u, VadCacheAttribute);
              v34[2] &= 0xFFFFFFFFFFFFFC1FuLL;
              v35 = (__int64)a6;
            }
            v34 = (_QWORD *)*v34;
            ++v33;
          }
          while ( (unsigned __int64)v33 < *(_QWORD *)(v35 + 64) );
        }
      }
    }
    if ( !v19 )
      return 0LL;
    v6 = a6;
    v17 = v57;
  }
  MiInitializeLargePfnList(v58);
  v54 = a4;
  v36 = 512LL;
  if ( (int)MiCreateLargePfnList(a1, v37, 512, 512, v54, a5, 0LL, 16, (__int64)v58) < 0 )
    return 3221225626LL;
  if ( (unsigned __int16 *)v17 != MiSystemPartition )
    goto LABEL_54;
  v39 = KeGetCurrentPrcb();
  CachedResidentAvailable = (int)v39->CachedResidentAvailable;
  if ( (_DWORD)CachedResidentAvailable == -1 )
    goto LABEL_54;
  if ( (unsigned __int64)(CachedResidentAvailable + 512) <= 0x100 )
  {
    do
    {
      v41 = _InterlockedCompareExchange(
              (volatile signed __int32 *)&v39->CachedResidentAvailable,
              CachedResidentAvailable + 512,
              CachedResidentAvailable);
      v32 = (_DWORD)CachedResidentAvailable == v41;
      LODWORD(CachedResidentAvailable) = v41;
      if ( v32 )
        goto LABEL_55;
    }
    while ( v41 != -1 && (unsigned __int64)(v41 + 512LL) <= 0x100 );
  }
  if ( (int)CachedResidentAvailable > 192
    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                            (volatile signed __int32 *)&v39->CachedResidentAvailable,
                                            192,
                                            CachedResidentAvailable) )
  {
    v36 = (int)CachedResidentAvailable - 192 + 512LL;
  }
  if ( v36 )
LABEL_54:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v17 + 17280), v36);
LABEL_55:
  v42 = 32 - v19;
  if ( v19 )
  {
    v43 = v6 + 6;
    while ( 1 )
    {
      v44 = (_QWORD *)(48 * MiPopLargePfnList((__int64)v58, 2u) - 0x220000000000LL);
      v45 = (_QWORD *)v6[7];
      if ( (_QWORD *)*v45 != v43 )
        break;
      *v44 = v43;
      v44[1] = v45;
      *v45 = v44;
      v6[7] = v44;
      ++v6[8];
      if ( !--v19 )
        goto LABEL_59;
    }
LABEL_63:
    __fastfail(3u);
  }
LABEL_59:
  v46 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v56 + 288));
  if ( !v21[2] )
  {
    v47 = (_QWORD *)v58[6];
    for ( j = 0; (unsigned __int64)j < v58[8]; ++j )
    {
      v49 = v47 + 2;
      if ( v12 )
        MiSetOriginalPtePfnFromFreeList(v49);
      else
        *v49 &= 0xFFFFFFFFFFFFFC1FuLL;
      v47 = (_QWORD *)*v47;
    }
    MiAppendTailList(v21, &v58[6]);
    v42 = 0LL;
    v21[2] = (__int64 *)v58[8];
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v56 + 288));
  if ( KiIrqlFlags )
  {
    v50 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v50 <= 0xFu && (unsigned __int8)v46 <= 0xFu && v50 >= 2u )
    {
      v51 = KeGetCurrentPrcb();
      v52 = v51->SchedulerAssist;
      v53 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v46 + 1));
      v32 = (v53 & v52[5]) == 0;
      v52[5] &= v53;
      if ( v32 )
        KiRemoveSystemWorkPriorityKick((__int64)v51);
    }
  }
  __writecr8(v46);
  if ( v42 )
    MiFreeLargeZeroPages(v57, (__int64)v58, v12);
  return 0LL;
}
