/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAT_SM_PAGE_KEY@@@Z @ 0x1405B8B78
 * Callers:
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BB3AC (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BCB34 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1405B9DE4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     ?BTreeRedistribute@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BA45C (-BTreeRedistribute@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BB3AC (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmArrayGrow @ 0x1405C7AAC (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rax
  __int64 *v11; // rsi
  _DWORD *v12; // rdi
  unsigned int v13; // r12d
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  _DWORD *v21; // r8
  int v22; // edx
  int v23; // ebp
  char v24; // al
  __int64 v25; // rcx
  int v26; // eax
  _DWORD *v27; // rax
  _QWORD *v28; // rsi
  int v29; // eax

  v3 = *a1;
  v4 = 0;
  v8 = 0LL;
  if ( v3 )
    v8 = *(unsigned __int8 *)(v3 + 2);
  v9 = *(_DWORD *)(a2 + 24);
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v8 && !(unsigned int)SmArrayGrow(v8, a2, a2 + 28, a2) )
    return (unsigned int)-1073741670;
  if ( v9 )
  {
    v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v9 - 1));
  }
  else
  {
    v10 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            v8,
            1LL,
            1LL);
    *a1 = v10;
    if ( !v10 )
      return (unsigned int)-1073741670;
    v11 = *(__int64 **)a2;
    *v11 = v10;
    v11[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v12 = (_DWORD *)*v11;
  v13 = (unsigned __int8)-(*(_BYTE *)(*v11 + 3) != 0) + 255;
  v14 = (unsigned __int16)*(_DWORD *)*v11;
  if ( (unsigned int)v14 >= v13 )
  {
    v15 = v11[1] - (_QWORD)v12 - 16;
    v16 = v15 >> 3;
    v17 = v15 >> 4;
    if ( !*(_BYTE *)(*v11 + 3) )
      LODWORD(v16) = v17;
    if ( v12 == (_DWORD *)*a1 )
    {
      v19 = 0LL;
      v18 = 0LL;
    }
    else
    {
      v18 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeRedistribute(
              v14,
              a2);
      v19 = 32LL * ((v18 & 1) == 0) - 16 + *(v11 - 1);
    }
    v20 = (unsigned __int16)*v12;
    if ( v20 < v13 )
    {
      if ( (v18 & 1) != 0 )
      {
        v21 = (_DWORD *)(v18 & 0xFFFFFFFFFFFFFFFEuLL);
        v22 = v20 + v16 - v13;
        if ( *((_BYTE *)v12 + 3) )
        {
          if ( v22 > 0 )
            goto LABEL_20;
        }
        else
        {
          if ( v22 >= 0 )
          {
LABEL_20:
            if ( v12 != v21 )
            {
LABEL_32:
              *v11 = (__int64)v12;
              if ( *((_BYTE *)v12 + 3) )
                v27 = &v12[2 * v22 + 4];
              else
                v27 = &v12[4 * v22 + 4];
              v11[1] = (__int64)v27;
              goto LABEL_36;
            }
LABEL_21:
            *(v11 - 1) = v19;
            goto LABEL_32;
          }
          ++v22;
        }
        v12 = v21;
        v22 += (unsigned __int16)*v21;
        goto LABEL_21;
      }
      v22 = v16;
      if ( (int)v16 <= v20 )
        goto LABEL_32;
      v23 = v16 - v20;
      v24 = *((_BYTE *)v12 + 3);
      v12 = (_DWORD *)v18;
      *(v11 - 1) = v19;
LABEL_30:
      v22 = v23 - 1;
      if ( v24 )
        v22 = v23;
      goto LABEL_32;
    }
    v25 = B_TREE<_SM_PAGE_KEY,SMKM_STORE_MGR<SM_TRAITS>::SMKM_FRONTEND_ENTRY,4096,B_TREE_DUMMY_NODE_POOL,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSplitChild(
            a1,
            a2,
            v18,
            v19);
    if ( v25 )
    {
      v22 = v16;
      v11 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v26 = (unsigned __int16)*v12;
      if ( (int)v16 <= v26 )
        goto LABEL_32;
      v23 = v16 - v26;
      v24 = *((_BYTE *)v12 + 3);
      *(v11 - 1) += 16LL;
      v12 = (_DWORD *)v25;
      goto LABEL_30;
    }
    return (unsigned int)-1073741670;
  }
LABEL_36:
  v28 = (_QWORD *)v11[1];
  v29 = *v12;
  if ( *((_BYTE *)v12 + 3) )
  {
    memmove(v28 + 1, v28, (size_t)v12 + 8LL * (unsigned __int16)v29 + 16 - (_QWORD)v28);
    *v28 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v28 + 2, v28, (size_t)v12 + 16 * ((unsigned __int16)v29 + 1LL) - (_QWORD)v28);
    *(_OWORD *)v28 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v12;
  return v4;
}
