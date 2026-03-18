/*
 * XREFs of ?NotifyInvalid@CCompositionCubeMap@@UEAAXPEBVIDeviceResource@@@Z @ 0x1802230D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C9C4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall CCompositionCubeMap::NotifyInvalid(CCompositionCubeMap *this, const struct IDeviceResource *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
}
