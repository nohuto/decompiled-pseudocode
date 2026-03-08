/*
 * XREFs of ?GetPixelFormatInfo@CDDisplaySwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011AAB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CDDisplaySwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
