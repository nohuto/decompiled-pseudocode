/*
 * XREFs of ?BTreeSearchResultIterStart@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAUSEARCH_RESULT@1@PEAU1@KW4_BTREE_ITERATOR_DISPOSITION@1@@Z @ 0x1405BB0A4
 * Callers:
 *     ?StDmCombineBufferProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE_BUFFER@@@Z @ 0x1405C26A4 (-StDmCombineBufferProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAPEAU_SM_PAGE_COMBINE.c)
 *     ?StDmCombineRegion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C2B20 (-StDmCombineRegion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 * Callees:
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405BABD4 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 */

__int64 __fastcall B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultIterStart(
        __int64 a1,
        __int64 a2,
        int a3)
{
  unsigned int v4; // r8d
  int v5; // eax
  _QWORD *v6; // rcx

  v4 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
         a2,
         a3,
         a1);
  if ( (int)(v4 + 0x80000000) < 0 || v4 == -1073741275 )
  {
    v5 = *(_DWORD *)(a1 + 24);
    if ( v5 == -1 || !v5 )
      v6 = (_QWORD *)(a1 + 8);
    else
      v6 = (_QWORD *)(*(_QWORD *)a1 + 16LL * (unsigned int)(v5 - 1));
    if ( *v6 && !v4 )
      v6[1] += 4LL;
    return 0;
  }
  return v4;
}
