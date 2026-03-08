/*
 * XREFs of ?IsHardwareProtected@CDDisplaySwapChain@@UEBA_NXZ @ 0x180107700
 * Callers:
 *     ?IsHardwareProtected@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011AAD0 (-IsHardwareProtected@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplaySwapChain::IsHardwareProtected(CDDisplaySwapChain *this)
{
  return *((_BYTE *)this - 476);
}
