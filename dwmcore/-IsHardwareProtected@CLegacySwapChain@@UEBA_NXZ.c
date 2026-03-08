/*
 * XREFs of ?IsHardwareProtected@CLegacySwapChain@@UEBA_NXZ @ 0x1801079A0
 * Callers:
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011B8B0 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ @ 0x18011C930 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@7EBA_NXZ.c)
 *     ?IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ @ 0x18011CFF0 (-IsHardwareProtected@CLegacySwapChain@@$4PPPPPPPM@BKI@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CLegacySwapChain::IsHardwareProtected(CLegacySwapChain *this)
{
  return *((_BYTE *)this - 300);
}
