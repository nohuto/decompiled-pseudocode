/*
 * XREFs of ?GetPixelFormatInfo@CAtlasBitmapResource@@$4PPPPPPPM@FI@EBA?AUPixelFormatInfo@@XZ @ 0x1800F6440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasBitmapResource::GetPixelFormatInfo(__int64 a1)
{
  return CAtlasBitmapResource::GetPixelFormatInfo(a1 - *(int *)(a1 - 4) - 88);
}
