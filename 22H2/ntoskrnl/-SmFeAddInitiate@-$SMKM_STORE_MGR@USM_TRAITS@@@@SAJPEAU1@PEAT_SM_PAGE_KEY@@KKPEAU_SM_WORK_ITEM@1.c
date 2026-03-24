/*
 * XREFs of ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140266538
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x1402659C4 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmCompressCtxProcessReadyQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEAU1@EK@Z @ 0x140266374 (-SmCompressCtxProcessReadyQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@PEA.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140265D80 (-SmFeAddComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402660F4 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x140266124 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402669DC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ?StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z @ 0x140266BAC (-StLockTryAcquireExclusive@@YAKPEAUVLOCK@@PEAK@Z.c)
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1402670B0 (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402CB240 (ExAcquirePushLockSharedEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddInitiate(
        __int64 a1,
        unsigned int *a2,
        int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int16 v9; // si
  unsigned int v10; // ebx
  int v11; // r14d
  ULONG_PTR v12; // rsi
  int v13; // edi
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r15d
  __int64 v17; // rcx
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r12d
  int v23; // eax
  __int64 v24; // r9
  struct _KTHREAD *v25; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v27; // r14
  __int64 v28; // r8
  __int64 v29; // rdx
  bool v30; // zf
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rdx
  $C459BD0D405E8E46662177FB3D0A143F *v34; // rcx
  __int64 v35; // rcx
  struct _KTHREAD *v36; // rax
  struct _KTHREAD *v37; // rdi
  __int64 v38; // rdx
  unsigned __int8 v39; // r12
  __int64 v40; // r8
  __int64 v41; // rcx
  __int64 v42; // r14
  __int64 v43; // rdx
  NTSTATUS v44; // eax
  struct _KTHREAD *v45; // rcx
  NTSTATUS v46; // edi
  ULONG_PTR v47; // rcx
  unsigned int v48; // ecx
  unsigned int v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+34h] [rbp-CCh]
  int v51; // [rsp+38h] [rbp-C8h]
  int v52; // [rsp+3Ch] [rbp-C4h]
  int v53; // [rsp+40h] [rbp-C0h]
  int v54; // [rsp+44h] [rbp-BCh]
  __int64 v55; // [rsp+48h] [rbp-B8h] BYREF
  int v56; // [rsp+50h] [rbp-B0h]
  unsigned int v57; // [rsp+58h] [rbp-A8h]
  LARGE_INTEGER Timeout; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v59; // [rsp+68h] [rbp-98h] BYREF
  __int16 Object; // [rsp+78h] [rbp-88h] BYREF
  char v61; // [rsp+7Ah] [rbp-86h]
  int v62; // [rsp+7Ch] [rbp-84h]
  _QWORD v63[2]; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v64; // [rsp+90h] [rbp-70h]
  __int64 v65; // [rsp+98h] [rbp-68h]
  __int64 v66; // [rsp+A0h] [rbp-60h]
  _QWORD v67[3]; // [rsp+B0h] [rbp-50h] BYREF
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  __int64 v70; // [rsp+D0h] [rbp-30h]
  _BYTE v71[136]; // [rsp+D8h] [rbp-28h] BYREF

  v66 = a5;
  v52 = a3;
  v9 = a4;
  v64 = a2;
  v65 = a6;
  v57 = a4;
  memset(v71, 0, 0x80uLL);
  v10 = *a2;
  v55 = 0x1000000000000LL;
  v11 = a7 & 2;
  WORD2(v55) = v9;
  v49 = 0;
  v12 = a1 + 440;
  Timeout.QuadPart = 0LL;
  v13 = 0;
  v67[1] = 0LL;
  v67[2] = 0LL;
  v70 = 0LL;
  v67[0] = v71;
  v68 = 0;
  v69 = 8;
  v56 = v11;
  if ( (a7 & 2) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockSharedEx(a1 + 440, 0LL);
    v49 = 2;
  }
  else if ( (a7 & 4) != 0 )
  {
    if ( !StLockTryAcquireExclusive((struct VLOCK *)(a1 + 440), &v49) )
      return 3221225557LL;
  }
  else
  {
    v36 = KeGetCurrentThread();
    --v36->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
    v49 = 1;
  }
  v16 = -1073740682;
  while ( 1 )
  {
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      a1 + 448,
      v10,
      v67);
    v59 = 0LL;
    B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      v17,
      (__int64)&v59,
      (__int64)v67);
    if ( !(_QWORD)v59 )
      break;
    v20 = *((_QWORD *)&v59 + 1) + 8LL;
    v21 = (unsigned __int16)*(_DWORD *)v59 + 2LL;
    *((_QWORD *)&v59 + 1) = v20;
    if ( v20 >= (__int64)v59 + 8 * v21 )
    {
      v35 = *(_QWORD *)(v59 + 8);
      if ( v35 )
      {
        *(_QWORD *)&v59 = *(_QWORD *)(v59 + 8);
        *((_QWORD *)&v59 + 1) = v35 + 16;
      }
      v20 = (v35 + 16) & -(__int64)(v35 != 0);
    }
    if ( !v20 || v18 < *(_DWORD *)v20 && v19 < *(_DWORD *)v20 )
      break;
    if ( (*(_BYTE *)(v20 + 7) & 1) != 0 )
    {
      v16 = -1073740747;
      goto LABEL_38;
    }
    if ( v13 || (a7 & 1) == 0 )
      goto LABEL_38;
    Object = 0;
    v63[1] = v63;
    v63[0] = v63;
    *(_QWORD *)(a1 + 1656) = &Object;
    v61 = 6;
    v62 = 0;
    *(_DWORD *)(a1 + 1648) = v10;
    if ( v11 )
    {
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(a1 + 440);
      KeAbPostRelease(a1 + 440);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
    }
    else
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(a1 + 440);
      v50 = 0;
      v37 = KeGetCurrentThread();
      v38 = (unsigned int)MiGetSystemRegionType(a1 + 440) == 1
          ? (unsigned int)MmGetSessionIdEx(v37->ApcState.Process)
          : 0xFFFFFFFFLL;
      --v37->SpecialApcDisable;
      v39 = ++v37->AbAllocationRegionCount;
      LODWORD(v40) = ((char)v37->AbEntrySummary | (char)v37->AbOrphanedEntrySummary) ^ 0x3F;
      while ( 1 )
      {
        v30 = !_BitScanReverse((unsigned int *)&v41, v40);
        v51 = v41;
        if ( v30 )
          goto LABEL_66;
        v42 = (__int64)&v37->LockEntries[v41];
        v40 = ~(1 << v41) & (unsigned int)v40;
        if ( (*(_BYTE *)(v42 + 26) & 1) != 0
          && (*(_DWORD *)(v42 + 32) & 1) == 0
          && (*(_QWORD *)(v42 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v12 & 0x7FFFFFFFFFFFFFFCLL)
          && *(_DWORD *)(v42 + 40) == (_DWORD)v38 )
        {
          *(_BYTE *)(v42 + 26) &= ~1u;
          if ( *(_QWORD *)(v42 + 32) )
            break;
        }
      }
      if ( !v42 )
      {
LABEL_66:
        if ( (*((_DWORD *)&v37->0 + 1) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v37, a1 + 440, (unsigned int)v38, 0LL);
        goto LABEL_78;
      }
      *(_BYTE *)(v42 + 32) |= 2u;
      if ( *(__int64 *)(v42 + 32) < 0 )
        KiAbEntryRemoveFromTree(v42, v38, v40);
      v50 = 0;
      v50 = *(_DWORD *)(v42 + 88) & 0x1FFFF;
      *(_DWORD *)(v42 + 88) &= 0xFFFE0000;
      *(_BYTE *)(v42 + 25) &= ~1u;
      *(_QWORD *)(v42 + 32) = 0LL;
      v43 = (signed __int64)(v42 - (unsigned __int64)v37->LockEntries) / 96;
      if ( v39 == 1 )
        v37->AbEntrySummary |= 1 << v43;
      else
        _InterlockedOr8((volatile signed __int8 *)&v37->AbOrphanedEntrySummary, 1 << v43);
LABEL_78:
      --v37->AbAllocationRegionCount;
      KiAbThreadRemoveBoosts((ULONG_PTR)v37);
      v30 = v37->SpecialApcDisable++ == -1;
      if ( v30 && ($C459BD0D405E8E46662177FB3D0A143F *)v37->ApcState.ApcListHead[0].Flink != &v37->152 )
        KiCheckForKernelApcDelivery(1LL);
      KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
      v11 = v56;
    }
    Timeout.QuadPart = -2500000LL;
    v44 = KeWaitForSingleObject(&Object, WrKernel, 0, 0, &Timeout);
    v45 = KeGetCurrentThread();
    v46 = v44;
    --v45->SpecialApcDisable;
    v47 = a1 + 440;
    if ( v11 )
    {
      ExAcquirePushLockSharedEx(v47, 0LL);
      v48 = 2;
    }
    else
    {
      ExAcquirePushLockExclusiveEx(v47, 0LL);
      v48 = 1;
    }
    v49 = v48;
    *(_QWORD *)(a1 + 1656) = 0LL;
    if ( v46 )
      goto LABEL_38;
    v13 = 1;
  }
  if ( v11 )
  {
    v16 = 0;
  }
  else
  {
    v22 = 0;
    while ( 1 )
    {
      LODWORD(v55) = v10;
      v23 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
              a1 + 448,
              v10,
              v67);
      v16 = v23;
      if ( v23 == -1073741275 )
      {
        v16 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
                (__int64 *)(a1 + 448),
                (__int64)v67,
                &v55);
      }
      else if ( v23 >= 0 )
      {
        v16 = -1073741484;
      }
      if ( v16 < 0 )
        break;
      if ( ++v22 == v52 )
      {
        SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(v65, a1, v57, v66);
        v16 = 0;
        goto LABEL_17;
      }
      ++v10;
    }
    if ( v22 )
      SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(a1, v64, v22, v24, 2);
  }
LABEL_38:
  if ( v11 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(a1 + 440);
    KeAbPostRelease(a1 + 440);
  }
  else
  {
LABEL_17:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 440);
    v54 = 0;
    v25 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(v25->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --v25->SpecialApcDisable;
    v27 = ++v25->AbAllocationRegionCount;
    v28 = v12 & 0x7FFFFFFFFFFFFFFCLL;
    LODWORD(v29) = ((char)v25->AbEntrySummary | (char)v25->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v30 = !_BitScanReverse((unsigned int *)&v31, v29);
      v53 = v31;
      if ( v30 )
        break;
      v32 = (__int64)&v25->LockEntries[v31];
      v29 = ~(1 << v31) & (unsigned int)v29;
      if ( (*(_BYTE *)(v32 + 26) & 1) != 0
        && (*(_DWORD *)(v32 + 32) & 1) == 0
        && (*(_QWORD *)(v32 + 32) & 0x7FFFFFFFFFFFFFFCLL) == v28
        && *(_DWORD *)(v32 + 40) == (_DWORD)SessionId )
      {
        *(_BYTE *)(v32 + 26) &= ~1u;
        if ( *(_QWORD *)(v32 + 32) )
        {
          if ( v32 )
          {
            *(_BYTE *)(v32 + 32) |= 2u;
            if ( *(__int64 *)(v32 + 32) < 0 )
              KiAbEntryRemoveFromTree(v32, v29, v28);
            v54 = *(_DWORD *)(v32 + 88) & 0x1FFFF;
            *(_DWORD *)(v32 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v32 + 25) &= ~1u;
            *(_QWORD *)(v32 + 32) = 0LL;
            v33 = (signed __int64)(v32 - (unsigned __int64)v25->LockEntries) / 96;
            if ( v27 == 1 )
              v25->AbEntrySummary |= 1 << v33;
            else
              _InterlockedOr8((volatile signed __int8 *)&v25->AbOrphanedEntrySummary, 1 << v33);
            goto LABEL_33;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v25->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v25, v12, SessionId, 0LL);
LABEL_33:
    --v25->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v25);
    v30 = v25->SpecialApcDisable++ == -1;
    if ( v30 )
    {
      v34 = &v25->152;
      if ( ($C459BD0D405E8E46662177FB3D0A143F *)v34->ApcState.ApcListHead[0].Flink != v34 )
        KiCheckForKernelApcDelivery((__int64)v34);
    }
  }
  KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  return (unsigned int)v16;
}
