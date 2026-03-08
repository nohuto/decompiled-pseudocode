/*
 * XREFs of ?GetPixelFormatInfo@CRenderTargetBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011E690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CRenderTargetBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  return CRenderTargetBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
