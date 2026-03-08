/*
 * XREFs of ?BTreeInsertEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@PEAK@Z @ 0x1405B8894
 * Callers:
 *     ?BTreeInsert@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAUSEARCH_RESULT@1@@Z @ 0x1405B883C (-BTreeInsert@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BB118 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5B28 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x1405B9D80 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?BTreeRedistribute@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BA138 (-BTreeRedistribute@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HA.c)
 *     ?BTreeSplitChild@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405BB118 (-BTreeSplitChild@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH.c)
 *     ?NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z @ 0x1405BBB7C (-NpLeafDerefInternal@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAPEAX@Z.c)
 *     SmArrayGrow @ 0x1405C7AAC (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeInsertEx(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 *v13; // rsi
  _DWORD *v14; // rdi
  unsigned int v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // r10
  __int64 v21; // r8
  unsigned __int64 v22; // r9
  int v23; // edx
  _DWORD *v24; // r8
  int v25; // edx
  char v26; // al
  int v27; // ebp
  __int64 v28; // rcx
  void **v29; // rdx
  struct NP_CONTEXT::NP_CTX *v30; // rcx
  __int64 v31; // rcx
  int v32; // eax
  __int64 v33; // rax
  void **v34; // rdx
  __int64 v35; // rax
  unsigned __int64 v36; // rcx
  void **v37; // rax
  struct NP_CONTEXT::NP_CTX *v38; // rcx
  _DWORD *v39; // rsi
  int v40; // eax

  v4 = *a1;
  v5 = 0;
  v9 = 0LL;
  if ( v4 )
    v9 = *(unsigned __int8 *)(v4 + 2);
  v10 = *(_DWORD *)(a2 + 24);
  v11 = a2 + 28;
  if ( *(_DWORD *)(a2 + 28) <= (unsigned int)v9 && !(unsigned int)SmArrayGrow(v9, a2, v11, a2) )
    return (unsigned int)-1073741670;
  if ( v10 )
  {
    v13 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(v10 - 1));
  }
  else
  {
    v12 = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeNewNode(
            a1,
            1LL,
            1LL);
    *a1 = v12;
    if ( !v12 )
      return (unsigned int)-1073741670;
    v13 = *(__int64 **)a2;
    *v13 = v12;
    v13[1] = *a1 + 16;
    ++*(_DWORD *)(a2 + 24);
  }
  v14 = (_DWORD *)*v13;
  v15 = *(_BYTE *)(*v13 + 3) != 0 ? 1020 : 255;
  if ( (unsigned __int16)*(_DWORD *)*v13 >= v15 )
  {
    v16 = v13[1] - (_QWORD)v14 - 16;
    v17 = v16 >> 2;
    v18 = v16 >> 4;
    if ( !*(_BYTE *)(*v13 + 3) )
      LODWORD(v17) = v18;
    if ( v14 == (_DWORD *)*a1 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
    }
    else
    {
      v19 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeRedistribute(
              a1,
              a2,
              v11,
              a4);
      v20 = *(v13 - 1);
      v21 = v19;
      v22 = v20 + 32LL * ((v19 & 1) == 0) - 16;
    }
    v23 = (unsigned __int16)*v14;
    if ( v23 < v15 )
    {
      if ( (v21 & 1) != 0 )
      {
        v24 = (_DWORD *)(v21 & 0xFFFFFFFFFFFFFFFEuLL);
        v25 = v17 + v23 - v15;
        if ( *((_BYTE *)v14 + 3) )
        {
          if ( v25 > 0 )
          {
LABEL_20:
            if ( v14 == v24 )
            {
LABEL_21:
              *(v13 - 1) = v22;
              goto LABEL_43;
            }
            v20 = v22;
LABEL_43:
            *v13 = (__int64)v14;
            v33 = v25;
            if ( *((_BYTE *)v14 + 3) )
            {
              v34 = (void **)(v20 - 8);
              v13[1] = (__int64)&v14[v33 + 4];
              v35 = *(v13 - 2);
              v36 = v35 + 16;
              v37 = (void **)(v35 + 8);
              if ( v20 <= v36 )
                v34 = v37;
              v38 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
              if ( **(_DWORD **)v38 != -1 )
                NP_CONTEXT::NpLeafDerefInternal(v38, v34);
            }
            else
            {
              v13[1] = (__int64)&v14[4 * v25 + 4];
            }
            goto LABEL_49;
          }
        }
        else
        {
          if ( v25 >= 0 )
            goto LABEL_20;
          ++v25;
        }
        v14 = v24;
        v25 += (unsigned __int16)*v24;
        goto LABEL_21;
      }
      if ( (int)v17 > v23 )
      {
        v26 = *((_BYTE *)v14 + 3);
        v27 = v17 - v23;
        v14 = (_DWORD *)v21;
        *(v13 - 1) = v22;
        goto LABEL_38;
      }
      v20 = v22;
      goto LABEL_42;
    }
    if ( v21 && *((_BYTE *)v14 + 3) )
    {
      v28 = *(v13 - 2);
      v29 = (void **)(v22 - 8);
      if ( v22 <= v28 + 16 )
        v29 = (void **)(v28 + 8);
      v30 = (struct NP_CONTEXT::NP_CTX *)((unsigned __int64)(a1 + 2) & -(__int64)(a1 != 0LL));
      if ( **(_DWORD **)v30 != -1 )
        NP_CONTEXT::NpLeafDerefInternal(v30, v29);
    }
    v31 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSplitChild(
            a1,
            a2);
    if ( v31 )
    {
      v13 = (__int64 *)(*(_QWORD *)a2 + 16LL * (unsigned int)(*(_DWORD *)(a2 + 24) - 1));
      v32 = (unsigned __int16)*v14;
      v20 = *(v13 - 1);
      if ( (int)v17 > v32 )
      {
        v27 = v17 - v32;
        v26 = *((_BYTE *)v14 + 3);
        v14 = (_DWORD *)v31;
        *(v13 - 1) = v20 + 16;
LABEL_38:
        v25 = v27 - 1;
        if ( v26 )
          v25 = v27;
        goto LABEL_43;
      }
      v20 += 16LL;
LABEL_42:
      v25 = v17;
      goto LABEL_43;
    }
    return (unsigned int)-1073741670;
  }
LABEL_49:
  v39 = (_DWORD *)v13[1];
  v40 = *v14;
  if ( *((_BYTE *)v14 + 3) )
  {
    memmove(v39 + 1, v39, (size_t)v14 + 4LL * (unsigned __int16)v40 + 16 - (_QWORD)v39);
    *v39 = *a3;
    ++a1[1];
  }
  else
  {
    memmove(v39 + 4, v39, (size_t)v14 + 16 * ((unsigned __int16)v40 + 1LL) - (_QWORD)v39);
    *(_OWORD *)v39 = *(_OWORD *)a3;
  }
  ++*(_WORD *)v14;
  return v5;
}
