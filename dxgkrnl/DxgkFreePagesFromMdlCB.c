/*
 * XREFs of DxgkFreePagesFromMdlCB @ 0x1C0012E50
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetSysMmAdapterFromDevice @ 0x1C0012F3C (DpiGetSysMmAdapterFromDevice.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C0013590 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 *     ?SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z @ 0x1C00135E4 (-SysMmClosePhysicalObjectByAdapter@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAUSYSMM_ADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkFreePagesFromMdlCB(__int64 a1, struct SYSMM_PHYSICAL_OBJECT **a2)
{
  struct SYSMM_ADAPTER *SysMmAdapterFromDevice; // rax
  struct SYSMM_PHYSICAL_OBJECT *v4; // rbx

  SysMmAdapterFromDevice = (struct SYSMM_ADAPTER *)DpiGetSysMmAdapterFromDevice();
  v4 = *a2;
  SysMmClosePhysicalObjectByAdapter(v4, SysMmAdapterFromDevice);
  SysMmUnreferencePhysicalObject(v4);
  return 0LL;
}
