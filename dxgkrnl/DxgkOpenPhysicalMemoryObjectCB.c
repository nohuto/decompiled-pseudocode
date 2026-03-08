/*
 * XREFs of DxgkOpenPhysicalMemoryObjectCB @ 0x1C0052470
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetSysMmAdapterFromDevice @ 0x1C0012F3C (DpiGetSysMmAdapterFromDevice.c)
 *     ?SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C0013274 (-SmmOpenPhysicalObject@@YAJPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkOpenPhysicalMemoryObjectCB(__int64 a1)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_PHYSICAL_OBJECT *v3; // rbx
  __int64 result; // rax

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  v3 = *(struct SYSMM_PHYSICAL_OBJECT **)a1;
  result = SmmOpenPhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)a1, SysMmAdapterFromDevice);
  *(_QWORD *)(a1 + 16) = (char *)v3 + 64;
  return result;
}
