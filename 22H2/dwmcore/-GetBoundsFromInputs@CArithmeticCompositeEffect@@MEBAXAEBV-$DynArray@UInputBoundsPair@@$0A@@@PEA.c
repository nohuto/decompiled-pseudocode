/*
 * XREFs of ?GetBoundsFromInputs@CArithmeticCompositeEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801F5A20
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18006C310 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B2570 (-GetBoundsFromInputs@CFilterEffect@@MEBAXAEBV-$DynArray@UInputBoundsPair@@$0A@@@PEAV-$TMilRect_@.c)
 */

char __fastcall CArithmeticCompositeEffect::GetBoundsFromInputs(_DWORD *a1, _DWORD *a2, float *a3)
{
  float v3; // xmm3_4
  char result; // al
  float *v5; // r9
  float **v6; // r10
  float *v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm3_4
  float *v15; // rdx

  if ( a2[6] != 2 )
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  LODWORD(v3) = a1[38] & _xmm;
  if ( v3 <= 0.0000099999997
    || COERCE_FLOAT(a1[39] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[40] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[41] & _xmm) >= 0.0000099999997 )
  {
    if ( v3 < 0.0000099999997 )
    {
      LODWORD(v14) = a1[39] & _xmm;
      if ( v14 > 0.0000099999997
        && COERCE_FLOAT(a1[40] & _xmm) < 0.0000099999997
        && COERCE_FLOAT(a1[41] & _xmm) < 0.0000099999997 )
      {
        v15 = (float *)(*(_QWORD *)a2 + 4LL);
        return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v15);
      }
      if ( v14 < 0.0000099999997 )
      {
        if ( COERCE_FLOAT(a1[40] & _xmm) > 0.0000099999997 && COERCE_FLOAT(a1[41] & _xmm) < 0.0000099999997 )
        {
          v15 = (float *)(*(_QWORD *)a2 + 24LL);
          return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v15);
        }
        if ( v14 < 0.0000099999997
          && COERCE_FLOAT(a1[40] & _xmm) < 0.0000099999997
          && COERCE_FLOAT(a1[41] & _xmm) < 0.0000099999997 )
        {
          return result;
        }
      }
    }
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  }
  result = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(
             a3,
             (float *)(*(_QWORD *)a2 + 4LL));
  v7 = *v6;
  v8 = (*v6)[6];
  if ( v8 > *v5 )
    *v5 = v8;
  v9 = v7[7];
  if ( v9 > v5[1] )
    v5[1] = v9;
  v10 = v7[8];
  v11 = v5[2];
  if ( v11 > v10 )
  {
    v5[2] = v10;
    v11 = v10;
  }
  v12 = v7[9];
  v13 = v5[3];
  if ( v13 > v12 )
  {
    v5[3] = v12;
    v13 = v12;
    v11 = v5[2];
  }
  if ( v11 <= *v5 || v13 <= v5[1] )
  {
    result = 0;
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = 0LL;
  }
  return result;
}
