/*
 * XREFs of efSin @ 0x1C00A49D0
 * Callers:
 *     efCos @ 0x1C00A49A0 (efCos.c)
 *     ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C013CAC0 (-bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z.c)
 * Callees:
 *     bFToL @ 0x1C0082B80 (bFToL.c)
 *     eFraction @ 0x1C00A9718 (eFraction.c)
 */

__int64 __fastcall efSin(int a1)
{
  float v1; // xmm2_4
  int v2; // edi
  int v3; // ebx
  double v4; // xmm0_8
  __m128 v5; // xmm4
  float v6; // xmm3_4
  __int64 v7; // rcx
  __int64 v8; // rdx
  __m128 v9; // xmm2
  __m128 v10; // xmm2
  __m128 v11; // xmm3
  __m128 v13; // xmm0
  int v14; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(float *)&a1;
  if ( *(float *)&a1 < 0.0 )
  {
    v2 = 1;
    v3 = 0;
    LODWORD(v1) = a1 ^ _xmm;
  }
  else
  {
    v2 = 0;
    v3 = 1;
  }
  v14 = 0;
  bFToL(*(float *)&FP_SINE_FACTOR * v1, &v14, 5u);
  v4 = eFraction();
  v6 = *(float *)&v4;
  if ( ((v14 >> 5) & 2) == 0 )
    v3 = v2;
  v7 = v14 & 0x1F;
  if ( ((v14 >> 5) & 1) != 0 )
  {
    v8 = 4LL * (v14 & 0x1F);
    v9 = (__m128)*(unsigned int *)((char *)&unk_1C024E4D0 - v8);
    v9.m128_f32[0] = (float)(v9.m128_f32[0] - gaefSin[32 - (int)v7 - 1]) * *(float *)&v4;
    v10 = _mm_xor_ps(v9, v5);
    v10.m128_f32[0] = v10.m128_f32[0] + *(float *)((char *)&unk_1C024E4D0 - v8);
    v11 = v10;
  }
  else
  {
    v13 = (__m128)LODWORD(gaefSin[(int)v7 + 1]);
    v13.m128_f32[0] = (float)((float)(v13.m128_f32[0] - gaefSin[v7]) * v6) + gaefSin[v7];
    v11 = v13;
  }
  if ( v3 )
    v11 = _mm_xor_ps(v11, v5);
  return (unsigned int)_mm_cvtsi128_si32((__m128i)v11);
}
