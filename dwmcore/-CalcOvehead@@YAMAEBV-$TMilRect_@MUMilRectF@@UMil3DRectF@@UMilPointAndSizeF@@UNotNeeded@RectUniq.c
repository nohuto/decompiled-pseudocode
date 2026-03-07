__m128 __fastcall CalcOvehead(__int128 *a1, float *a2)
{
  __int128 v2; // xmm0
  float v3; // xmm6_4
  float *v4; // rdx
  float *v5; // r10
  float v6; // xmm5_4
  float v7; // xmm8_4
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm1_4
  float v12; // xmm9_4
  float v13; // xmm7_4
  __int128 v14; // xmm2
  __int128 v16; // [rsp+20h] [rbp-88h] BYREF
  __int128 v17; // [rsp+30h] [rbp-78h]

  v2 = *a1;
  v16 = v2;
  v3 = *(float *)&v2;
  v17 = v2;
  TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&v16, a2);
  if ( *v4 > *(float *)&v2 )
    v3 = *v4;
  v6 = *((float *)&v17 + 1);
  v7 = v4[1];
  v8 = *((float *)&v17 + 1);
  if ( v7 > *((float *)&v17 + 1) )
  {
    v6 = v4[1];
    v8 = v6;
  }
  v9 = *((float *)&v17 + 2);
  v10 = v4[2];
  v11 = *((float *)&v17 + 2);
  if ( *((float *)&v17 + 2) > v10 )
  {
    v9 = v4[2];
    v11 = v9;
  }
  v12 = v4[3];
  v13 = *((float *)&v17 + 3);
  if ( *((float *)&v17 + 3) > v12 )
    v13 = v4[3];
  if ( v11 <= v3 || v13 <= v8 )
  {
    v9 = 0.0;
    v6 = 0.0;
    v3 = 0.0;
    v13 = 0.0;
  }
  v14 = DWORD2(v16);
  *(float *)&v14 = fmaxf(
                     (float)((float)(*((float *)&v16 + 2) - *(float *)&v16)
                           * (float)(*((float *)&v16 + 3) - *((float *)&v16 + 1)))
                   - (float)((float)((float)((float)(v5[3] - v5[1]) * (float)(v5[2] - *v5))
                                   + (float)((float)(v10 - *v4) * (float)(v12 - v7)))
                           - (float)((float)(v9 - v3) * (float)(v13 - v6))),
                     0.0);
  return (__m128)v14;
}
