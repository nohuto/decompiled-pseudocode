/*
 * XREFs of ?IsHardwareProtected@CDDASwapChain@@UEBA_NXZ @ 0x180107D00
 * Callers:
 *     ?IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011D330 (-IsHardwareProtected@CDDASwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDASwapChain::IsHardwareProtected(CDDASwapChain *this)
{
  return *((_BYTE *)this - 128);
}
