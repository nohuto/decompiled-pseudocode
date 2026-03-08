/*
 * XREFs of ?GetPixelFormatInfo@CCompSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x180107A5C
 * Callers:
 *     ?GetPixelFormatInfo@CCompSwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011BE70 (-GetPixelFormatInfo@CCompSwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 276);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 284);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
