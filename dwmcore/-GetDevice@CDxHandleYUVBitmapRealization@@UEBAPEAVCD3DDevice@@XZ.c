/*
 * XREFs of ?GetDevice@CDxHandleYUVBitmapRealization@@UEBAPEAVCD3DDevice@@XZ @ 0x1802B0C28
 * Callers:
 *     ?GetDevice@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18011EE30 (-GetDevice@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1802B120C (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CDxHandleYUVBitmapRealization::GetDevice(CDxHandleYUVBitmapRealization *this)
{
  struct CD3DDevice *result; // rax

  result = (struct CD3DDevice *)*((_QWORD *)this - 13);
  if ( result )
    return *(struct CD3DDevice **)(*((_QWORD *)result + 3) + 80LL);
  return result;
}
