/*
 * XREFs of ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405BAA54
 * Callers:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7380 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeFindLeafSibling@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAPEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@PEAU1@PEAU23@K@Z @ 0x1405B8130 (-BTreeFindLeafSibling@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeIteratorCleanup@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAUITERATOR@1@PEAU1@@Z @ 0x1405B9120 (-BTreeIteratorCleanup@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST.c)
 *     ?BTreeIteratorFromSearchResult@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUITERATOR@1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B94B0 (-BTreeIteratorFromSearchResult@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CON.c)
 *     ?StDmCombineBufferAddEntry@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_BUFFER@@PEAU_STDM_COMBINE_ENTRY_CACHE@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C225C (-StDmCombineBufferAddEntry@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_SM_PAGE_COMBINE_B.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x1405C4490 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5B28 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7380 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeNodeFindKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAKPEAU1@PEAUNODE@?$B_TREE_HEADER@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@@@K@Z @ 0x1405B9E48 (-BTreeNodeFindKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HAS.c)
 *     ?Compare@ST_HASH_ENTRY_COMPARATOR@?$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z @ 0x1405BB9A0 (-Compare@ST_HASH_ENTRY_COMPARATOR@-$ST_STORE@USM_TRAITS@@@@SAHPEAXAEBK1@Z.c)
 *     ?NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z @ 0x1405BBC3C (-NpLeafRefInternal@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@PEAPEAXK@Z.c)
 *     SmArrayGrow @ 0x1405C7AAC (SmArrayGrow.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int64 v6; // rdx
  unsigned int v7; // ebx
  int v8; // ebp
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  char *v11; // rsi
  unsigned int Key; // eax
  void **v13; // rcx
  char *v14; // r8
  int v15; // eax
  int v17; // [rsp+60h] [rbp+18h] BYREF
  int v18; // [rsp+68h] [rbp+20h] BYREF

  B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
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
    if ( *(_QWORD *)a1 )
      v10 = *(unsigned __int8 *)(*(_QWORD *)a1 + 2LL);
    if ( *(_DWORD *)(a3 + 28) < (unsigned int)v10 && !(unsigned int)SmArrayGrow(v10, v6, a3 + 28, a3) )
      return (unsigned int)-1073741670;
    v9 = *(_QWORD **)a3;
  }
  v11 = *(char **)a1;
  if ( !*(_QWORD *)a1 )
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
    Key = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeNodeFindKey(
            a1,
            (__int64)v11,
            a2);
    if ( v11[3] )
      break;
    if ( v8 )
    {
      *v9 = v11;
      v9[1] = &v11[16 * Key + 16];
      v9 += 2;
    }
    if ( Key )
      v13 = (void **)&v11[16 * Key + 8];
    else
      v13 = (void **)(v11 + 8);
    if ( **(_DWORD **)(a1 + 16) == -1 || v11[2] != 2 )
    {
      v11 = (char *)*v13;
    }
    else
    {
      v11 = (char *)NP_CONTEXT::NpLeafRefInternal(
                      (struct NP_CONTEXT::NP_CTX *)(a1 + 16),
                      v13,
                      2 * (*(_BYTE *)(a3 + 32) & 1u));
      if ( !v11 )
        return (unsigned int)-1073741818;
    }
  }
  *v9 = v11;
  v14 = &v11[4 * Key + 16];
  v9[1] = v14;
  if ( v8 )
    *(_DWORD *)(a3 + 24) = (((__int64)v9 - *(_QWORD *)a3) >> 4) + 1;
  if ( Key >= (unsigned __int16)*(_DWORD *)v11 )
    return (unsigned int)-1073741275;
  v15 = *(_DWORD *)v14;
  v17 = a2;
  v18 = v15;
  if ( (unsigned int)ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR::Compare(a1, &v18, &v17) )
    return (unsigned int)-1073741275;
  return v7;
}
