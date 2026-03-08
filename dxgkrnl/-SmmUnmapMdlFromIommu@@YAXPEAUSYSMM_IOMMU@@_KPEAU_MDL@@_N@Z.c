/*
 * XREFs of ?SmmUnmapMdlFromIommu@@YAXPEAUSYSMM_IOMMU@@_KPEAU_MDL@@_N@Z @ 0x1C006ECC4
 * Callers:
 *     ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002A700 (-SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E618 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     ?SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006EBA0 (-SmmUnmapContiguousRangeFromIommu@@YAXPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006ECF0 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006EE14 (SmmUnmapPagedObjectFromIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0071428 (SmmUnmapLockedPagesFromIommu.c)
 * Callees:
 *     SmmUnmapIommu @ 0x1C002A53E (SmmUnmapIommu.c)
 *     SmmIommuUnmapReferenced @ 0x1C006E5C4 (SmmIommuUnmapReferenced.c)
 */

void __fastcall SmmUnmapMdlFromIommu(struct SYSMM_IOMMU *a1, __int64 a2, struct _MDL *a3, char a4)
{
  if ( !a4 || (*((_DWORD *)a1 + 7) & 1) != 0 )
    SmmUnmapIommu((__int64)a1, a2, (__int64)a3);
  else
    SmmIommuUnmapReferenced((__int64)a1, (__int64)a3);
}
