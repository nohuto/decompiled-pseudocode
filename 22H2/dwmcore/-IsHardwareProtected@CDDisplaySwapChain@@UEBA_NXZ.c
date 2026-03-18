/*
 * XREFs of ?IsHardwareProtected@CDDisplaySwapChain@@UEBA_NXZ @ 0x180108240
 * Callers:
 *     ?IsHardwareProtected@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011EC80 (-IsHardwareProtected@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplaySwapChain::IsHardwareProtected(CDDisplaySwapChain *this)
{
  return *((_BYTE *)this - 476);
}
