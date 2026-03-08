/*
 * XREFs of ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@7EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011F490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::RemoveResourceNotifier(__int64 a1, const struct IDeviceResourceNotify *a2)
{
  CRenderTargetBitmap::RemoveResourceNotifier((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 8), a2);
}
