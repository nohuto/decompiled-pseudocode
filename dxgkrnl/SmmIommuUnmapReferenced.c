/*
 * XREFs of SmmIommuUnmapReferenced @ 0x1C006E5C4
 * Callers:
 *     ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006ECC4 (-SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z.c)
 * Callees:
 *     SmmIoMmuUnmapStagingMdl @ 0x1C006E17C (SmmIoMmuUnmapStagingMdl.c)
 */

__int64 __fastcall SmmIommuUnmapReferenced(__int64 a1, __int64 a2)
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
  return SmmIoMmuUnmapStagingMdl(a1, (unsigned int *)v3);
}
