/*
 * XREFs of SmmIommuDeleteDomain @ 0x1C03D1194
 * Callers:
 *     ?SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D0EBC (-SmmDeinitializeIommu@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToGpuVaIoMmu @ 0x1C03D11C0 (SmmIommuSwitchToGpuVaIoMmu.c)
 *     ?SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z @ 0x1C03D13E8 (-SmmIommuSwitchToPassthrough@@YAJPEAUSYSMM_ADAPTER@@@Z.c)
 *     SmmIommuSwitchToTranslation @ 0x1C03D14A4 (SmmIommuSwitchToTranslation.c)
 * Callees:
 *     ?SmmUseIommuV2Interface@@YA_NXZ @ 0x1C00205A8 (-SmmUseIommuV2Interface@@YA_NXZ.c)
 *     ?SmmUseIommuV3Interface@@YA_NXZ @ 0x1C00205BC (-SmmUseIommuV3Interface@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 SmmIommuDeleteDomain()
{
  if ( !SmmUseIommuV3Interface() )
    SmmUseIommuV2Interface();
  return ((__int64 (*)(void))qword_1C013BC08)();
}
