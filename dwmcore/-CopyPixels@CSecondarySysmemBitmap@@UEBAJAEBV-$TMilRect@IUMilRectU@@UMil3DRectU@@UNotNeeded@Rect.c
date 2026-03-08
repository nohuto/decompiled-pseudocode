/*
 * XREFs of ?CopyPixels@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1802B43E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z @ 0x1800A6708 (-CopyPixelsHelper@CBitmap@@SAJW4DXGI_FORMAT@@IIIIPEAEII1@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A8170 (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800A81C0 (-IsEmpty@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::CopyPixels(
        __int64 a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5)
{
  _DWORD *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r10
  int v11; // ebx
  unsigned __int8 PixelFormatSize; // al
  _DWORD *v13; // rdx
  unsigned int v14; // r9d
  unsigned int v15; // ecx
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rcx
  unsigned int v19; // ebx

  if ( !TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(a1 + 32, (__int64)a2)
    || TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsEmpty(v8) )
  {
    v19 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024809, 0x64u, 0LL);
  }
  else
  {
    v11 = *(_DWORD *)(v10 + 132);
    PixelFormatSize = GetPixelFormatSize(v11);
    v15 = v14 * v13[1] + *v13 * (PixelFormatSize >> 3);
    v17 = CBitmap::CopyPixelsHelper(
            v11,
            v13[2] - *a2,
            v13[3] - v13[1],
            v14,
            *(_DWORD *)(v16 + 152) - v15,
            (unsigned __int8 *)(*(_QWORD *)(v16 + 144) + v15),
            a3,
            a4,
            a5);
    v19 = v17;
    if ( v17 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x74u, 0LL);
  }
  return v19;
}
