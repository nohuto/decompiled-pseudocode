void __fastcall CMILMatrix::Translate(CMILMatrix *this, float a2, float a3)
{
  __int64 v4; // r11
  float v5; // xmm5_4
  float v6; // xmm5_4
  float v7; // xmm1_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4

  if ( COERCE_FLOAT(LODWORD(a2) & _xmm) >= 0.000081380211 || COERCE_FLOAT(LODWORD(a3) & _xmm) >= 0.000081380211 )
  {
    if ( CMILMatrix::IsAffine<1>((__int64)this, 0) )
    {
      v6 = v5 + *(float *)(v4 + 52);
      *(float *)(v4 + 48) = a2 + *(float *)(v4 + 48);
      *(float *)(v4 + 52) = v6;
    }
    else
    {
      v7 = *(float *)(v4 + 12);
      v8 = *(float *)(v4 + 28);
      v9 = v7;
      *(_BYTE *)(v4 + 65) &= 0xF3u;
      v10 = (float)(v7 * v5) + *(float *)(v4 + 4);
      *(float *)v4 = (float)(v9 * a2) + *(float *)v4;
      v11 = (float)(v8 * a2) + *(float *)(v4 + 16);
      *(float *)(v4 + 4) = v10;
      v12 = (float)(v8 * v5) + *(float *)(v4 + 20);
      v13 = *(float *)(v4 + 44);
      *(float *)(v4 + 16) = v11;
      *(float *)(v4 + 20) = v12;
      v14 = *(float *)(v4 + 60);
      v15 = (float)(v13 * a2) + *(float *)(v4 + 32);
      v16 = (float)(v13 * v5) + *(float *)(v4 + 36);
      *(float *)(v4 + 32) = v15;
      v17 = (float)(v14 * a2) + *(float *)(v4 + 48);
      *(float *)(v4 + 36) = v16;
      v18 = (float)(v14 * v5) + *(float *)(v4 + 52);
      *(float *)(v4 + 48) = v17;
      *(float *)(v4 + 52) = v18;
    }
    *(_BYTE *)(v4 + 64) &= 0xFCu;
  }
}
