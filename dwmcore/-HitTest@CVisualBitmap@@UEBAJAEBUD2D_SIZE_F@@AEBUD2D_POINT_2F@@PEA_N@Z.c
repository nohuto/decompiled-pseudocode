/*
 * XREFs of ?HitTest@CVisualBitmap@@UEBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x18021BFB0
 * Callers:
 *     ?HitTest@CVisualBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z @ 0x180118850 (-HitTest@CVisualBitmap@@$4PPPPPPPM@A@EBAJAEBUD2D_SIZE_F@@AEBUD2D_POINT_2F@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004AF54 (-IsEmpty@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 */

__int64 __fastcall CVisualBitmap::HitTest(
        CVisualBitmap *this,
        const struct D2D_SIZE_F *a2,
        const struct D2D_POINT_2F *a3,
        bool *a4)
{
  __int64 v4; // rax
  __int128 *v5; // rax
  float *v6; // r8
  char *v7; // r9
  float v8; // xmm1_4
  char v9; // al
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  *a4 = 0;
  if ( *((_QWORD *)this - 8) )
  {
    v4 = *((_QWORD *)this - 5);
    v5 = *(_QWORD *)(v4 + 64)
       ? (__int128 *)(v4 + 72)
       : &TMil3DRect<float,TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v11 = *v5;
    if ( !TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v11) )
    {
      v8 = v6[1];
      if ( v8 >= *((float *)&v11 + 1) && *((float *)&v11 + 3) > v8 && *v6 >= *(float *)&v11 )
      {
        v9 = *v7;
        if ( *((float *)&v11 + 2) > *v6 )
          v9 = 1;
        *v7 = v9;
      }
    }
  }
  return 0LL;
}
