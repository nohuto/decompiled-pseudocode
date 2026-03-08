/*
 * XREFs of ?OnSceneLost@CCompositionMipmapSurface@@EEAAJPEAUISpectreRenderer@@@Z @ 0x180220CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18001C8D4 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall CCompositionMipmapSurface::OnSceneLost(CCompositionMipmapSurface *this, struct ISpectreRenderer *a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
  return 0LL;
}
