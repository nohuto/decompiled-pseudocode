/*
 * XREFs of ?GetSize@CDxHandleYUVBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180131F74
 * Callers:
 *     ?GetSize@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AUD2D_SIZE_U@@XZ @ 0x18011EFB0 (-GetSize@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180132026 (-GetTransform@CDxHandleYUVBitmapRealization@@UEBA_NPEAVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@U.c)
 * Callees:
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     ?CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@1@Z @ 0x1801173EC (-CalcDecodedSourceRectAndTransform@CDxHandleYUVBitmapRealization@@IEBAXPEAVCMILMatrix@@PEAV-$TMi.c)
 */

struct D2D_SIZE_U __fastcall CDxHandleYUVBitmapRealization::GetSize(CDxHandleYUVBitmapRealization *this, _QWORD *a2)
{
  __int64 v4; // [rsp+20h] [rbp-29h]
  _BYTE v5[64]; // [rsp+30h] [rbp-19h] BYREF
  int v6; // [rsp+70h] [rbp+27h]
  __int64 v7; // [rsp+80h] [rbp+37h] BYREF
  __int64 v8; // [rsp+88h] [rbp+3Fh]

  if ( (*((_DWORD *)this - 56) & 0x4000) != 0 )
  {
    v6 = 0;
    v7 = 0LL;
    v8 = 0LL;
    CDxHandleYUVBitmapRealization::CalcDecodedSourceRectAndTransform(
      (CDxHandleYUVBitmapRealization *)((char *)this - 456),
      (CMILMatrix *)v5,
      &v7,
      0LL);
    LODWORD(v4) = v8 - v7;
    HIDWORD(v4) = HIDWORD(v8) - HIDWORD(v7);
    *a2 = v4;
  }
  else
  {
    *a2 = *((_QWORD *)this - 31);
  }
  return (struct D2D_SIZE_U)a2;
}
