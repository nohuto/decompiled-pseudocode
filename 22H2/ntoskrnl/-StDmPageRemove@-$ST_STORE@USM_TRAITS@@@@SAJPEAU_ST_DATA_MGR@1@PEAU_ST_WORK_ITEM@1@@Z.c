/*
 * XREFs of ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14026A65C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140268360 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x14059BFE8 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 *     ?StNpLeafDelete@?$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z @ 0x14059C9C0 (-StNpLeafDelete@-$ST_STORE@USM_TRAITS@@@@SAXPEAUNP_CTX@NP_CONTEXT@@_K@Z.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x14024A050 (KiCheckForKernelApcDelivery.c)
 *     ?StDmPageRecordUnprotect@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x14025385C (-StDmPageRecordUnprotect@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@@Z.c)
 *     SmHpChunkFree @ 0x14026301C (SmHpChunkFree.c)
 *     ?SmStAcquireStoreLockExclusive@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402682C8 (-SmStAcquireStoreLockExclusive@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmEtwEnabled @ 0x140268C58 (SmEtwEnabled.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x14026963C (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140269848 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x140269BA4 (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140269D38 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x14026A9BC (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x14026AA30 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x14026B2DC (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14026B8E8 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTE.c)
 *     ?StDmCombinePageEntry@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14026BB1C (-StDmCombinePageEntry@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_S.c)
 *     ?StDmCheckForCompaction@?$ST_STORE@USM_TRAITS@@@@SA?AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA_MGR@1@K@Z @ 0x14026BBD8 (-StDmCheckForCompaction@-$ST_STORE@USM_TRAITS@@@@SA-AW4_ST_COMPACTION_CHECK_RESULT@@PEAU_ST_DATA.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     MiGetSystemRegionType @ 0x1402CB040 (MiGetSystemRegionType.c)
 *     KiAbThreadRemoveBoosts @ 0x1402CB3F0 (KiAbThreadRemoveBoosts.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x1402CB550 (MmGetSessionIdEx.c)
 *     KiAbEntryRemoveFromTree @ 0x1402E5430 (KiAbEntryRemoveFromTree.c)
 *     ?StQueueCompaction@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@@@Z @ 0x14032CA38 (-StQueueCompaction@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_COMPACTION_CHECK_RESULT@.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405981EC (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     SmEtwLogStoreOp @ 0x14059DA34 (SmEtwLogStoreOp.c)
 *     ?SmEvictKeys@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059EDC4 (-SmEvictKeys@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KPEAU-$SMKM_STORE@USM_TRA.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rdx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // r13d
  unsigned int v9; // ebx
  int v10; // r14d
  __int64 v11; // rcx
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // r15
  unsigned int v26; // eax
  __int64 LeafSibling; // rax
  int v29; // eax
  __int64 v30; // r15
  ULONG_PTR v31; // r15
  struct _KTHREAD *v32; // rbx
  unsigned int v33; // edx
  unsigned __int8 v34; // r12
  unsigned int v35; // r8d
  bool v36; // zf
  __int64 v37; // rcx
  __int64 v38; // r14
  __int64 v39; // rdx
  __int64 v40; // rcx
  _DWORD *v41; // rcx
  __int64 v42; // r14
  ULONG_PTR v43; // r14
  struct _KTHREAD *CurrentThread; // rbx
  ULONG_PTR SessionId; // r9
  unsigned __int8 v46; // r15
  unsigned int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rcx
  unsigned int v52; // [rsp+4Ch] [rbp-1Dh]
  unsigned int v53; // [rsp+50h] [rbp-19h]
  _DWORD *v54; // [rsp+58h] [rbp-11h]
  ULONGLONG *v55; // [rsp+60h] [rbp-9h]
  _OWORD v56[5]; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v57; // [rsp+D0h] [rbp+67h]
  unsigned int v59; // [rsp+E0h] [rbp+77h] BYREF
  int v60; // [rsp+E8h] [rbp+7Fh]

  v56[0] = 0LL;
  v55 = SmEtwEnabled(0);
  v3 = a1 + 24;
  v5 = *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 8) - 1;
  v6 = *(_DWORD *)(a1 + 56);
  v52 = v5;
  if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
  {
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (char **)a1,
      a1 + 24);
    v6 = *(_DWORD *)(a1 + 56);
  }
  *(_DWORD *)(a1 + 56) = v6 & 0xFFFFFFFE;
  v7 = *(_DWORD *)(a1 + 120);
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
  {
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (char **)(a1 + 64),
      a1 + 88);
    v7 = *(_DWORD *)(a1 + 120);
  }
  v57 = 0;
  *(_DWORD *)(a1 + 120) = v7 & 0xFFFFFFFE;
  v8 = 0;
  v9 = 0;
LABEL_6:
  v59 = v9;
  while ( 1 )
  {
    v10 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
            (char **)a1,
            *(_DWORD *)(a2 + 8),
            v3);
    if ( v10 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      a1,
      v56,
      v3);
    v12 = *(_QWORD *)&v56[0];
    if ( !*(_QWORD *)&v56[0] )
      goto LABEL_33;
    v13 = *((_QWORD *)&v56[0] + 1) + 8LL;
    v14 = (unsigned __int16)**(_DWORD **)&v56[0] + 2LL;
    *((_QWORD *)&v56[0] + 1) = v13;
    if ( v13 < *(_QWORD *)&v56[0] + 8 * v14 )
      goto LABEL_10;
    v11 = a1 + 16;
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    {
      LeafSibling = *(_QWORD *)(*(_QWORD *)&v56[0] + 8LL);
    }
    else
    {
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                      a1,
                      *(_QWORD *)&v56[0]);
      v11 = -1LL;
      if ( LeafSibling == -1 )
      {
        v15 = -1LL;
        goto LABEL_11;
      }
    }
    if ( LeafSibling )
    {
      v13 = LeafSibling + 16;
      *(_QWORD *)&v56[0] = LeafSibling;
      *((_QWORD *)&v56[0] + 1) = LeafSibling + 16;
      v12 = LeafSibling;
LABEL_10:
      v15 = v13;
      goto LABEL_11;
    }
    v15 = 0LL;
LABEL_11:
    if ( v15 == -1 )
    {
      v10 = -1073741818;
      break;
    }
    if ( !v15 )
    {
      v8 = v57;
      goto LABEL_33;
    }
    v16 = *(_DWORD *)v15;
    if ( v52 < *(_DWORD *)v15 )
    {
      v8 = v57;
LABEL_33:
      if ( v8 )
      {
        v42 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v42 + 6021) & 4) != 0 )
        {
          v43 = v42 + 6024;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v43, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v43);
          CurrentThread = KeGetCurrentThread();
          if ( (unsigned int)MiGetSystemRegionType(v43) == 1 )
            SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
          else
            SessionId = 0xFFFFFFFFLL;
          --CurrentThread->SpecialApcDisable;
          v46 = ++CurrentThread->AbAllocationRegionCount;
          v47 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
          while ( 1 )
          {
            v36 = !_BitScanReverse((unsigned int *)&v48, v47);
            if ( v36 )
              goto LABEL_107;
            v49 = (__int64)&CurrentThread->LockEntries[v48];
            v47 &= ~(1 << v48);
            if ( (*(_BYTE *)(v49 + 26) & 1) != 0
              && (*(_DWORD *)(v49 + 32) & 1) == 0
              && (*(_QWORD *)(v49 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v43 & 0x7FFFFFFFFFFFFFFCLL)
              && *(_DWORD *)(v49 + 40) == (_DWORD)SessionId )
            {
              *(_BYTE *)(v49 + 26) &= ~1u;
              if ( *(_QWORD *)(v49 + 32) )
                break;
            }
          }
          if ( !v49 )
          {
LABEL_107:
            if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v43, SessionId, 0LL);
            goto LABEL_119;
          }
          *(_BYTE *)(v49 + 32) |= 2u;
          if ( *(__int64 *)(v49 + 32) < 0 )
            KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v49);
          *(_DWORD *)(v49 + 88) &= 0xFFFE0000;
          *(_BYTE *)(v49 + 25) &= ~1u;
          *(_QWORD *)(v49 + 32) = 0LL;
          v50 = (signed __int64)(v49 - (unsigned __int64)CurrentThread->LockEntries) / 96;
          if ( v46 == 1 )
            CurrentThread->AbEntrySummary |= 1 << v50;
          else
            _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v50);
LABEL_119:
          --CurrentThread->AbAllocationRegionCount;
          KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread);
          v36 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v36
            && ($C459BD0D405E8E46662177FB3D0A143F *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery(v51);
          }
          KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v11, &v59, v8);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v26 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0LL);
        if ( v26 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v26);
      }
      v10 = 0;
      break;
    }
    v17 = ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v15);
    v53 = *(_DWORD *)(v15 + 4);
    v54 = (_DWORD *)v17;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, v17);
    if ( v55 )
      SmEtwLogStoreOp((_DWORD)v55, 1, v15, (_DWORD)v55, *v54, a1, 0, 0);
    v18 = *(_DWORD *)(v3 + 24);
    v19 = v3 + 8;
    v20 = v3 + 8;
    if ( v18 == -1 || !v18 )
    {
      v21 = a1 + 24;
    }
    else
    {
      v25 = 16LL * (unsigned int)(v18 - 1);
      v21 = a1 + 24;
      v20 = *(_QWORD *)(a1 + 24) + v25;
    }
    if ( *(_QWORD *)v20 == v12 )
    {
      *(_QWORD *)(v20 + 8) = v13;
    }
    else
    {
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
        (char **)a1,
        v21);
      if ( *(_DWORD *)(a1 + 48) != -1 )
      {
        v3 = a1 + 24;
        B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
          (char **)a1,
          *(_DWORD *)(v12 + 16),
          a1 + 24);
        v29 = *(_DWORD *)(a1 + 48);
        if ( v29 != -1 && v29 )
          v19 = *(_QWORD *)v3 + 16LL * (unsigned int)(v29 - 1);
        *(_QWORD *)(v19 + 8) = v13;
        goto LABEL_21;
      }
      *(_OWORD *)v20 = v56[0];
    }
    v3 = a1 + 24;
LABEL_21:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v56,
      a1);
    v56[0] = 0LL;
    v22 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            v3);
    v10 = v22;
    if ( v22 < 0 )
    {
      if ( v22 != -1073741818 )
        __int2c();
      break;
    }
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v23 = v54[1];
      if ( !(v23 >> 12) )
        __int2c();
      v8 = v57;
      v54[1] = v23 & 0xFFF | (((v23 >> 12) - 1) << 12);
      if ( ((v23 >> 12) - 1) << 12 )
        continue;
    }
    v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            (char **)(a1 + 64),
            v53,
            a1 + 88);
    if ( v10 < 0 )
    {
      if ( v10 == -1073741818 )
        goto LABEL_59;
      if ( v10 != -1073741275 || (v8 = v57, **(int **)(a1 + 1920) < 2) )
      {
        __int2c();
LABEL_59:
        if ( v10 != -1073741275 )
          break;
        v8 = v57;
      }
    }
    else
    {
      v10 = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, v54, a1 + 88);
      if ( v10 < 0 )
        break;
      SmHpChunkFree((_DWORD *)(a1 + 192), (unsigned __int64)v54);
      v24 = a2;
      v8 = v57;
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        if ( v57 && v16 - v9 != v57 )
        {
          v30 = *(_QWORD *)(a1 + 800);
          if ( (*(_BYTE *)(v30 + 6021) & 4) != 0 )
          {
            v31 = v30 + 6024;
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v31);
            v60 = 0;
            v32 = KeGetCurrentThread();
            if ( (unsigned int)MiGetSystemRegionType(v31) == 1 )
              v33 = MmGetSessionIdEx(v32->ApcState.Process);
            else
              v33 = -1;
            --v32->SpecialApcDisable;
            v34 = ++v32->AbAllocationRegionCount;
            v35 = ((char)v32->AbEntrySummary | (char)v32->AbOrphanedEntrySummary) ^ 0x3F;
            while ( 1 )
            {
              v36 = !_BitScanReverse((unsigned int *)&v37, v35);
              if ( v36 )
                break;
              v38 = (__int64)&v32->LockEntries[v37];
              v35 &= ~(1 << v37);
              if ( (*(_BYTE *)(v38 + 26) & 1) != 0
                && (*(_DWORD *)(v38 + 32) & 1) == 0
                && (*(_QWORD *)(v38 + 32) & 0x7FFFFFFFFFFFFFFCLL) == (v31 & 0x7FFFFFFFFFFFFFFCLL)
                && *(_DWORD *)(v38 + 40) == v33 )
              {
                *(_BYTE *)(v38 + 26) &= ~1u;
                if ( *(_QWORD *)(v38 + 32) )
                {
                  if ( v38 )
                  {
                    *(_BYTE *)(v38 + 32) |= 2u;
                    if ( *(__int64 *)(v38 + 32) < 0 )
                      KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)v38);
                    v60 = 0;
                    v60 = *(_DWORD *)(v38 + 88) & 0x1FFFF;
                    *(_DWORD *)(v38 + 88) &= 0xFFFE0000;
                    *(_BYTE *)(v38 + 25) &= ~1u;
                    *(_QWORD *)(v38 + 32) = 0LL;
                    v39 = (signed __int64)(v38 - (unsigned __int64)v32->LockEntries) / 96;
                    if ( v34 == 1 )
                      v32->AbEntrySummary |= 1 << v39;
                    else
                      _InterlockedOr8((volatile signed __int8 *)&v32->AbOrphanedEntrySummary, 1 << v39);
                    goto LABEL_81;
                  }
                  break;
                }
              }
            }
            if ( (*((_DWORD *)&v32->0 + 1) & 0x10000) == 0 )
              KeBugCheckEx(0x162u, (ULONG_PTR)v32, v31, v33, 0LL);
LABEL_81:
            --v32->AbAllocationRegionCount;
            KiAbThreadRemoveBoosts((ULONG_PTR)v32);
            v36 = v32->SpecialApcDisable++ == -1;
            if ( v36 && ($C459BD0D405E8E46662177FB3D0A143F *)v32->ApcState.ApcListHead[0].Flink != &v32->152 )
              KiCheckForKernelApcDelivery(v40);
            KiLeaveGuardedRegionUnsafe(KeGetCurrentThread());
          }
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(v24, &v59, v57);
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
          v9 = v59;
          v3 = a1 + 24;
          v8 = 0;
          v57 = 0;
        }
        v41 = *(_DWORD **)(a1 + 1920);
        if ( !*v41 || *v41 == 3 && v16 < v41[1] )
        {
          if ( !v8 )
            v9 = v16;
          v57 = ++v8;
          goto LABEL_6;
        }
      }
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    v56,
    a1);
  return (unsigned int)v10;
}
