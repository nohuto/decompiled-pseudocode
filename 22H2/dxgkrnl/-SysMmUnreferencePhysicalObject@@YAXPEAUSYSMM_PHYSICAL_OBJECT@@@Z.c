/*
 * XREFs of ?SysMmUnreferencePhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@@Z @ 0x1C0012DB0
 * Callers:
 *     DxgkFreePagesFromMdlCB @ 0x1C0012670 (DxgkFreePagesFromMdlCB.c)
 *     SmmClosePhysicalObject @ 0x1C0012C88 (SmmClosePhysicalObject.c)
 *     DxgkDestroyPhysicalMemoryObjectCB @ 0x1C0053160 (DxgkDestroyPhysicalMemoryObjectCB.c)
 *     DxgkFreeContiguousMemoryCB @ 0x1C00531C0 (DxgkFreeContiguousMemoryCB.c)
 *     DxgkUnmapMdlFromIoMmuCB @ 0x1C0053410 (DxgkUnmapMdlFromIoMmuCB.c)
 *     ?SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z @ 0x1C0071D60 (-SysMmUnmapPhysicalObject@@YAXPEAUSYSMM_PHYSICAL_OBJECT@@PEAX_K@Z.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02B86EC (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 *     ?UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z @ 0x1C02BAA6C (-UnpinFrameBufferForSave@DXGADAPTER@@QEAAJI@Z.c)
 * Callees:
 *     SmmDestroyPhysicalObject @ 0x1C0012E30 (SmmDestroyPhysicalObject.c)
 */

void __fastcall SysMmUnreferencePhysicalObject(struct SYSMM_PHYSICAL_OBJECT *a1)
{
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 10, 0xFFFFFFFF) == 1 )
    SmmDestroyPhysicalObject((PSIZE_T)a1);
}
