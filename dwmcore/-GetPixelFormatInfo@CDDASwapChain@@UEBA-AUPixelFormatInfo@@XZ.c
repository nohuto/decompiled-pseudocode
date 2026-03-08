/*
 * XREFs of ?GetPixelFormatInfo@CDDASwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x180107CC4
 * Callers:
 *     ?GetPixelFormatInfo@CDDASwapChain@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011D310 (-GetPixelFormatInfo@CDDASwapChain@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDASwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 - 128);
  *(_QWORD *)a2 = *(_QWORD *)(a1 - 136);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
