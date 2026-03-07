char __fastcall CArithmeticCompositeEffect::GetBoundsFromInputs(_DWORD *a1, _DWORD *a2, float *a3)
{
  float v3; // xmm3_4
  char result; // al
  float *v5; // r10
  float **v6; // r11
  float *v7; // rcx
  float v8; // xmm3_4
  float v9; // xmm0_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm4_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float *v17; // rdx

  if ( a2[6] != 2 )
    return CFilterEffect::GetBoundsFromInputs((__int64)a1, (__int64)a2, a3);
  LODWORD(v3) = a1[44] & _xmm;
  if ( v3 <= 0.0000099999997
    || COERCE_FLOAT(a1[45] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[46] & _xmm) >= 0.0000099999997
    || COERCE_FLOAT(a1[47] & _xmm) >= 0.0000099999997 )
  {
    if ( v3 < 0.0000099999997 )
    {
      LODWORD(v16) = a1[45] & _xmm;
      if ( v16 > 0.0000099999997
        && COERCE_FLOAT(a1[46] & _xmm) < 0.0000099999997
        && COERCE_FLOAT(a1[47] & _xmm) < 0.0000099999997 )
      {
        v17 = (float *)(*(_QWORD *)a2 + 4LL);
        return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v17);
      }
      if ( v16 < 0.0000099999997 )
      {
        if ( COERCE_FLOAT(a1[46] & _xmm) > 0.0000099999997 && COERCE_FLOAT(a1[47] & _xmm) < 0.0000099999997 )
        {
          v17 = (float *)(*(_QWORD *)a2 + 24LL);
          return TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v17);
        }
        if ( v16 < 0.0000099999997
          && COERCE_FLOAT(a1[46] & _xmm) < 0.0000099999997
          && COERCE_FLOAT(a1[47] & _xmm) < 0.0000099999997 )
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
  v8 = *v5;
  v9 = (*v6)[6];
  if ( v9 > *v5 )
  {
    *v5 = v9;
    v8 = v9;
  }
  v10 = v7[7];
  v11 = v5[1];
  if ( v10 > v11 )
  {
    v5[1] = v10;
    v11 = v10;
  }
  v12 = v7[8];
  v13 = v5[2];
  if ( v13 > v12 )
  {
    v5[2] = v12;
    v13 = v12;
  }
  v14 = v7[9];
  v15 = v5[3];
  if ( v15 > v14 )
  {
    v5[3] = v14;
    v15 = v14;
  }
  if ( v13 <= v8 || v15 <= v11 )
  {
    result = 0;
    *((_QWORD *)v5 + 1) = 0LL;
    *(_QWORD *)v5 = 0LL;
  }
  return result;
}
