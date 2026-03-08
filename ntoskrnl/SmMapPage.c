/*
 * XREFs of SmMapPage @ 0x1405CB248
 * Callers:
 *     ?StDmPageAdd@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C4210 (-StDmPageAdd@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmSinglePageTransfer@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x1405C53A8 (-StDmSinglePageTransfer@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD11PEAU_ST_PAGE_LO.c)
 *     ?StGetStats@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C62AC (-StGetStats@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1403272A0 (MmMapLockedPagesSpecifyCache.c)
 */

PVOID __fastcall SmMapPage(__int64 a1, _DWORD *a2)
{
  PVOID result; // rax

  if ( (*(_BYTE *)(a1 + 10) & 5) != 0 )
    result = *(PVOID *)(a1 + 24);
  else
    result = MmMapLockedPagesSpecifyCache((PMDL)a1, 0, MmCached, 0LL, 0, 0x40000010u);
  if ( result )
    *a2 = *(_DWORD *)(a1 + 40);
  return result;
}
