/*
 * XREFs of ?GetPixelFormatInfo@CHolographicInteropTarget@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011D5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CHolographicInteropTarget::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CHolographicInteropTarget::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
