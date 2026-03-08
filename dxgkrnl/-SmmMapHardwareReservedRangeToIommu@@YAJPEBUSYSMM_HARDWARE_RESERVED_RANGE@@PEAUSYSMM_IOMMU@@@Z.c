/*
 * XREFs of ?SmmMapHardwareReservedRangeToIommu@@YAJPEBUSYSMM_HARDWARE_RESERVED_RANGE@@PEAUSYSMM_IOMMU@@@Z @ 0x1C006E8DC
 * Callers:
 *     SmmMapExistingMemoryToDomain @ 0x1C006E778 (SmmMapExistingMemoryToDomain.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0205314 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 * Callees:
 *     ?SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z @ 0x1C0013C28 (-SmmGetLogicalAddress@@YA_KPEBUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     ?SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z @ 0x1C006E618 (-SmmMapContiguousRangeToIommu@@YAJPEAUSYSMM_IOMMU@@_K11_N@Z.c)
 */

__int64 __fastcall SmmMapHardwareReservedRangeToIommu(const struct SYSMM_LOGICAL_BLOCK **a1, struct SYSMM_IOMMU *a2)
{
  __int64 LogicalAddress; // rax
  struct _MDL *v3; // r8
  SIZE_T v4; // r9
  struct SYSMM_IOMMU *v5; // r10

  LogicalAddress = SmmGetLogicalAddress(a1[2]);
  return SmmMapContiguousRangeToIommu(v5, LogicalAddress, v3, v4, 0);
}
