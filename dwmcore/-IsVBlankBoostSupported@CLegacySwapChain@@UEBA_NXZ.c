/*
 * XREFs of ?IsVBlankBoostSupported@CLegacySwapChain@@UEBA_NXZ @ 0x180104220
 * Callers:
 *     ?IsVBlankBoostSupported@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ @ 0x18011B8D0 (-IsVBlankBoostSupported@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_NXZ.c)
 *     ?IsVBlankBoostSupported@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_NXZ @ 0x18011C970 (-IsVBlankBoostSupported@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_NXZ.c)
 *     ?IsVBlankBoostSupported@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NXZ @ 0x18011D030 (-IsVBlankBoostSupported@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsVBlankBoostSupported(CLegacySwapChain *this)
{
  return *((_DWORD *)this + 78) != 1;
}
