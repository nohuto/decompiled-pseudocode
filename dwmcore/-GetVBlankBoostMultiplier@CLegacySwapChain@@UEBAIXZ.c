/*
 * XREFs of ?GetVBlankBoostMultiplier@CLegacySwapChain@@UEBAIXZ @ 0x180107990
 * Callers:
 *     ?GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ @ 0x18011B7D0 (-GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLA@EBAIXZ.c)
 *     ?GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ @ 0x18011C850 (-GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@BLI@EBAIXZ.c)
 *     ?GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ @ 0x18011CF10 (-GetVBlankBoostMultiplier@CLegacySwapChain@@$4PPPPPPPM@DFI@EBAIXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetVBlankBoostMultiplier(CLegacySwapChain *this)
{
  return *((unsigned int *)this + 84);
}
