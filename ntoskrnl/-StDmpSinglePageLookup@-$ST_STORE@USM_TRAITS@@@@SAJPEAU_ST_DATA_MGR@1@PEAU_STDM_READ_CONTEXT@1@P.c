/*
 * XREFs of ?StDmpSinglePageLookup@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAPEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5DEC
 * Callers:
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1405C5EE4 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7238 (-BTreeSearchResultDeref@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@.c)
 *     ?ST_PAGE_RECORD_GET@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_ENTRY@1@@Z @ 0x14045C554 (-ST_PAGE_RECORD_GET@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_PAGE_RECORD@1@PEAU_ST_DATA_MGR@1@PEAU_ST_.c)
 *     ?BTreeFindNextEntry@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAU_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B86A8 (-BTreeFindNextEntry@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_.c)
 *     ?BTreeSearchKey@?$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@T_SM_PAGE_KEY@@PEAUSEARCH_RESULT@1@@Z @ 0x1405BAEEC (-BTreeSearchKey@-$B_TREE@T_SM_PAGE_KEY@@U_ST_PAGE_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONT.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmpSinglePageLookup(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v5; // rbx
  _DWORD *NextEntry; // rax
  __int64 v10; // rdx
  __int64 result; // rax
  int v12; // eax
  __int64 v13; // rax

  v5 = *(_QWORD *)(a2 + 24);
  if ( *(_BYTE *)a3 && *(_DWORD *)(a2 + 40) == *(_DWORD *)(a1[100] + 6036) )
  {
    NextEntry = (_DWORD *)B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeFindNextEntry(
                            (__int64)a1,
                            *(_QWORD *)(a2 + 24));
    v10 = (__int64)NextEntry;
    if ( NextEntry == (_DWORD *)-1LL )
      return 3221225478LL;
    if ( !NextEntry || *NextEntry != *(_DWORD *)(a3 + 16) )
      return 3221226021LL;
    goto LABEL_16;
  }
  if ( (*(_DWORD *)(v5 + 32) & 1) == 0 )
    B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchResultDeref(
      a1,
      *(_QWORD *)(a2 + 24));
  *(_DWORD *)(v5 + 32) |= 1u;
  result = B_TREE<_SM_PAGE_KEY,ST_STORE<SM_TRAITS>::_ST_PAGE_ENTRY,4096,NP_CONTEXT,B_TREE_KEY_COMPARATOR<_SM_PAGE_KEY>>::BTreeSearchKey(
             (char **)a1,
             *(_DWORD *)(a3 + 16),
             v5);
  if ( (int)result >= 0 )
  {
    *(_DWORD *)(a2 + 40) = *(_DWORD *)(a1[100] + 6036);
    v12 = *(_DWORD *)(v5 + 24);
    if ( v12 == -1 || !v12 )
      v13 = v5 + 8;
    else
      v13 = *(_QWORD *)v5 + 16LL * (unsigned int)(v12 - 1);
    v10 = *(_QWORD *)(v13 + 8);
LABEL_16:
    *a4 = ST_STORE<SM_TRAITS>::ST_PAGE_RECORD_GET(a1, v10);
    return 0LL;
  }
  return result;
}
