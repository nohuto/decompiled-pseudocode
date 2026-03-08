/*
 * XREFs of ?StDmRegionGetKeys@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKPEAT_SM_PAGE_KEY@@PEAK@Z @ 0x1405C4F04
 * Callers:
 *     ?StDmRegionEvict@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@Z @ 0x1405C4D60 (-StDmRegionEvict@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_SEARCH_RESULTS@1@KKKK@.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E72DC (-BTreeSearchResultDeref@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeFindPreviousEntry@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAPEAU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B8740 (-BTreeFindPreviousEntry@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405BABD4 (-BTreeSearchKey@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REG.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmRegionGetKeys(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        _DWORD *a6,
        _DWORD *a7)
{
  _DWORD *v8; // rbx
  __int64 v9; // rdi
  _DWORD *v10; // r12
  int v11; // ebp
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  _DWORD *PreviousEntry; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  int v21; // r8d

  v8 = a6;
  v9 = *(_QWORD *)(a2 + 8);
  v10 = &a6[*a7];
  v11 = (a5 - 1) | (a3 << *(_DWORD *)(a1 + 812));
  if ( (*(_DWORD *)(v9 + 32) & 1) == 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 64),
      *(_QWORD *)(a2 + 8));
  *(_DWORD *)(v9 + 32) |= 1u;
  **(_DWORD **)(a1 + 760) = v11;
  result = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeSearchKey(
             a1 + 64,
             *(_DWORD *)(a1 + 768),
             v9);
  if ( (_DWORD)result != -1073741818 )
  {
    if ( !(_DWORD)result )
    {
      v13 = *(_DWORD *)(v9 + 24);
      if ( v13 == -1 || !v13 )
        v14 = v9 + 8;
      else
        v14 = *(_QWORD *)v9 + 16LL * (unsigned int)(v13 - 1);
      v8 = a6 + 1;
      v15 = (unsigned int)(**(_DWORD **)(v14 + 8) >> *(_DWORD *)(a1 + 456));
      _BitScanReverse((unsigned int *)&v16, v15);
      *a6 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8 * v16 + 192) + 16 * (v15 ^ (unsigned int)(1 << v16)))
                      + (unsigned int)(*(_DWORD *)(a1 + 464) * (**(_DWORD **)(v14 + 8) & *(_DWORD *)(a1 + 460)))
                      + *(unsigned int *)(a1 + 472)
                      + 8LL);
    }
    if ( v8 >= v10 )
    {
LABEL_16:
      *a7 = v8 - a6;
      return 0LL;
    }
    else
    {
      while ( 1 )
      {
        PreviousEntry = (_DWORD *)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeFindPreviousEntry(
                                    a1 + 64,
                                    v9);
        if ( PreviousEntry == (_DWORD *)-1LL )
          return 3221225478LL;
        if ( PreviousEntry )
        {
          v18 = (unsigned int)(*PreviousEntry >> *(_DWORD *)(a1 + 456));
          _BitScanReverse((unsigned int *)&v19, v18);
          v20 = (_DWORD *)(*(unsigned int *)(a1 + 472)
                         + (unsigned int)(*(_DWORD *)(a1 + 464) * (*PreviousEntry & *(_DWORD *)(a1 + 460)))
                         + *(_QWORD *)(*(_QWORD *)(a1 + 8 * v19 + 192) + 16 * (v18 ^ (unsigned int)(1 << v19))));
          v21 = *v20 & *(_DWORD *)(a1 + 808);
          if ( *v20 >> *(_DWORD *)(a1 + 812) == a3 )
          {
            *v8++ = v20[2];
            if ( v21 )
            {
              if ( v8 < v10 )
                continue;
            }
          }
        }
        goto LABEL_16;
      }
    }
  }
  return result;
}
