/*
 * XREFs of ?IsHardwareProtected@CCompSwapChain@@UEBA_NXZ @ 0x180107A7C
 * Callers:
 *     ?IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011BE90 (-IsHardwareProtected@CCompSwapChain@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CCompSwapChain::IsHardwareProtected(CCompSwapChain *this)
{
  return *((_BYTE *)this - 276);
}
