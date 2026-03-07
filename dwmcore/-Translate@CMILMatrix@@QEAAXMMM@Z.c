void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3, float a4)
{
  char v7; // r9
  char v8; // al
  bool v9; // al
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm0_4
  float v13; // xmm2_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm3_4
  float v21; // xmm2_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm1_4
  float v27; // xmm3_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211
    || COERCE_FLOAT(LODWORD(a4) & _xmm) >= 0.000081380211 )
  {
    v7 = *((_BYTE *)this + 65);
    v8 = (char)(4 * v7) >> 6;
    if ( v8 )
    {
      v9 = v8 == 1
        && COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(COERCE_FLOAT(*((_DWORD *)this + 11) & _xmm) * 61440.0) - 0.0) & _xmm) < 0.000081380211;
    }
    else
    {
      LODWORD(v12) = *((_DWORD *)this + 11) & _xmm;
      v9 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                          (float)((float)((float)(COERCE_FLOAT(*((_DWORD *)this + 7) & _xmm) * 61440.0)
                                        + (float)(COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm) * 61440.0))
                                + COERCE_FLOAT(*((_DWORD *)this + 15) & _xmm))
                        - 1.0) & _xmm) < 0.000081380211;
      v7 ^= (v7 ^ (-16 - 32 * v9)) & 0x30;
      *((_BYTE *)this + 65) = v7;
      if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(v12 * 61440.0) - 0.0) & _xmm) >= 0.000081380211 )
        v9 = 0;
    }
    if ( v9 )
    {
      v10 = a3 + *((float *)this + 13);
      v11 = a4 + *((float *)this + 14);
      *((float *)this + 12) = a2 + *((float *)this + 12);
      *((float *)this + 13) = v10;
      *((float *)this + 14) = v11;
    }
    else
    {
      v13 = *((float *)this + 3);
      v14 = *((float *)this + 7);
      v15 = v13 * a2;
      *((_BYTE *)this + 65) = v7 & 0xF3;
      v16 = (float)(v13 * a3) + *((float *)this + 1);
      v17 = (float)(v13 * a4) + *((float *)this + 2);
      *(float *)this = v15 + *(float *)this;
      *((float *)this + 1) = v16;
      v18 = (float)(v14 * a2) + *((float *)this + 4);
      v19 = (float)(v14 * a3) + *((float *)this + 5);
      *((float *)this + 2) = v17;
      v20 = (float)(v14 * a4) + *((float *)this + 6);
      v21 = *((float *)this + 11);
      *((float *)this + 4) = v18;
      *((float *)this + 5) = v19;
      v22 = (float)(v21 * a2) + *((float *)this + 8);
      *((float *)this + 6) = v20;
      v23 = (float)(v21 * a3) + *((float *)this + 9);
      v24 = *((float *)this + 15);
      *((float *)this + 8) = v22;
      *((float *)this + 9) = v23;
      v25 = (float)(v24 * a2) + *((float *)this + 12);
      v26 = (float)(v24 * a3) + *((float *)this + 13);
      *((float *)this + 10) = (float)(v21 * a4) + *((float *)this + 10);
      v27 = (float)(v24 * a4) + *((float *)this + 14);
      *((float *)this + 12) = v25;
      *((float *)this + 13) = v26;
      *((float *)this + 14) = v27;
    }
    *((_BYTE *)this + 64) &= 0xFCu;
  }
}
