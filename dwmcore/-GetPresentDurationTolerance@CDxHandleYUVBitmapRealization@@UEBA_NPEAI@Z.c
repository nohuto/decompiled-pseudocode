/*
 * XREFs of ?GetPresentDurationTolerance@CDxHandleYUVBitmapRealization@@UEBA_NPEAI@Z @ 0x180131DF0
 * Callers:
 *     ?GetPresentDurationTolerance@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAI@Z @ 0x18011EF30 (-GetPresentDurationTolerance@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NPEAI@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::GetPresentDurationTolerance(
        CDxHandleYUVBitmapRealization *this,
        unsigned int *a2)
{
  unsigned int v2; // eax

  if ( (*((_DWORD *)this - 68) & 0x2000) != 0 )
    v2 = *((_DWORD *)this - 92);
  else
    v2 = 0;
  *a2 = v2;
  return (*((_DWORD *)this - 68) & 0x2000) != 0;
}
