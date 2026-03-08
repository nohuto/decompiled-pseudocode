/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C020EA5C
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C005F540 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0060710 (DpiMiracastTargetDeviceChange.c)
 *     DpiGetAdapterInfo @ 0x1C01ECB58 (DpiGetAdapterInfo.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020DE30 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C020DEBC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C03947A8 (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C0398754 (DpiFdoResetFdo.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkFreeUnicodeString(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_OWORD *)a1 = 0LL;
  }
}
