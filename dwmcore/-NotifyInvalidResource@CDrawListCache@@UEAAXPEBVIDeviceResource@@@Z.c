/*
 * XREFs of ?NotifyInvalidResource@CDrawListCache@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801FA460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDrawListCache::NotifyInvalidResource(CDrawListCache *this, const struct IDeviceResource *a2)
{
  CDrawListCache::Invalidate((CDrawListCache *)((char *)this - 16));
}
