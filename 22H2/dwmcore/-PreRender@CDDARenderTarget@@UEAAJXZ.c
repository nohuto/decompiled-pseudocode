/*
 * XREFs of ?PreRender@CDDARenderTarget@@UEAAJXZ @ 0x180198FEC
 * Callers:
 *     ?PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ @ 0x1800F5630 (-PreRender@CDDARenderTarget@@$4PPPPPPPM@A@EAAJXZ.c)
 * Callees:
 *     ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x180198D20 (-EnsureSwapChain@CDDARenderTarget@@IEAAJXZ.c)
 */

__int64 __fastcall CDDARenderTarget::PreRender(CDDARenderTarget *this)
{
  CDDARenderTarget::EnsureSwapChain((CDDARenderTarget *)((char *)this - 1944));
  return 0LL;
}
