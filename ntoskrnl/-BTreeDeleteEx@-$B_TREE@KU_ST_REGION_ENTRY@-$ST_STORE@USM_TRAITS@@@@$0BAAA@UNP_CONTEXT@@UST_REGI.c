/*
 * XREFs of ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B78F4
 * Callers:
 *     ?BTreeDelete@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405B78BC (-BTreeDelete@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1405B999C (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x1405C4490 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5B28 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?BTreeDeleteNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1405B800C (-BTreeDeleteNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?BTreeFindSeperatorIndexEntry@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAKPEAUSEARCH_RESULT@1@KPEAUPATH_ENTRY@1@@Z @ 0x1405B87C8 (-BTreeFindSeperatorIndexEntry@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_.c)
 *     ?BTreeMergeNodes@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@@Z @ 0x1405B999C (-BTreeMergeNodes@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BA138 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405BBB7C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405BBC3C (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     ?NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405BBCC0 (-NpLeafRemoveInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v4; // ebx
  unsigned __int64 *v5; // rdi
  _DWORD *v7; // rsi
  __int64 v8; // rcx
  char *v9; // rax
  char *v10; // r9
  const void *v11; // rdx
  unsigned int v12; // ebp
  __int64 v13; // rcx
  __int64 v14; // rcx
  char *v15; // r12
  _DWORD **v16; // rdi
  __int64 v17; // r14
  unsigned int v18; // eax
  unsigned __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  void **v24; // rdx
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rcx
  _DWORD *v29; // rdi
  __int128 v31; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v31 = 0LL;
  v7 = (_DWORD *)*v5;
  v8 = (unsigned __int16)*(_DWORD *)*v5;
  v9 = (char *)v5[1];
  v10 = v9;
  if ( *(_BYTE *)(*v5 + 3) )
  {
    v11 = v9 + 4;
    v12 = 510;
    v13 = 4 * v8 + 12;
  }
  else
  {
    v11 = v9 + 16;
    v13 = 16 * v8;
    v12 = 127;
  }
  v14 = v13 - (_QWORD)v9;
  v15 = (char *)v7 + v14;
  if ( (_DWORD *)((char *)v7 + v14) )
    memmove(v9, v11, (size_t)v7 + v14);
  --*(_WORD *)v7;
  if ( *((_BYTE *)v7 + 3) )
    --*(_QWORD *)(a1 + 8);
  if ( *(_DWORD **)a1 == v7 )
  {
    if ( !(unsigned __int16)*v7 && !*((_BYTE *)v7 + 3) )
    {
      memmove(v5, v5 + 2, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
      v16 = (_DWORD **)(a1 + 16);
      --*(_DWORD *)(a2 + 24);
      if ( **(_DWORD **)(a1 + 16) == -1 || *((_BYTE *)v7 + 2) != 2 )
      {
        *(_QWORD *)a1 = *((_QWORD *)v7 + 1);
      }
      else
      {
        *(_QWORD *)a1 = NP_CONTEXT::NpLeafRefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1, 1u);
        if ( **v16 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
        if ( **v16 != -1 )
          NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
        if ( **v16 != -1 )
          NP_CONTEXT::NpLeafRemoveInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), (void **)v7 + 1);
      }
      B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeDeleteNode(
        a1,
        v7);
    }
  }
  else
  {
    if ( (unsigned __int16)*v7 < v12 )
    {
      v17 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2,
              a3,
              v10,
              v31);
      if ( !v17 )
        return (unsigned int)-1073741818;
      v18 = (unsigned __int16)*v7;
      if ( v18 < v12 )
      {
        B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeMergeNodes(
          a1,
          a2,
          v17);
        v5 = (unsigned __int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
        if ( (v17 & 1) != 0 )
        {
          v25 = v17 & 0xFFFFFFFFFFFFFFFEuLL;
          *v5 = v25;
          v26 = (unsigned __int16)*(_DWORD *)v25;
          if ( *(_BYTE *)(v25 + 3) )
            v27 = 4 * v26 + 16;
          else
            v27 = 16 * (v26 + 1);
          v5[1] = v25 + v27 - (_QWORD)v15;
        }
      }
      else
      {
        if ( (v17 & 1) != 0 )
        {
          v19 = v5[1];
          v20 = v18 - v12 + 1;
          if ( *((_BYTE *)v7 + 3) )
            v21 = v19 + 4 * v20;
          else
            v21 = v19 + 16 * v20;
          v5[1] = v21;
        }
        if ( *((_BYTE *)v7 + 3) )
        {
          v22 = *(v5 - 2);
          v23 = 32LL * !(v17 & 1) + *(v5 - 1) - 16;
          v24 = (void **)(v23 <= v22 + 16 ? v22 + 8 : v23 - 8);
          if ( **(_DWORD **)(a1 + 16) != -1 )
            NP_CONTEXT::NpLeafDerefInternal((struct NP_CONTEXT::NP_CTX *)(a1 + 16), v24);
        }
      }
    }
    v28 = *v5;
    v29 = (_DWORD *)v5[1];
    if ( v29 == (_DWORD *)(v28 + 16)
      && *(_BYTE *)(v28 + 3)
      && (unsigned int)B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindSeperatorIndexEntry(
                         a2,
                         0LL,
                         &v31) )
    {
      **((_DWORD **)&v31 + 1) = *v29;
    }
  }
  return v4;
}
