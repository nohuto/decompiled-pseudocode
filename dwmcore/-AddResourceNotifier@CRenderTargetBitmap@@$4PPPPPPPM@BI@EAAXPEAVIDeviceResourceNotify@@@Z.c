/*
 * XREFs of ?AddResourceNotifier@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEAVIDeviceResourceNotify@@@Z @ 0x18011F710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::AddResourceNotifier(__int64 a1, struct IDeviceResourceNotify *a2)
{
  CRenderTargetBitmap::AddResourceNotifier((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 24), a2);
}
