/*
 * XREFs of ?GetPixelFormatInfo@CCachedVisualImage@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800DB724
 * Callers:
 *     ?GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1801183F0 (-GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@BI@EBA?AUPixelFormatInfo@@XZ @ 0x180118410 (-GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@BI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@NA@EBA?AUPixelFormatInfo@@XZ @ 0x180119AB0 (-GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@NA@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@OI@EBA?AUPixelFormatInfo@@XZ @ 0x180119AD0 (-GetPixelFormatInfo@CCachedVisualImage@@$4PPPPPPPM@OI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CCachedVisualImage::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  _DWORD *result; // rax

  *a2 = *(_DWORD *)(a1 - 1652);
  a2[2] = *(_DWORD *)(a1 - 1644) == 2;
  result = a2;
  a2[1] = *(_DWORD *)(a1 - 1648) != 0 ? 1 : 3;
  return result;
}
