/*
 * XREFs of ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006F8F4
 * Callers:
 *     ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002B700 (-SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006F248 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006F7D0 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006F920 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006FA44 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0072058 (SmmUnmapLockedPagesFromIommu.c)
 * Callees:
 *     SmmUnmapIommu @ 0x1C002B53E (SmmUnmapIommu.c)
 *     SmmIommuUnmapReferenced @ 0x1C006F1F4 (SmmIommuUnmapReferenced.c)
 */

void __fastcall SmmUnmapMdlFromIommu(struct SYSMM_IOMMU *a1, __int64 a2, struct _MDL *a3, char a4)
{
  if ( !a4 || (*((_DWORD *)a1 + 7) & 1) != 0 )
    SmmUnmapIommu((__int64)a1, a2, (__int64)a3);
  else
    SmmIommuUnmapReferenced((__int64)a1, (__int64)a3);
}
