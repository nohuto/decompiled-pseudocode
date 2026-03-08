/*
 * XREFs of ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BB3AC
 * Callers:
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1405B8B78 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1405B8B78 (-BTreeInsertEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1405B9DE4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // r13
  __int64 v5; // rdi
  _BYTE *v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbp
  int *v9; // rdx
  int v10; // eax
  int *v11; // rbx
  void *v12; // rcx
  unsigned int v13; // r12d
  __int64 v14; // rcx
  _BYTE *v15; // rax
  _BYTE *v16; // r12
  _BYTE *v17; // rbx
  int v18; // eax
  __int128 v20; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  v4 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
  v5 = *v4;
  v6 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
         (__int64)a1,
         *(_BYTE *)(*v4 + 3LL),
         *(_BYTE *)(*v4 + 2LL));
  v7 = v6;
  if ( !v6 )
    return (_QWORD *)v3;
  DWORD1(v20) = 0;
  *((_QWORD *)&v20 + 1) = v6;
  v8 = (*(_DWORD *)v5 >> 1) & 0x7FFF;
  if ( *(_BYTE *)(v5 + 3) )
  {
    v9 = (int *)(v5 + 16 + 8 * v8);
    if ( (*(_DWORD *)v5 & 1) != 0 && (unsigned __int64)(v9 + 2) < v4[1] )
    {
      v9 += 2;
      LODWORD(v8) = v8 + 1;
    }
    v10 = *v9;
    v11 = 0LL;
  }
  else
  {
    v9 = 0LL;
    v11 = (int *)(v5 + 16 * (((*(_DWORD *)v5 >> 1) & 0x7FFF) + 1LL));
    v10 = *v11;
  }
  LODWORD(v20) = v10;
  v12 = v7 + 2;
  v13 = (unsigned __int16)*(_DWORD *)v5 - (_DWORD)v8;
  if ( *(_BYTE *)(v5 + 3) )
  {
    v7[1] = *(_QWORD *)(v5 + 8);
    memmove(v12, v9, 8LL * v13);
  }
  else
  {
    memmove(v12, v11 + 4, 16LL * --v13);
    v7[1] = *((_QWORD *)v11 + 1);
  }
  *(_WORD *)v7 = v13;
  if ( *a1 != v5 )
  {
    --*(_DWORD *)(a2 + 24);
    v18 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
            a1,
            a2,
            &v20);
    ++*(_DWORD *)(a2 + 24);
    if ( v18 >= 0 )
      goto LABEL_15;
LABEL_18:
    ExFreePoolWithTag(v7, 0);
    return (_QWORD *)v3;
  }
  v15 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
          v14,
          0,
          *(_BYTE *)(v5 + 2) + 1);
  v16 = v15;
  if ( !v15 )
    goto LABEL_18;
  v17 = v15 + 16;
  *((_QWORD *)v15 + 1) = v5;
  *((_OWORD *)v15 + 1) = v20;
  *(_WORD *)v15 = 1;
  *a1 = (__int64)v15;
  memmove(v4 + 2, v4, 16LL * (unsigned int)(*(_DWORD *)(a2 + 28) - 1));
  *v4 = v16;
  v4[1] = v17;
  ++*(_DWORD *)(a2 + 24);
LABEL_15:
  *(_WORD *)v5 = v8;
  if ( *(_BYTE *)(v5 + 3) )
    *(_QWORD *)(v5 + 8) = v7;
  return v7;
}
