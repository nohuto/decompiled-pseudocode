/*
 * XREFs of ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28
 * Callers:
 *     SmmMapExistingMemoryToDomain @ 0x1C006E778 (SmmMapExistingMemoryToDomain.c)
 *     ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x1C006E8DC (-SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z.c)
 *     SmmMapNonPagedObjectToIommu @ 0x1C006E914 (SmmMapNonPagedObjectToIommu.c)
 *     SmmMapPagedObjectToIommu @ 0x1C006EAC0 (SmmMapPagedObjectToIommu.c)
 *     SmmUnmapNonPagedObjectFromIommu @ 0x1C006ECF0 (SmmUnmapNonPagedObjectFromIommu.c)
 *     SmmUnmapPagedObjectFromIommu @ 0x1C006EE14 (SmmUnmapPagedObjectFromIommu.c)
 *     ?SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z @ 0x1C006F584 (-SmmBuildAdl@@YAXPEAUSYSMM_ADAPTER_OBJECT@@PEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADL@@II@Z.c)
 *     SmmSetAdlBaseAddress @ 0x1C006F730 (SmmSetAdlBaseAddress.c)
 *     SmmMapLockedPagesToIommu @ 0x1C007138C (SmmMapLockedPagesToIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0071428 (SmmUnmapLockedPagesFromIommu.c)
 *     ?SysMmGetLogicalAddress@@YA_KQEAX@Z @ 0x1C01D1B50 (-SysMmGetLogicalAddress@@YA_KQEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall SmmGetLogicalAddress(const struct SYSMM_LOGICAL_BLOCK *a1)
{
  if ( a1 )
    return *((_QWORD *)a1 + 4) << 12;
  else
    return 0LL;
}
