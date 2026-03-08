/*
 * XREFs of ?GetPixelFormatInfo@CSecondarySysmemBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x18011FDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CSecondarySysmemBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4), a2);
}
