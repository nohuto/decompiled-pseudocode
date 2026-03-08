/*
 * XREFs of ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CRenderTargetBitmap::AddResourceNotifier((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 8), a2);
}
