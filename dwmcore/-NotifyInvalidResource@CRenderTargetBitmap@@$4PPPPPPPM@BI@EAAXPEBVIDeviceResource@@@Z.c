/*
 * XREFs of ?NotifyInvalidResource@CRenderTargetBitmap@@$4PPPPPPPM@BI@EAAXPEBVIDeviceResource@@@Z @ 0x18011F950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTargetBitmap::NotifyInvalidResource(__int64 a1, const struct IDeviceResource *a2)
{
  CRenderTargetBitmap::NotifyInvalidResource((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 24), a2);
}
