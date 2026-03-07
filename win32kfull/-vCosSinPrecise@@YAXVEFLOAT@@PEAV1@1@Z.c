__int64 __fastcall vCosSinPrecise(__int64 a1, float *a2)
{
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  float *v6; // r11
  double v7; // xmm0_8
  int v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm0_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm7_4
  float v14; // xmm3_4
  __int64 result; // rax
  float v16; // xmm2_4
  float v17; // xmm6_4
  float v18; // xmm5_4
  float v19; // xmm0_4

  v7 = eFraction(a1, a2, *(float *)&a1 < 0.0, 0LL);
  v10 = *(float *)&v7 * FP_360_0;
  v11 = v10;
  if ( v9 > (float)(FP_180_0 - v10) )
  {
    v4 = 1;
    v11 = FP_360_0 - v10;
  }
  if ( v9 > (float)(FP_90_0 - v11) )
  {
    v5 = 1;
    v11 = FP_180_0 - v11;
  }
  v12 = FP_1_0;
  v14 = FP_2_0;
  LODWORD(result) = 2;
  v16 = (float)(FP_PI * v11) / FP_180_0;
  v13 = v16;
  v17 = v16;
  v18 = FP_2_0;
  do
  {
    v17 = v17 * v13;
    v19 = v17 / v18;
    if ( (result & 2) != 0 )
      LODWORD(v19) ^= v8;
    if ( (result & 1) != 0 )
      v16 = v16 + v19;
    else
      v12 = v12 + v19;
    v14 = v14 + FP_1_0;
    result = (unsigned int)(result + 1);
    v18 = v18 * v14;
  }
  while ( (unsigned int)result < 0xD );
  if ( !v3 )
  {
    if ( !v4 )
      goto LABEL_17;
    goto LABEL_16;
  }
  if ( !v4 )
LABEL_16:
    LODWORD(v16) ^= v8;
LABEL_17:
  if ( v5 )
    LODWORD(v12) ^= v8;
  *a2 = v12;
  *v6 = v16;
  return result;
}
