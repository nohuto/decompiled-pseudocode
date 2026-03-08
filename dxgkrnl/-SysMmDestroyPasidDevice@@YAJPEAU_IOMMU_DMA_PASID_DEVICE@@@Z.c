/*
 * XREFs of ?SysMmDestroyPasidDevice@@YAJPEAU_IOMMU_DMA_PASID_DEVICE@@@Z @ 0x1C03D1EE0
 * Callers:
 *     ?Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ @ 0x1C01DC380 (-Deallocate@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAXXZ.c)
 *     ?InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z @ 0x1C0340554 (-InitializeForHardware@DXGPROCESS_ADAPTER_INFO_PASID_DATA@@QEAAJIPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SysMmDestroyPasidDevice(struct _IOMMU_DMA_PASID_DEVICE *a1)
{
  if ( SmmUseIommuV3Interface() )
    return ((__int64 (*)(void))qword_1C013BCB8)();
  else
    return 3221225485LL;
}
