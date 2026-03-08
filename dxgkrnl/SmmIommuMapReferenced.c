/*
 * XREFs of SmmIommuMapReferenced @ 0x1C006E404
 * Callers:
 *     ?SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C002A460 (-SmmMapMdlToIommu@@YAJPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 * Callees:
 *     SmmIommuMapStagingMdl @ 0x1C006E458 (SmmIommuMapStagingMdl.c)
 */

__int64 __fastcall SmmIommuMapReferenced(__int64 a1, __int64 a2)
{
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+30h] [rbp-18h]
  int v5; // [rsp+34h] [rbp-14h]
  int v6; // [rsp+38h] [rbp-10h]
  int v7; // [rsp+3Ch] [rbp-Ch]

  v7 = 0;
  v6 = 0;
  v3[0] = a2 + 48;
  v4 = *(_DWORD *)(a2 + 40) >> 12;
  v3[1] = *(_QWORD *)(a1 + 176) + 48LL;
  v5 = *(_DWORD *)(a1 + 240);
  return SmmIommuMapStagingMdl(a1, v3);
}
