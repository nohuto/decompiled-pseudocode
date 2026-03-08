/*
 * XREFs of ?GetPixelFormatInfo@CDDASwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011D310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CDDASwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
