/*
 * XREFs of ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C0013590
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C0012E50 (DxgkFreePagesFromMdlCB.c)
 *     SmmClosePhysicalObject @ 0x1C0013468 (SmmClosePhysicalObject.c)
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x1C00522C0 (DxgkDestroyPhysicalMemoryObjectCB.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C0052320 (DxgkFreeContiguousMemoryCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0052570 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x1C0071130 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02B382C (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C02B5BAC (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x1C0013610 (SmmDestroyPhysicalObject.c)
 */

void __fastcall SysMmUnreferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 10, 0xFFFFFFFF) == 1 )
    SmmDestroyPhysicalObject((PSIZE_T)a1);
}
