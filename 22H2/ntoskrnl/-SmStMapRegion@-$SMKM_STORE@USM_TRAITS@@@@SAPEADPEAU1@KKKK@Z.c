/*
 * XREFs of ?SmStMapRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEADPEAU1@KKKK@Z @ 0x1405C1068
 * Callers:
 *     ?SmStCompareRegionDataCallback@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z @ 0x1405C0690 (-SmStCompareRegionDataCallback@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_HELPER@@PEAXK@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x1405C6370 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmpSinglePageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_IO_PARAMS@1@PEAXPEAU_ST_PAGE_LOCATION@1@@Z @ 0x1405C8394 (-StDmpSinglePageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1.c)
 *     ?StMapAndLockRegion@?$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z @ 0x1405C8C34 (-StMapAndLockRegion@-$ST_STORE@USM_TRAITS@@@@SAPEADPEAU_ST_DATA_MGR@1@KKK@Z.c)
 * Callees:
 *     ?SmStMapPhysicalRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405C0FCC (-SmStMapPhysicalRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 *     ?SmStMapVirtualRegion@?$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z @ 0x1405C1098 (-SmStMapVirtualRegion@-$SMKM_STORE@USM_TRAITS@@@@SAPEAXPEAU1@KKKK@Z.c)
 */

__int64 __fastcall SMKM_STORE<SM_TRAITS>::SmStMapRegion(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        int a5)
{
  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
    return SMKM_STORE<SM_TRAITS>::SmStMapVirtualRegion(a1, a2, a3, a4, a5);
  else
    return SMKM_STORE<SM_TRAITS>::SmStMapPhysicalRegion(a1, a2, a3, a4, a5);
}
