/*
 * XREFs of ?GetPixelFormatInfo@CLegacySwapChain@@$4PPPPPPPM@7EBA?AUPixelFormatInfo@@XZ @ 0x18011C7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLegacySwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CLegacySwapChain::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 8, a2);
}
