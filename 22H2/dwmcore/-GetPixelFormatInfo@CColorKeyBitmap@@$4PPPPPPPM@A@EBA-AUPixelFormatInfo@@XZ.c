/*
 * XREFs of ?GetPixelFormatInfo@CColorKeyBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x1800F8DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::GetPixelFormatInfo(__int64 a1)
{
  return CColorKeyBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4));
}
