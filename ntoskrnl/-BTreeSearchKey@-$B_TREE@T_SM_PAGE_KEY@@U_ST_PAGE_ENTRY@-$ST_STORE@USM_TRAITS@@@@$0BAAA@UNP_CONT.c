/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1405BAEEC
 * Callers:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7238 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?StDmCombineLazyCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z @ 0x14045D10A (-StDmCombineLazyCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405B836C (-BTreeFindLeafSibling@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405B9380 (-BTreeIteratorCleanup@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UN.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B9808 (-BTreeIteratorFromSearchResult@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@.c)
 *     ?StDmHandleDecompressionFailure@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C3B64 (-StDmHandleDecompressionFailure@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAD1PEAU_ST_PAGE.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5B28 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 *     ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5DEC (-StDmpSinglePageLookup@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@P.c)
 *     ?StNpLeafPageOut@?$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z @ 0x1405C6CB0 (-StNpLeafPageOut@-$ST_STORE@USM_TRAITS@@@@SA_KPEAUNP_CTX@NP_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7238 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405BBC3C (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x1405C7AAC (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
        char **a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // edi
  int v8; // ebp
  _QWORD *v9; // rsi
  __int64 v10; // rcx
  char *v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // ecx
  void **v14; // rcx
  char *v15; // r8

  B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
    (__int64 *)a1,
    a3);
  v7 = 0;
  if ( *(_DWORD *)(a3 + 24) == -1 )
  {
    v8 = 0;
    v9 = (_QWORD *)(a3 + 8);
  }
  else
  {
    v8 = 1;
    v10 = 0LL;
    if ( *a1 )
      v10 = (unsigned __int8)(*a1)[2];
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v10 && !(unsigned int)SmArrayGrow(v10, v6, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v9 = *(_QWORD **)a3;
  }
  v11 = *a1;
  if ( !*a1 )
  {
    if ( !v8 )
    {
      *v9 = 0LL;
      v9[1] = 0LL;
    }
    return (unsigned int)-1073741275;
  }
  while ( 1 )
  {
    v12 = -1;
    v13 = (unsigned __int16)*(_DWORD *)v11;
    if ( v11[3] )
      break;
    if ( (unsigned __int16)*(_DWORD *)v11 )
    {
      do
      {
        if ( *(_DWORD *)&v11[16 * ((v13 + v12) >> 1) + 16] <= a2 )
          v12 = (v13 + v12) >> 1;
        else
          v13 = (v13 + v12) >> 1;
      }
      while ( v12 + 1 != v13 );
    }
    if ( v8 )
    {
      *v9 = v11;
      v9[1] = &v11[16 * v13 + 16];
      v9 += 2;
    }
    if ( v13 )
      v14 = (void **)&v11[16 * v13 + 8];
    else
      v14 = (void **)(v11 + 8);
    if ( *(_DWORD *)a1[2] == -1 || v11[2] != 2 )
    {
      v11 = (char *)*v14;
    }
    else
    {
      v11 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(a1 + 2),
                      v14,
                      2 * (*(_BYTE *)(a3 + 32) & 1u));
      if ( !v11 )
        return (unsigned int)-1073741818;
    }
  }
  if ( (unsigned __int16)*(_DWORD *)v11 )
  {
    do
    {
      if ( *(_DWORD *)&v11[8 * ((v13 + v12) >> 1) + 16] >= a2 )
        v13 = (v13 + v12) >> 1;
      else
        v12 = (v13 + v12) >> 1;
    }
    while ( v12 + 1 != v13 );
  }
  *v9 = v11;
  v15 = &v11[8 * v13 + 16];
  v9[1] = v15;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
  if ( v13 >= (unsigned __int16)*(_DWORD *)v11 || *(_DWORD *)v15 < a2 || *(_DWORD *)v15 != a2 )
    return (unsigned int)-1073741275;
  return v7;
}
