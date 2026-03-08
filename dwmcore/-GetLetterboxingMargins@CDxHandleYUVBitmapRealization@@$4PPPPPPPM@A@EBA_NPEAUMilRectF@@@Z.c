/*
 * XREFs of ?GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAUMilRectF@@@Z @ 0x18011EE90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetLetterboxingMargins(__int64 a1, struct MilRectF *a2)
{
  return CDxHandleYUVBitmapRealization::GetLetterboxingMargins(
           (CDxHandleYUVBitmapRealization *)(a1 - *(int *)(a1 - 4)),
           a2);
}
