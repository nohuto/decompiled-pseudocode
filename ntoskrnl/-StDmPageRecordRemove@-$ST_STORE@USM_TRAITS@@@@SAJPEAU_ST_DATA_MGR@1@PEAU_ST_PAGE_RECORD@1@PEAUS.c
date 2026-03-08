/*
 * XREFs of ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x1405C4490
 * Callers:
 *     ?StDmCombinePageRecords@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@1@Z @ 0x1405C2A08 (-StDmCombinePageRecords@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEA.c)
 *     ?StDmPageRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4650 (-StDmPageRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?BTreeSearchResultDeref@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1402E7380 (-BTreeSearchResultDeref@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@U.c)
 *     ?BTreeDeleteEx@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1405B78F4 (-BTreeDeleteEx@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGI.c)
 *     ?BTreeSearchKey@?$B_TREE@KU_ST_HASH_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_ENTRY_COMPARATOR@2@@@SAJPEAU1@KPEAUSEARCH_RESULT@1@@Z @ 0x1405BAA54 (-BTreeSearchKey@-$B_TREE@KU_ST_HASH_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_HASH_.c)
 *     ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1405C614C (-StDmpUpdateRegionState@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPageRecordRemove(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // esi
  __int64 v11; // r8
  int v12; // eax
  __int64 v13; // rax
  int v14; // r8d

  v6 = ((unsigned int)a2 - ((a2 & 0xFFFFF000) + *(_DWORD *)(a1 + 472))) / *(_DWORD *)(a1 + 464)
     + (*(_DWORD *)((a2 & 0xFFFFFFFFFFFFF000uLL) + 0x10) << *(_DWORD *)(a1 + 456));
  v7 = *(_DWORD *)(a1 + 112);
  if ( v7 == -1 || !v7 )
    v8 = a1 + 96;
  else
    v8 = *(_QWORD *)(a1 + 88) + 16LL * (unsigned int)(v7 - 1);
  if ( **(_DWORD **)(v8 + 8) != v6 )
    NT_ASSERT("RegionEntry->PageRecordId == PageRecordId");
  if ( (*(_DWORD *)(a1 + 184) & 1) != 0 )
    B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchResultDeref(
      (__int64 *)(a1 + 128),
      a1 + 152);
  *(_DWORD *)(a1 + 184) &= ~1u;
  v9 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
         a1 + 64,
         a3,
         a3);
  v10 = v9;
  if ( v9 >= 0 )
  {
    if ( !*(_BYTE *)(a1 + 776) )
    {
      if ( (int)B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_HASH_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_HASH_ENTRY_COMPARATOR>::BTreeSearchKey(
                  a1 + 128,
                  v6,
                  a1 + 152) < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
      v12 = *(_DWORD *)(a1 + 176);
      if ( v12 == -1 || !v12 )
        v13 = a1 + 160;
      else
        v13 = *(_QWORD *)(a1 + 152) + 16LL * (unsigned int)(v12 - 1);
      if ( **(_DWORD **)(v13 + 8) != v6 )
        NT_ASSERT("HashEntry->PageRecordId == PageRecordId");
      v10 = B_TREE<unsigned long,ST_STORE<SM_TRAITS>::_ST_REGION_ENTRY,4096,NP_CONTEXT,ST_STORE<SM_TRAITS>::ST_REGION_ENTRY_COMPARATOR>::BTreeDeleteEx(
              a1 + 128,
              a1 + 152,
              v11);
      if ( v10 < 0 )
        NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
    }
    v14 = 4096;
    if ( (*(_DWORD *)(a2 + 4) & 0xFFF) != 0 )
      v14 = *(_DWORD *)(a2 + 4) & 0xFFF;
    ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(
      a1,
      (unsigned int)(*(_DWORD *)a2 >> *(_DWORD *)(a1 + 812)),
      -((unsigned int)(*(_DWORD *)(a1 + 824) + 15 + v14) >> 4),
      0LL);
  }
  else if ( v9 != -1073741818 )
  {
    NT_ASSERT("(((NTSTATUS)(Status)) >= 0) || Status == ((NTSTATUS)0xC0000006L)");
  }
  return (unsigned int)v10;
}
