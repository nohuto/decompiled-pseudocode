/*
 * XREFs of DxgkFreeUnicodeString @ 0x1C021D03C
 * Callers:
 *     DpiMiracastInterfaceChange @ 0x1C0060160 (DpiMiracastInterfaceChange.c)
 *     DpiMiracastTargetDeviceChange @ 0x1C0061330 (DpiMiracastTargetDeviceChange.c)
 *     DpiGetAdapterInfo @ 0x1C01FB478 (DpiGetAdapterInfo.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C021C410 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C021C49C (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     DpiFreeAdapterInfo @ 0x1C0399088 (DpiFreeAdapterInfo.c)
 *     DpiFdoResetFdo @ 0x1C039D034 (DpiFdoResetFdo.c)
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
