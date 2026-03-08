/*
 * XREFs of ?GetPixelFormatInfo@CHolographicInteropTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x180107D9C
 * Callers:
 *     ?GetPixelFormatInfo@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011D5D0 (-GetPixelFormatInfo@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHolographicInteropTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  _DWORD *result; // rax

  v2 = *(_DWORD *)(a1 - 64);
  a2[2] = 0;
  *a2 = v2;
  result = a2;
  a2[1] = 1;
  return result;
}
