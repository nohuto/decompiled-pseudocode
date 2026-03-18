/*
 * XREFs of ?SmmIommuDeleteDevice@@YAJPEAU_IOMMU_DMA_DEVICE@@@Z @ 0x1C03D59A0
 * Callers:
 *     SmmInitializeDmaDevices @ 0x1C021B2DC (SmmInitializeDmaDevices.c)
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D65F8 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00200C0 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00200D4 (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SmmIommuDeleteDevice(struct _IOMMU_DMA_DEVICE *a1)
{
  if ( SmmUseIommuV3Interface() || SmmUseIommuV2Interface() )
    return ((__int64 (*)(void))qword_1C0140C98)();
  else
    return 0LL;
}
