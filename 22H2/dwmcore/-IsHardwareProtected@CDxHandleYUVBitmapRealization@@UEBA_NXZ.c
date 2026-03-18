/*
 * XREFs of ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@UEBA_NXZ @ 0x18013634C
 * Callers:
 *     ?IsHardwareProtected@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ @ 0x180123240 (-IsHardwareProtected@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA_NXZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B498C (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDxHandleYUVBitmapRealization::IsHardwareProtected(CDxHandleYUVBitmapRealization *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this - 13);
  result = 0;
  if ( v1 )
    return (*(_DWORD *)(v1 + 144) & 0x80000) != 0;
  return result;
}
