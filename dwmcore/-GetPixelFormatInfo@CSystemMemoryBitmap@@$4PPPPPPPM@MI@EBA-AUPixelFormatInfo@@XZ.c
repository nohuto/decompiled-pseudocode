/*
 * XREFs of ?GetPixelFormatInfo@CSystemMemoryBitmap@@$4PPPPPPPM@MI@EBA?AUPixelFormatInfo@@XZ @ 0x18011A670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 200, a2);
}
