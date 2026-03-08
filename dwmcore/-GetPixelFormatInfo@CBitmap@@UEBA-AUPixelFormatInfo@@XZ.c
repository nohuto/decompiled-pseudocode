/*
 * XREFs of ?GetPixelFormatInfo@CBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x180105C90
 * Callers:
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@NA@EBA?AUPixelFormatInfo@@XZ @ 0x180119130 (-GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@NA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@MI@EBA?AUPixelFormatInfo@@XZ @ 0x18011A670 (-GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@MI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CWICBitmapWrapper@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x18011A750 (-GetPixelFormatInfo@CWICBitmapWrapper@@WLI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 128);
  *(_QWORD *)a2 = *(_QWORD *)(a1 + 120);
  *(_DWORD *)(a2 + 8) = v2;
  return a2;
}
