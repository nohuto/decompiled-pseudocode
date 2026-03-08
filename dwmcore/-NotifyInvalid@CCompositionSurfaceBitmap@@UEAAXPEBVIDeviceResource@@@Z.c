/*
 * XREFs of ?NotifyInvalid@CCompositionSurfaceBitmap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801C27F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionSurfaceBitmap::NotifyInvalid(
        CCompositionSurfaceBitmap *this,
        const struct IDeviceResource *a2)
{
  CResource::NotifyOnChanged((__int64)this - 88, 5u, 0LL);
}
