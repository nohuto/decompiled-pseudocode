/*
 * XREFs of ?SysMmUnmapLogicalAddressRange@@YAJPEAUSYSMM_ADAPTER@@PEAU_IOMMU_DMA_DOMAIN@@_K2@Z @ 0x1C002CA8C
 * Callers:
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0090130 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SysMmUnmapLogicalAddressRange(
        struct SYSMM_ADAPTER *a1,
        struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *a2)
{
  return DxgCoreInterface[97](a1, a2);
}
