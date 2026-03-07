void __fastcall TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::Inflate(float *a1, float a2, float a3)
{
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm1_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float v9; // xmm1_4
  float v10; // xmm1_4

  if ( *a1 <= (float)(a2 - 3.4028235e38) )
    v4 = FLOAT_N3_4028235e38;
  else
    v4 = *a1 - a2;
  *a1 = v4;
  v5 = a1[1];
  if ( v5 <= (float)(a3 - 3.4028235e38) )
    v6 = FLOAT_N3_4028235e38;
  else
    v6 = v5 - a3;
  a1[1] = v6;
  v7 = a1[2];
  if ( (float)(3.4028235e38 - a2) <= v7 )
    v8 = FLOAT_3_4028235e38;
  else
    v8 = v7 + a2;
  a1[2] = v8;
  v9 = a1[3];
  if ( (float)(3.4028235e38 - a3) <= v9 )
    v10 = FLOAT_3_4028235e38;
  else
    v10 = v9 + a3;
  a1[3] = v10;
}
