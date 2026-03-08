/*
 * XREFs of ?GetVidPnSourceId@COverlaySwapChainBase@@UEBAIXZ @ 0x180105F80
 * Callers:
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ @ 0x18011B810 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x18011C890 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ.c)
 *     ?GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ @ 0x18011CF50 (-GetVidPnSourceId@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall COverlaySwapChainBase::GetVidPnSourceId(COverlaySwapChainBase *this)
{
  return *((unsigned int *)this + 28);
}
