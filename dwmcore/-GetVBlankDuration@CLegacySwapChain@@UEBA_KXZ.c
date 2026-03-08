/*
 * XREFs of ?GetVBlankDuration@CLegacySwapChain@@UEBA_KXZ @ 0x180106330
 * Callers:
 *     ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_KXZ @ 0x18011B7F0 (-GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BLA@EBA_KXZ.c)
 *     ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_KXZ @ 0x18011C870 (-GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@BLI@EBA_KXZ.c)
 *     ?GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_KXZ @ 0x18011CF30 (-GetVBlankDuration@CLegacySwapChain@@$4PPPPPPPM@DFI@EBA_KXZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CLegacySwapChain::GetVBlankDuration(CLegacySwapChain *this)
{
  return *((_QWORD *)this + 41);
}
