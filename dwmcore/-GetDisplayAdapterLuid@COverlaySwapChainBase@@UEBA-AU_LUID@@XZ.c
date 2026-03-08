/*
 * XREFs of ?GetDisplayAdapterLuid@COverlaySwapChainBase@@UEBA?AU_LUID@@XZ @ 0x180105F60
 * Callers:
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA?AU_LUID@@XZ @ 0x18011B6F0 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA-AU_LUID@@XZ.c)
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA?AU_LUID@@XZ @ 0x18011C770 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA-AU_LUID@@XZ.c)
 *     ?GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA?AU_LUID@@XZ @ 0x18011CE30 (-GetDisplayAdapterLuid@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     <none>
 */

struct _LUID __fastcall COverlaySwapChainBase::GetDisplayAdapterLuid(COverlaySwapChainBase *this, _QWORD *a2)
{
  *a2 = *(_QWORD *)((char *)this + 116);
  return (struct _LUID)a2;
}
