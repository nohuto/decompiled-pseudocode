/*
 * XREFs of ?RemoveResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@CA@EAAXPEBVIDeviceResourceNotify@@@Z @ 0x18011FCF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::RemoveResourceNotifier(__int64 a1, const struct IDeviceResourceNotify *a2)
{
  CRenderTargetBitmap::RemoveResourceNotifier((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 32), a2);
}
