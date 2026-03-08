/*
 * XREFs of ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A6708
 * Callers:
 *     ?CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z @ 0x1800A6830 (-CopyPixels@CBitmap@@UEAAJPEBUWICRect@@IIPEAE@Z.c)
 *     ?CopyPixels@CD2DBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x18029BB20 (-CopyPixels@CD2DBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@.c)
 *     ?CopyPixels@CColorKeyBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B3310 (-CopyPixels@CColorKeyBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniquen.c)
 *     ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B43E0 (-CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@Rect.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18003E720 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1801177E8 (memcpy_0.c)
 */

__int64 __fastcall CBitmap::CopyPixelsHelper(
        int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int8 *Src,
        unsigned int a7,
        unsigned int a8,
        unsigned __int8 *a9)
{
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v17; // ecx
  int v19; // r9d
  unsigned __int64 v20; // r12
  size_t v21; // r14
  __int64 v22; // rbp
  unsigned __int8 *v23; // rsi
  unsigned __int8 *v24; // rdi
  unsigned int v25; // [rsp+20h] [rbp-28h]

  v10 = a4;
  v12 = a3;
  v13 = HrCheckBufferSize(a1, a4, a2, a3, a5);
  v15 = v13;
  if ( v13 < 0 )
  {
    v25 = 62;
    goto LABEL_21;
  }
  v13 = HrCheckBufferSize(a1, a7, a2, (unsigned int)v12, a8);
  v15 = v13;
  if ( v13 < 0 )
  {
    v25 = 69;
LABEL_21:
    v19 = v13;
    goto LABEL_22;
  }
  PixelFormatSize = GetPixelFormatSize(a1);
  if ( !PixelFormatSize || a2 > 0x7FFFFFF8u / PixelFormatSize )
  {
    v15 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024362, 0x47u, 0LL);
    return v15;
  }
  v15 = 0;
  v14 = (a2 * PixelFormatSize + 7) >> 3;
  if ( v14 > a7 )
  {
    v15 = -2147024809;
    v25 = 76;
LABEL_13:
    v19 = v15;
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v19, v25, 0LL);
    return v15;
  }
  if ( (_DWORD)v10 == a7 && a7 - v14 < PixelFormatSize >> 3 )
  {
    if ( is_mul_ok(v10, (unsigned int)v12) )
    {
      memcpy_0(a9, Src, v10 * (unsigned int)v12);
      return v15;
    }
    v15 = -2147024362;
    v25 = 89;
    goto LABEL_13;
  }
  if ( (_DWORD)v12 )
  {
    v20 = v10;
    v21 = v14;
    v22 = v12;
    v23 = Src;
    v24 = a9;
    do
    {
      memcpy_0(v24, v23, v21);
      v24 += a7;
      v23 += v20;
      --v22;
    }
    while ( v22 );
  }
  return v15;
}
