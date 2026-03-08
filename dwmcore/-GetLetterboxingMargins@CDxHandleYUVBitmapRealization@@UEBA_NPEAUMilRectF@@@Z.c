/*
 * XREFs of ?GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@UEBA_NPEAUMilRectF@@@Z @ 0x180131B2C
 * Callers:
 *     ?GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAUMilRectF@@@Z @ 0x18011EE90 (-GetLetterboxingMargins@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAUMilRectF@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetLetterboxingMargins(
        CDxHandleYUVBitmapRealization *this,
        struct MilRectF *a2)
{
  if ( (*((_DWORD *)this - 68) & 0x8000) != 0 )
  {
    *(_DWORD *)a2 = *((_DWORD *)this - 78);
    *((_DWORD *)a2 + 1) = *((_DWORD *)this - 77);
    *((_DWORD *)a2 + 2) = *((_DWORD *)this - 76);
    *((_DWORD *)a2 + 3) = *((_DWORD *)this - 75);
  }
  return (*((_DWORD *)this - 68) & 0x8000) != 0;
}
