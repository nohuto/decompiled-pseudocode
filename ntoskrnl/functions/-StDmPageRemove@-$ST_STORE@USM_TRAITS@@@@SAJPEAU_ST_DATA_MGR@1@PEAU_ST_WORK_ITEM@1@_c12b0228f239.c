__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRemove(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // r8
  int v5; // ecx
  unsigned int v6; // edi
  __int64 v7; // r15
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 LeafSibling; // rax
  unsigned int v12; // esi
  _DWORD *v13; // rax
  int v14; // eax
  __int64 v15; // r15
  _QWORD *v16; // r13
  __int64 v17; // r13
  __int64 v18; // rax
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ecx
  int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // rdi
  struct _KTHREAD *v25; // rax
  bool v26; // zf
  _DWORD *v27; // rcx
  __int64 v28; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v30; // eax
  int v32; // [rsp+40h] [rbp-38h]
  _DWORD *v33; // [rsp+48h] [rbp-30h]
  unsigned __int64 v34; // [rsp+50h] [rbp-28h]
  __int64 v35[4]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+48h]
  unsigned int v38; // [rsp+D0h] [rbp+58h] BYREF
  unsigned int v39; // [rsp+D8h] [rbp+60h]

  *(_OWORD *)v35 = 0LL;
  v34 = SmEtwEnabled(0);
  v3 = a1 + 24;
  v5 = *(_DWORD *)(a1 + 56) & 1;
  v6 = 0;
  v39 = *(_DWORD *)(v4 + 12) + *(_DWORD *)(v4 + 8) - 1;
  if ( (_BYTE)v5 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      a1 + 24);
  *(_DWORD *)(a1 + 56) &= ~1u;
  if ( (*(_BYTE *)(a1 + 120) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      a1 + 88);
  *(_DWORD *)(a1 + 120) &= ~1u;
  v36 = 0;
LABEL_6:
  v38 = v6;
  while ( 1 )
  {
    LODWORD(v7) = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
                    (char **)a1,
                    *(_DWORD *)(a2 + 8),
                    v3);
    if ( (_DWORD)v7 == -1073741818 )
      break;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorFromSearchResult(
      (unsigned __int8 **)a1,
      (__int64)v35,
      v3);
    v8 = v35[0];
    v7 = 0LL;
    if ( !v35[0] )
      goto LABEL_66;
    v9 = v35[1] + 8;
    v10 = (unsigned __int16)*(_DWORD *)v35[0] + 2LL;
    v35[1] = v9;
    if ( v9 < v35[0] + 8 * v10 )
    {
      v7 = v9;
      goto LABEL_17;
    }
    if ( **(_DWORD **)((a1 + 16) & -(__int64)(a1 != 0)) == -1 )
    {
      LeafSibling = *(_QWORD *)(v35[0] + 8);
    }
    else
    {
      LeafSibling = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindLeafSibling(
                      a1,
                      v35[0]);
      if ( LeafSibling == -1 )
      {
        v7 = -1LL;
        goto LABEL_17;
      }
    }
    if ( LeafSibling )
    {
      v8 = LeafSibling;
      v35[0] = LeafSibling;
      v35[1] = LeafSibling + 16;
      v7 = LeafSibling + 16;
    }
LABEL_17:
    if ( v7 == -1 )
    {
      LODWORD(v7) = -1073741818;
      break;
    }
    if ( !v7 || (v12 = *(_DWORD *)v7, v39 < *(_DWORD *)v7) )
    {
      LODWORD(v7) = 0;
LABEL_66:
      if ( v36 )
      {
        v28 = *(_QWORD *)(a1 + 800);
        if ( (*(_BYTE *)(v28 + 6021) & 4) != 0 )
        {
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v28 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock((volatile signed __int64 *)(v28 + 6024));
          KeAbPostRelease(v28 + 6024);
          CurrentThread = KeGetCurrentThread();
          v26 = CurrentThread->SpecialApcDisable++ == -1;
          if ( v26
            && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6728LL), &v38, v36);
        SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
      }
      if ( !*(_BYTE *)(a1 + 776) && (*(_BYTE *)(a1 + 1904) & 3) != 3 )
      {
        v30 = ST_STORE<SM_TRAITS>::StDmCheckForCompaction(a1, 0);
        if ( v30 )
          ST_STORE<SM_TRAITS>::StQueueCompaction(a1, v30);
      }
      break;
    }
    v13 = ST_STORE<SM_TRAITS>::StDmCombinePageEntry(a1, v7);
    v32 = *(_DWORD *)(v7 + 4);
    v33 = v13;
    ST_STORE<SM_TRAITS>::StDmPageRecordUnprotect(a1, (__int64)v13);
    if ( v34 )
      SmEtwLogStoreOp(v34, 1, v7, v34, *v33, a1, 0, 0);
    v14 = *(_DWORD *)(v3 + 24);
    v15 = v3 + 8;
    v16 = (_QWORD *)(v3 + 8);
    if ( v14 == -1 || !v14 )
    {
      v18 = a1 + 24;
    }
    else
    {
      v17 = 16LL * (unsigned int)(v14 - 1);
      v18 = a1 + 24;
      v16 = (_QWORD *)(*(_QWORD *)(a1 + 24) + v17);
    }
    if ( *v16 == v8 )
    {
      v16[1] = v35[1];
LABEL_30:
      v3 = a1 + 24;
      goto LABEL_35;
    }
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      (__int64 *)a1,
      v18);
    if ( *(_DWORD *)(a1 + 48) == -1 )
    {
      *(_OWORD *)v16 = *(_OWORD *)v35;
      goto LABEL_30;
    }
    v3 = a1 + 24;
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
      (char **)a1,
      *(_DWORD *)(v8 + 16),
      a1 + 24);
    v19 = *(_DWORD *)(a1 + 48);
    if ( v19 != -1 && v19 )
      v15 = *(_QWORD *)v3 + 16LL * (unsigned int)(v19 - 1);
    *(_QWORD *)(v15 + 8) = v35[1];
LABEL_35:
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
      v35,
      (__int64 *)a1);
    *(_OWORD *)v35 = 0LL;
    v20 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteEx(
            a1,
            v3);
    LODWORD(v7) = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741818 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
      break;
    }
    if ( !*(_BYTE *)(a1 + 776) )
    {
      v21 = v33[1];
      if ( !(v21 >> 12) )
        NT_ASSERT("PageRecord->RefCount > 0");
      v33[1] = v21 & 0xFFF | (((v21 >> 12) - 1) << 12);
      if ( ((v21 >> 12) - 1) << 12 )
        continue;
    }
    v22 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
            a1 + 64,
            v32,
            a1 + 88);
    LODWORD(v7) = v22;
    if ( v22 >= 0 )
    {
      LODWORD(v7) = ST_STORE<SM_TRAITS>::StDmPageRecordRemove(a1, (unsigned __int64)v33, a1 + 88);
      if ( (int)v7 < 0 )
        break;
      SmHpChunkFree(a1 + 192);
      if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
      {
        v23 = v36;
        if ( v36 && v12 - v6 != v36 )
        {
          v24 = *(_QWORD *)(a1 + 800);
          if ( (*(_BYTE *)(v24 + 6021) & 4) != 0 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 6024), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v24 + 6024));
            KeAbPostRelease(v24 + 6024);
            v25 = KeGetCurrentThread();
            v26 = v25->SpecialApcDisable++ == -1;
            if ( v26 && ($C71981A45BEB2B45F82C232A7085991E *)v25->ApcState.ApcListHead[0].Flink != &v25->152 )
              KiCheckForKernelApcDelivery();
          }
          SMKM_STORE_MGR<SM_TRAITS>::SmEvictKeys(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 6728LL), &v38, v36);
          SMKM_STORE<SM_TRAITS>::SmStAcquireStoreLockExclusive(*(_QWORD *)(a1 + 800));
          v6 = v38;
          v23 = 0;
          v36 = 0;
        }
        v27 = *(_DWORD **)(a1 + 1920);
        if ( !*v27 || *v27 == 3 && v12 < v27[1] )
        {
          if ( !v23 )
            v6 = v12;
          v36 = v23 + 1;
          goto LABEL_6;
        }
      }
    }
    else
    {
      if ( v22 == -1073741818 )
        break;
      if ( v22 != -1073741275 || **(int **)(a1 + 1920) < 2 )
        NT_ASSERT(
          "(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L) || (Status == ((NTSTATUS)0xC0000225L) && Data"
          "Mgr->PersistState->State >= PersistUnpersisting)");
    }
  }
  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeIteratorCleanup(
    v35,
    (__int64 *)a1);
  return (unsigned int)v7;
}
