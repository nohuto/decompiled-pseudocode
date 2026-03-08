/*
 * XREFs of ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x1800E2AA0
 * Callers:
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x1800705F0 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CMILMatrix::RoundOffsets(CMILMatrix *this)
{
  float v1; // xmm0_4
  int v2; // eax
  float v3; // xmm0_4
  int v4; // eax
  float v5; // xmm0_4
  int v6; // eax
  __m128 v7; // xmm2
  __m128 v8; // xmm2
  __m128 v9; // xmm2
  float v10; // [rsp+8h] [rbp+8h]
  float v11; // [rsp+8h] [rbp+8h]
  float v12; // [rsp+8h] [rbp+8h]

  v1 = *((float *)this + 12);
  if ( (LODWORD(v1) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v7 = 0LL;
    v7.m128_f32[0] = (float)(int)v1 - v1;
    v2 = (int)v1 - _mm_cmple_ss(v7, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v10 = v1 + 6291456.25;
    v2 = (int)(LODWORD(v10) << 10) >> 11;
  }
  *((float *)this + 12) = (float)v2;
  v3 = *((float *)this + 13);
  if ( (LODWORD(v3) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v8 = 0LL;
    v8.m128_f32[0] = (float)(int)v3 - v3;
    v4 = (int)v3 - _mm_cmple_ss(v8, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v11 = v3 + 6291456.25;
    v4 = (int)(LODWORD(v11) << 10) >> 11;
  }
  *((float *)this + 13) = (float)v4;
  v5 = *((float *)this + 14);
  if ( (LODWORD(v5) & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v9 = 0LL;
    v9.m128_f32[0] = (float)(int)v5 - v5;
    v6 = (int)v5 - _mm_cmple_ss(v9, (__m128)LODWORD(FLOAT_N0_5)).m128_u32[0];
  }
  else
  {
    v12 = v5 + 6291456.25;
    v6 = (int)(LODWORD(v12) << 10) >> 11;
  }
  *((_BYTE *)this + 64) &= 0xFCu;
  *((float *)this + 14) = (float)v6;
}
