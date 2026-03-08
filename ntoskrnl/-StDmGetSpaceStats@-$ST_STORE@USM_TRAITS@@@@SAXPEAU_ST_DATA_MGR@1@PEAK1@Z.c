/*
 * XREFs of ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1405C38B0
 * Callers:
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14045CBDC (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C697C (-StMetaRegionsUpdate@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1405C6F6C (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?SmStEtwFillStoreEvent@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z @ 0x1405CA828 (-SmStEtwFillStoreEvent@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_EVENT_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ST_STORE<SM_TRAITS>::StDmGetSpaceStats(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int *v3; // r9
  int v4; // eax
  unsigned __int64 v5; // rcx

  if ( a2 )
    *a2 = 0;
  if ( a3 )
    *a3 = 0;
  v3 = (int *)(a1 + 1828);
  LOBYTE(v4) = -(char)*(_DWORD *)(a1 + 776);
  v5 = (-(__int64)((unsigned __int8)*(_DWORD *)(a1 + 776) != 0) & 0xFFFFFFFFFFFFFFF9uLL) + 8;
  do
  {
    if ( a2 )
    {
      v4 = *(v3 - 1);
      *a2 += v4;
    }
    if ( a3 )
    {
      v4 = *v3;
      *a3 += *v3;
    }
    v3 += 2;
    --v5;
  }
  while ( v5 );
  return v4;
}
