void __fastcall CMILMatrix::Transform2DRectToPerspective(
        CMILMatrix *this,
        const struct MilRectF *a2,
        struct MilPoint2F *const a3)
{
  float v4; // xmm1_4
  float v5; // xmm3_4
  float v6; // xmm5_4
  float v7; // xmm6_4
  float v8; // xmm2_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  char v14; // al
  bool v15; // dl
  float v16; // xmm1_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm7_4
  float v22; // xmm6_4
  float v23; // xmm3_4
  float v24; // xmm4_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4

  v4 = *(float *)a2 * *(float *)this;
  v5 = *(float *)a2 * *((float *)this + 1);
  v6 = *((float *)a2 + 1) * *((float *)this + 4);
  v7 = *((float *)a2 + 1) * *((float *)this + 5);
  *(float *)a3 = (float)(v6 + v4) + *((float *)this + 12);
  *((float *)a3 + 1) = (float)(v7 + v5) + *((float *)this + 13);
  v8 = *((float *)a2 + 3);
  v9 = v8 * *((float *)this + 5);
  v10 = v8 * *((float *)this + 4);
  *((float *)a3 + 2) = (float)(v10 + v4) + *((float *)this + 12);
  *((float *)a3 + 3) = (float)(v9 + v5) + *((float *)this + 13);
  v11 = *((float *)a2 + 2);
  v12 = v11 * *((float *)this + 1);
  v13 = v11 * *(float *)this;
  *((float *)a3 + 4) = (float)(v13 + v10) + *((float *)this + 12);
  *((float *)a3 + 5) = (float)(v12 + v9) + *((float *)this + 13);
  *((float *)a3 + 6) = (float)(v13 + v6) + *((float *)this + 12);
  *((float *)a3 + 7) = (float)(v12 + v7) + *((float *)this + 13);
  v14 = (char)(4 * *((_BYTE *)this + 65)) >> 6;
  if ( v14 )
  {
    v15 = v14 == 1;
  }
  else
  {
    v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0)
                                       + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0))
                               + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                       - 1.0) & _xmm) < 0.000081380211;
    *((_BYTE *)this + 65) ^= (*((_BYTE *)this + 65) ^ (-16 - 32 * v15)) & 0x30;
  }
  if ( v15 )
    return;
  v16 = *((float *)this + 15);
  v17 = *((float *)this + 7) * *((float *)a2 + 1);
  v18 = *((float *)this + 7) * *((float *)a2 + 3);
  v19 = *((float *)this + 3) * *(float *)a2;
  v20 = *((float *)this + 3) * *((float *)a2 + 2);
  v21 = (float)(v17 + v19) + v16;
  v22 = (float)(v18 + v19) + v16;
  v23 = (float)(v18 + v20) + v16;
  v24 = (float)(v17 + v20) + v16;
  if ( v21 < 0.000081380211 || v22 < 0.000081380211 || v23 < 0.000081380211 || v24 < 0.000081380211 )
  {
    if ( v21 >= -0.000081380211 || v22 >= -0.000081380211 || v23 >= -0.000081380211 || v24 >= -0.000081380211 )
    {
      *(_DWORD *)a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *((_DWORD *)a3 + 1) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      *((_DWORD *)a3 + 2) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      *((_DWORD *)a3 + 3) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      *((_DWORD *)a3 + 4) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      *((_DWORD *)a3 + 5) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      *((_DWORD *)a3 + 6) = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v28 = *(&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    }
    else
    {
      *(_QWORD *)a3 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *((_DWORD *)a3 + 2) = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
      *((_DWORD *)a3 + 3) = HIDWORD(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
      *((_QWORD *)a3 + 2) = *((_QWORD *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
      *((_DWORD *)a3 + 6) = DWORD2(TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty);
      v28 = *((float *)&TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    }
    goto LABEL_24;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v21 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v25 = *((float *)a3 + 1) / v21;
    *(float *)a3 = *(float *)a3 / v21;
    *((float *)a3 + 1) = v25;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v22 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v26 = *((float *)a3 + 3) / v22;
    *((float *)a3 + 2) = *((float *)a3 + 2) / v22;
    *((float *)a3 + 3) = v26;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v23 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v27 = *((float *)a3 + 5) / v23;
    *((float *)a3 + 4) = *((float *)a3 + 4) / v23;
    *((float *)a3 + 5) = v27;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v24 - 1.0) & _xmm) >= 0.000081380211 )
  {
    v28 = *((float *)a3 + 7) / v24;
    *((float *)a3 + 6) = *((float *)a3 + 6) / v24;
LABEL_24:
    *((float *)a3 + 7) = v28;
  }
}
