/*
 * XREFs of ?SmFeStoreDelete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@K@Z @ 0x14034DDA4
 * Callers:
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x14034DD10 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
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

char __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmFeStoreDelete(__int64 a1, int a2)
{
  int v4; // edi
  unsigned int v5; // ebx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rcx
  struct _KTHREAD *v12; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v14; // r14
  unsigned int v15; // r8d
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rcx
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v24[3]; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v25[3]; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+68h] [rbp-98h]
  int v27; // [rsp+6Ch] [rbp-94h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  _BYTE v29[136]; // [rsp+78h] [rbp-88h] BYREF

  memset(v29, 0, 0x80uLL);
  v25[1] = 0LL;
  v25[2] = 0LL;
  v4 = 0;
  v28 = 0LL;
  v5 = 0;
  v26 = 0;
  v25[0] = v29;
  v27 = 8;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = a1 + 440;
  ExAcquirePushLockExclusiveEx(a1 + 440, 0LL);
  v8 = *(_QWORD *)(a1 + 448);
  *(_OWORD *)v24 = 0LL;
  if ( !v8 )
    goto LABEL_2;
  while ( !*(_BYTE *)(v8 + 3) )
    v8 = *(_QWORD *)(v8 + 8);
  v24[0] = v8;
  v24[1] = v8 + 8;
  while ( 1 )
  {
    if ( v4 )
    {
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        a1 + 448,
        v5,
        (__int64)v25);
      B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
        v22,
        (__int64)v24,
        (__int64)v25);
      v8 = v24[0];
      v4 = 0;
    }
    if ( !v8 )
      break;
    v9 = v24[1] + 8;
    v10 = (unsigned __int16)*(_DWORD *)v8 + 2LL;
    v24[1] = v9;
    if ( v9 >= v8 + 8 * v10 )
    {
      v11 = *(_QWORD *)(v8 + 8);
      if ( v11 )
      {
        v24[0] = *(_QWORD *)(v8 + 8);
        v24[1] = v11 + 16;
        v8 = v11;
      }
      v9 = (v11 + 16) & -(__int64)(v11 != 0);
    }
    if ( !v9 )
      break;
    if ( *(unsigned __int16 *)(v9 + 4) == a2 )
    {
      v5 = *(_DWORD *)v9;
      *(_BYTE *)(v9 + 6) = 0;
      SMKM_STORE_MGR<SM_TRAITS>::SmFeDeleteEntry(a1, (__int64)v25, v24);
      v4 = 1;
LABEL_2:
      v8 = v24[0];
      continue;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 440));
  v23 = 0;
  v12 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 440) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
  else
    SessionId = -1;
  --v12->SpecialApcDisable;
  v14 = ++v12->AbAllocationRegionCount;
  v15 = ((char)v12->AbEntrySummary | (char)v12->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v16 = !_BitScanReverse((unsigned int *)&v17, v15);
    if ( v16 )
      break;
    v18 = (__int64)&v12->LockEntries[v17];
    v15 &= ~(1 << v17);
    if ( (*(_BYTE *)(v18 + 26) & 1) != 0
      && (*(_DWORD *)(v18 + 32) & 1) == 0
      && (*(_QWORD *)(v18 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v7 & 0x7FFFFFFFFFFFFFFCLL)
      && *(_DWORD *)(v18 + 40) == SessionId )
    {
      *(_BYTE *)(v18 + 26) &= ~1u;
      if ( *(_QWORD *)(v18 + 32) )
      {
        if ( v18 )
        {
          *(_BYTE *)(v18 + 32) |= 2u;
          if ( *(__int64 *)(v18 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v18);
          v23 = *(_DWORD *)(v18 + 88) & 0x1FFFF;
          *(_DWORD *)(v18 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v18 + 25) &= ~1u;
          *(_QWORD *)(v18 + 32) = 0LL;
          v19 = (signed __int64)(v18 - (unsigned __int64)v12->LockEntries) / 96;
          if ( v14 == 1 )
            v12->AbEntrySummary |= 1 << v19;
          else
            _InterlockedOr8((volatile signed __int8 *)&v12->AbOrphanedEntrySummary, 1 << v19);
          goto LABEL_29;
        }
        break;
      }
    }
  }
  if ( (*((_DWORD *)&v12->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)v12, v7, SessionId, 0LL);
LABEL_29:
  --v12->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v12, v7, &v23);
  v16 = v12->SpecialApcDisable++ == -1;
  if ( v16 && ($C459BD0D405E8E46662177FB3D0A143F *)v12->ApcState.ApcListHead[0].Flink != &v12->152 )
    KiCheckForKernelApcDelivery(v20);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
