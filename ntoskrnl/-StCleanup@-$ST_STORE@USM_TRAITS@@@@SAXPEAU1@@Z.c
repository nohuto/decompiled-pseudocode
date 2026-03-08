/*
 * XREFs of ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6DD8
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E69A8 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1402E6E88 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     StEtaCleanup @ 0x1402E7424 (StEtaCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E7464 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmCrEncCleanup @ 0x140770FE4 (SmCrEncCleanup.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StCleanup(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_DWORD *)(a1 + 4248) |= 1u;
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 80, 0LL);
  ST_STORE<SM_TRAITS>::StDmCleanup(a1 + 2016, 0LL);
  v2 = *(void **)(a1 + 56);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  v3 = *(void **)(a1 + 64);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  v4 = *(void **)(a1 + 72);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  v5 = *(void **)(a1 + 4016);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  v6 = *(void **)(a1 + 4208);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  StEtaCleanup(a1 + 3960);
  SmCrEncCleanup(a1 + 4064);
  return ST_STORE<SM_TRAITS>::StDrainReadContextList(a1);
}
