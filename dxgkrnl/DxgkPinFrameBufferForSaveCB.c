/*
 * XREFs of DxgkPinFrameBufferForSaveCB @ 0x1C0052500
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     ?PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z @ 0x1C02B382C (-PinFrameBufferForSave@DXGADAPTER@@QEAAJI_KIPEAPEAU_MDL@@PEAPEAU_DXGK_ADL@@@Z.c)
 */

__int64 __fastcall DxgkPinFrameBufferForSaveCB(__int64 a1, __int64 a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::PinFrameBufferForSave(
           DxgAdapter,
           *(_DWORD *)a2,
           *(_QWORD *)(a2 + 8),
           0,
           (struct _MDL **)(a2 + 16),
           0LL);
}
