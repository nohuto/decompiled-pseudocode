/*
 * XREFs of ?HitTest@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18012E362
 * Callers:
 *     ?HitTest@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x1801187B0 (-HitTest@CCompositionSurfaceBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18021C1D0 (-HitTest@CYCbCrSurface@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000CFAC (-GetBounds@CCompositionSurfaceBitmap@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::HitTest(
        CCompositionSurfaceBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  int Bounds; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  float y; // xmm1_4
  __int128 v11; // [rsp+30h] [rbp-38h] BYREF

  *a4 = 0;
  v11 = 0LL;
  Bounds = CCompositionSurfaceBitmap::GetBounds((__int64)this, (__int64)a2, &v11);
  v8 = Bounds;
  if ( Bounds < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, Bounds, 0x11Eu, 0LL);
  }
  else if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v11) )
  {
    y = a3->y;
    if ( y >= *((float *)&v11 + 1)
      && *((float *)&v11 + 3) > y
      && a3->x >= *(float *)&v11
      && *((float *)&v11 + 2) > a3->x )
    {
      *a4 = 1;
    }
  }
  return v8;
}
