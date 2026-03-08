/*
 * XREFs of DxgkDestroyPhysicalMemoryObjectCB @ 0x1C00522C0
 * Callers:
 *     <none>
 * Callees:
 *     SmmClosePhysicalObject @ 0x1C0013468 (SmmClosePhysicalObject.c)
 *     ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C0013590 (-SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z.c)
 */

void __fastcall DxgkDestroyPhysicalMemoryObjectCB(__int64 a1, __int64 a2, int a3)
{
  __int64 *v4; // rcx

  v4 = *(__int64 **)(a1 + 8);
  if ( v4 )
    SmmClosePhysicalObject(v4, a2, a3);
  SysMmUnreferencePhysicalObject(*(struct SYSMM_PHYSICAL_OBJECT **)a1);
}
