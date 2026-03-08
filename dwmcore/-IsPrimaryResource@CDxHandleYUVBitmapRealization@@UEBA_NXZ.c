/*
 * XREFs of ?IsPrimaryResource@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x1802B0ED4
 * Callers:
 *     ?IsPrimaryResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x18011F110 (-IsPrimaryResource@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsPrimaryResource(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this - 13);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 68) != 0;
  return result;
}
