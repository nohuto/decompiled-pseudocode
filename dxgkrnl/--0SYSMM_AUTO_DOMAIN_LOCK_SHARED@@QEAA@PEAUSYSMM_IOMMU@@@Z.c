/*
 * XREFs of ??0SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@PEAUSYSMM_IOMMU@@@Z @ 0x1C0013548
 * Callers:
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C0013274 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmClosePhysicalObject @ 0x1C0013468 (SmmClosePhysicalObject.c)
 *     ?SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002A600 (-SysMmMapIommuRange@@YAJPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z @ 0x1C002A700 (-SysMmUnmapIommuRange@@YAXPEAUSYSMM_ADAPTER@@_KPEAU_MDL@@_N@Z.c)
 *     ?SysMmMapIommuContiguousRange@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x1C006EF00 (-SysMmMapIommuContiguousRange@@YAJPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z.c)
 *     ?SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z @ 0x1C006EF90 (-SysMmUnmapIommuContiguousRange@@YAXPEAUSYSMM_ADAPTER@@_KT_LARGE_INTEGER@@1_N@Z.c)
 *     SmmMapLockedPagesToIommu @ 0x1C007138C (SmmMapLockedPagesToIommu.c)
 *     SmmUnmapLockedPagesFromIommu @ 0x1C0071428 (SmmUnmapLockedPagesFromIommu.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x1C0205314 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 * Callees:
 *     <none>
 */

SYSMM_AUTO_DOMAIN_LOCK_SHARED *__fastcall SYSMM_AUTO_DOMAIN_LOCK_SHARED::SYSMM_AUTO_DOMAIN_LOCK_SHARED(
        SYSMM_AUTO_DOMAIN_LOCK_SHARED *this,
        struct SYSMM_IOMMU *a2)
{
  KIRQL CurrentIrql; // al
  __int64 v4; // rcx

  *(_QWORD *)this = a2;
  CurrentIrql = KeGetCurrentIrql();
  v4 = *(_QWORD *)this;
  *((_BYTE *)this + 8) = CurrentIrql;
  if ( CurrentIrql >= 2u )
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v4 + 8));
  else
    ExAcquirePushLockSharedEx(v4 + 16, 0LL);
  return this;
}
