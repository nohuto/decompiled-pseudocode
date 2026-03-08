/*
 * XREFs of ?StMetaRegionsUpdate@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C697C
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ?NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z @ 0x1405BBE14 (-NpNodesPageOut@NP_CONTEXT@@SAJPEAUNP_CTX@1@@Z.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x1405C38B0 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x1405C50D8 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7158 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StMetaRegionsUpdate(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  int v5; // r12d
  __int64 v6; // rbp
  unsigned int v7; // r8d
  int v8; // esi
  int v9; // ebx
  __int64 v10; // r14
  unsigned int v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0;
  v2 = a1 + 2016;
  v5 = 0;
  v6 = 0LL;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a1 + 2016, &v12, 0LL);
  v7 = *(_DWORD *)(a1 + 2872) - v12;
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    v8 = 2;
    if ( v7 < 2 )
    {
      v12 = 0;
      v10 = a1 + 80;
      v6 = v2;
      goto LABEL_9;
    }
    goto LABEL_3;
  }
  if ( v7 < 8 )
  {
LABEL_3:
    v9 = 1075380276;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  v10 = v2;
  v6 = a1 + 80;
  if ( *(_DWORD *)(v2 + 856) != v7 )
    v8 = *(_DWORD *)(a1 + 2872) - v12;
  v12 = 0;
  if ( v8 )
  {
LABEL_9:
    while ( 1 )
    {
      v9 = ST_STORE<SM_TRAITS>::StDmRegionRemove(v10, &v12);
      if ( v9 < 0 )
        break;
      ++v5;
      *(_BYTE *)(((unsigned __int64)v12 >> 3) + *(_QWORD *)(v6 + 848)) |= 1 << (v12 & 7);
      ++*(_DWORD *)(v6 + 856);
      if ( !--v8 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v9 = 0;
  }
LABEL_12:
  ST_STORE<SM_TRAITS>::StStoreWorkItemCleanup(a1, a2);
  if ( v6 == v2 && v5 && v9 != -1073741818 )
  {
    NP_CONTEXT::NpNodesPageOut((struct NP_CONTEXT::NP_CTX *)((a1 + 96) & -(__int64)(a1 != -80)));
    NP_CONTEXT::NpNodesPageOut((struct NP_CONTEXT::NP_CTX *)((a1 + 160) & -(__int64)(a1 != -144)));
  }
  return (unsigned int)v9;
}
