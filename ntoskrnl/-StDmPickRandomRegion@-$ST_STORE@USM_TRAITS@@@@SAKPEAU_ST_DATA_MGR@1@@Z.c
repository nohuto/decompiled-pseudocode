/*
 * XREFs of ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x1405C4CF8
 * Callers:
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1405C3534 (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x1405C7130 (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPickRandomRegion(__int64 a1)
{
  __int64 v1; // r8
  unsigned int v2; // ecx
  unsigned int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // edx
  int v6; // r9d
  unsigned int v7; // eax
  unsigned int v8; // r9d

  v1 = a1;
  v2 = *(_DWORD *)(a1 + 856);
  if ( v2 )
  {
    v3 = (unsigned int)(__rdtsc() >> 4) % v2 + 1;
    v4 = 0xFFFFFFFFLL;
    if ( v3 )
      v4 = v3 - 1;
    while ( ST_STORE<SM_TRAITS>::StStagingRegionFind(v1, v4) )
    {
      v7 = v5 + 1;
      v8 = v6 + 1;
      v4 = 0LL;
      if ( v7 != *(_DWORD *)(v1 + 788) )
        v4 = v7;
      if ( v8 >= 7 )
        return (unsigned int)-1;
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v5;
}
