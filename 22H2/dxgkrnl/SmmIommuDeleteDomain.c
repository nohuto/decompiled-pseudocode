/*
 * XREFs of SmmIommuDeleteDomain @ 0x1C03D59D4
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D56FC (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x1C03D5A00 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D5C28 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03D5CE4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00200C0 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00200D4 (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 SmmIommuDeleteDomain()
{
  if ( !SmmUseIommuV3Interface() )
    SmmUseIommuV2Interface();
  return ((__int64 (*)(void))qword_1C0140BF8)();
}
