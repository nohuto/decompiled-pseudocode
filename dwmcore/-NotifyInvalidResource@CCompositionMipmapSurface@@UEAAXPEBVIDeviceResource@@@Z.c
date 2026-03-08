/*
 * XREFs of ?NotifyInvalidResource@CCompositionMipmapSurface@@UEAAXPEBVIDeviceResource@@@Z @ 0x180220BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001EC20 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1800292C0 (-RemoveResourceNotifier@CD3DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 */

void __fastcall CCompositionMipmapSurface::NotifyInvalidResource(
        unsigned __int64 this,
        const struct IDeviceResource *a2)
{
  CD3DResource::RemoveResourceNotifier(
    *(CD3DResource **)(this + 88),
    (const struct IDeviceResourceNotify *)(this & ((unsigned __int128)-(__int128)(this - 80) >> 64)));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)(this + 88));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(this + 72));
}
