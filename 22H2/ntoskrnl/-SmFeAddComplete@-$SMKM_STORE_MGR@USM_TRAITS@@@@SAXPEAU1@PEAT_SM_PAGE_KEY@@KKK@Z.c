/*
 * XREFs of ?SmFeAddComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KKK@Z @ 0x140265D80
 * Callers:
 *     ?SmProcessAddCompletion@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x140265CF0 (-SmProcessAddCompletion@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@KPEAU-$SMKM_.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x140266538 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ?SmFeDeleteEntry@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@PEAUITERATOR@3@PEAUSMKM_FRONTEND_ENTRY@1@@Z @ 0x14026342C (-SmFeDeleteEntry@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAUSEARCH_RESULT@-$B_TREE@T_SM_PAGE_KE.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1402660F4 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1402669DC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BA.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 */

_BYTE *__fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeAddComplete(__int64 a1, unsigned int *a2, int a3, __int64 a4, char a5)
{
  unsigned int v5; // ebx
  _BYTE *result; // rax
  int v9; // edi
  int v10; // r14d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  ULONG_PTR v15; // rsi
  struct _KTHREAD *v16; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v18; // r14
  unsigned int v19; // r8d
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v28[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v29; // [rsp+68h] [rbp-98h]
  int v30; // [rsp+6Ch] [rbp-94h]
  __int64 v31; // [rsp+70h] [rbp-90h]
  _BYTE v32[136]; // [rsp+78h] [rbp-88h] BYREF

  v5 = *a2;
  memset(v32, 0, 0x80uLL);
  result = v32;
  v28[1] = 0LL;
  v28[2] = 0LL;
  v9 = 0;
  v31 = 0LL;
  v29 = 0;
  v28[0] = v32;
  v30 = 8;
  v10 = 1;
  *(_OWORD *)v27 = 0LL;
  if ( (a5 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    result = (_BYTE *)ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  }
  v12 = v27[0];
  while ( 1 )
  {
    if ( v10 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        v28);
      result = (_BYTE *)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
                          v13,
                          v27,
                          v28);
      v12 = v27[0];
      v10 = 0;
    }
    if ( v12 )
    {
      v14 = v27[1] + 8;
      v25 = (unsigned __int16)*(_DWORD *)v12 + 2LL;
      v27[1] = v14;
      result = (_BYTE *)(v12 + 8 * v25);
      if ( v14 >= (unsigned __int64)result )
      {
        v26 = *(_QWORD *)(v12 + 8);
        if ( v26 )
        {
          v27[0] = *(_QWORD *)(v12 + 8);
          v27[1] = v26 + 16;
          v12 = v26;
        }
        result = (_BYTE *)(v26 + 16);
        v14 = (v26 + 16) & -(__int64)(v26 != 0);
      }
    }
    else
    {
      v14 = 0LL;
    }
    if ( (*(_BYTE *)(v14 + 7) & 1) != 0 )
    {
      if ( (a5 & 1) != 0 )
        goto LABEL_12;
    }
    else
    {
      if ( *(_BYTE *)(v14 + 6) != 1 )
        goto LABEL_12;
      if ( (a5 & 1) != 0 )
      {
        *(_BYTE *)(v14 + 6) = 3;
        goto LABEL_12;
      }
    }
    *(_BYTE *)(v14 + 6) = 0;
    result = (_BYTE *)SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v28, v27);
    v12 = v27[0];
    v10 = 1;
LABEL_12:
    if ( ++v9 == a3 )
      break;
    ++v5;
  }
  if ( (a5 & 2) == 0 )
  {
    v15 = a1 + 440;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v15);
    v16 = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
      SessionId = MmGetSessionIdEx(v16->ApcState.Process);
    else
      SessionId = -1;
    --v16->SpecialApcDisable;
    v18 = ++v16->AbAllocationRegionCount;
    v19 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v20 = !_BitScanReverse((unsigned int *)&v21, v19);
      if ( v20 )
        break;
      v22 = (__int64)&v16->LockEntries[v21];
      v19 &= ~(1 << v21);
      if ( (*(_BYTE *)(v22 + 26) & 1) != 0
        && (*(_DWORD *)(v22 + 32) & 1) == 0
        && (*(_QWORD *)(v22 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
        && *(_DWORD *)(v22 + 40) == SessionId )
      {
        *(_BYTE *)(v22 + 26) &= ~1u;
        if ( *(_QWORD *)(v22 + 32) )
        {
          if ( v22 )
          {
            *(_BYTE *)(v22 + 32) |= 2u;
            if ( *(__int64 *)(v22 + 32) < 0 )
              KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v22);
            *(_DWORD *)(v22 + 88) &= 0xFFFE0000;
            *(_BYTE *)(v22 + 25) &= ~1u;
            *(_QWORD *)(v22 + 32) = 0LL;
            v23 = (signed __int64)(v22 - (unsigned __int64)v16->LockEntries) / 96;
            if ( v18 == 1 )
              v16->AbEntrySummary |= 1 << v23;
            else
              _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v23);
            goto LABEL_30;
          }
          break;
        }
      }
    }
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, SessionId, 0LL);
LABEL_30:
    --v16->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts((ULONG_PTR)v16);
    v20 = v16->SpecialApcDisable++ == -1;
    if ( v20 && ($C459BD0D405E8E46662177FB3D0A143F *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
      KiCheckForKernelApcDelivery(v24);
    return (_BYTE *)KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
  }
  return result;
}
