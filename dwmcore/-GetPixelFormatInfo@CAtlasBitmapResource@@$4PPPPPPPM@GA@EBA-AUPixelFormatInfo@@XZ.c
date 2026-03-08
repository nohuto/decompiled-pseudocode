/*
 * XREFs of ?GetPixelFormatInfo@CAtlasBitmapResource@@$4PPPPPPPM@GA@EBA?AUPixelFormatInfo@@XZ @ 0x18011A530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAtlasBitmapResource::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CAtlasBitmapResource::GetPixelFormatInfo((__int64 *)(a1 - *(int *)(a1 - 4) - 96), a2);
}
