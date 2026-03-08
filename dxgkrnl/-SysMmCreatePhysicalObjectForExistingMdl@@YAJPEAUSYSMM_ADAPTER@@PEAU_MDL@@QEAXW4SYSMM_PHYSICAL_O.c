/*
 * XREFs of ?SysMmCreatePhysicalObjectForExistingMdl@@YAJPEAUSYSMM_ADAPTER@@PEAU_MDL@@QEAXW4SYSMM_PHYSICAL_OBJECT_OWNER@@PEAPEAUSYSMM_PHYSICAL_OBJECT@@PEAPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x1C006F250
 * Callers:
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02B382C (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 * Callees:
 *     SmmCreatePhysicalObject @ 0x1C00130BC (SmmCreatePhysicalObject.c)
 */

__int64 __fastcall SysMmCreatePhysicalObjectForExistingMdl(
        struct SYSMM_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        ULONG_PTR **a5,
        ULONG_PTR **a6)
{
  int v7; // r8d
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v7 = *(_DWORD *)(a2 + 40);
  v9 = a2;
  return SmmCreatePhysicalObject(a1, 2, v7, (int)&v9, 3, 1, a3, a4, a5, a6);
}
