/*
 * XREFs of ?NotifyInvalidResource@CGlobalCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x180257F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z @ 0x1800B7A28 (-Reset@CBindInfo@CGlobalCompositionSurfaceInfo@@QEAAX_N@Z.c)
 */

void __fastcall CGlobalCompositionSurfaceInfo::NotifyInvalidResource(
        CGlobalCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  CGlobalCompositionSurfaceInfo::CBindInfo::Reset((CGlobalCompositionSurfaceInfo *)((char *)this + 88), 0);
  CCompositionSurfaceInfo::NotifyInvalidResource(this, a2);
}
