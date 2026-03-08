/*
 * XREFs of DxgkUnmapFrameBufferPointerCB @ 0x1C0052540
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000E550 (DpiGetDxgAdapter.c)
 *     ?UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z @ 0x1C02B5B30 (-UnmapFrameBufferPointer@DXGADAPTER@@QEAAJIPEAX@Z.c)
 */

int __fastcall DxgkUnmapFrameBufferPointerCB(__int64 a1, __int64 a2)
{
  DXGADAPTER *DxgAdapter; // rax

  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  return DXGADAPTER::UnmapFrameBufferPointer(DxgAdapter, *(_DWORD *)a2, *(void **)(a2 + 8));
}
