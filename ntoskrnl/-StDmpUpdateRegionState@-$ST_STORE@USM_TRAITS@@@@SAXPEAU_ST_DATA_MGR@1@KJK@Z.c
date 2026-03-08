/*
 * XREFs of ?StDmpUpdateRegionState@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KJK@Z @ 0x1405C614C
 * Callers:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402E6E88 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StCompactRegions@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z @ 0x1405C0D5C (-StCompactRegions@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEADK1KK@Z.c)
 *     ?StDmPageRecordRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUSEARCH_RESULT@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@@Z @ 0x1405C4490 (-StDmPageRecordRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_RECORD@1@PEAUS.c)
 *     ?StDmpSinglePageInsert@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_ST_PAGE_RECORD@1@@Z @ 0x1405C5B28 (-StDmpSinglePageInsert@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_IO_PARAMS@1@PEAU_S.c)
 * Callees:
 *     ?StDmUpdateRegionsToCompactBitmap@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1405C5548 (-StDmUpdateRegionsToCompactBitmap@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@KKK@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C6F6C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 */

int __fastcall ST_STORE<SM_TRAITS>::StDmpUpdateRegionState(__int64 a1, unsigned int a2, int a3, int a4)
{
  __int64 v4; // r14
  __int64 v6; // rbx
  unsigned int v9; // ecx
  __int64 v10; // rax
  _DWORD *v11; // r11

  v4 = *(_QWORD *)(a1 + 1032);
  v6 = a2;
  v9 = *(unsigned __int16 *)(v4 + 2LL * a2);
  if ( *(_BYTE *)(a1 + 776) )
    v10 = 0LL;
  else
    v10 = v9 >> 13;
  *(_WORD *)(v4 + 2LL * a2) = a3 + v9;
  v11 = (_DWORD *)(a1 + 16 * (v10 + 78));
  *(_DWORD *)(a1 + 8 * v10 + 1828) += a3;
  if ( *v11 != a2 )
    LODWORD(v10) = ST_STORE<SM_TRAITS>::StDmUpdateRegionsToCompactBitmap(
                     a1,
                     a2,
                     v9 & 0x1FFF,
                     *(_WORD *)(v4 + 2LL * a2) & 0x1FFF);
  if ( a3 <= 0 )
  {
    if ( (*(_WORD *)(v4 + 2 * v6) & 0x1FFF) == 0 && (_DWORD)v6 != *v11 && !a4 )
      LODWORD(v10) = ST_STORE<SM_TRAITS>::StReleaseRegion(a1, (unsigned int)v6);
  }
  else if ( (_DWORD)v6 == *v11 )
  {
    v11[1] += a3;
  }
  return v10;
}
