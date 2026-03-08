/*
 * XREFs of ??1SYSMM_AUTO_DOMAIN_LOCK_SHARED@@QEAA@XZ @ 0x1C00135B4
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

void __fastcall SYSMM_AUTO_DOMAIN_LOCK_SHARED::~SYSMM_AUTO_DOMAIN_LOCK_SHARED(SYSMM_AUTO_DOMAIN_LOCK_SHARED *this)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)this;
  if ( *((_BYTE *)this + 8) >= 2u )
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v1 + 8));
  else
    ExReleasePushLockSharedEx(v1 + 16, 0LL);
}
