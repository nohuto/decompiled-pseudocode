/*
 * XREFs of ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1405C7130
 * Callers:
 *     ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x1405C4CF8 (-StDmPickRandomRegion@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1405C50D8 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall ST_STORE<SM_TRAITS>::StStagingRegionFind(__int64 a1, int a2)
{
  _DWORD *result; // rax
  unsigned __int64 v3; // rcx

  result = (_DWORD *)(a1 + 1104);
  v3 = a1 + 1248;
  while ( (unsigned __int64)result < v3 )
  {
    if ( *result == a2 )
      return result;
    result += 6;
  }
  return 0LL;
}
