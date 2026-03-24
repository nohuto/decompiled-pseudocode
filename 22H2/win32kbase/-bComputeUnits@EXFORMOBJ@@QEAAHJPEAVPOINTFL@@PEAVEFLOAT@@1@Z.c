/*
 * XREFs of ?bComputeUnits@EXFORMOBJ@@QEAAHJPEAVPOINTFL@@PEAVEFLOAT@@1@Z @ 0x1C013CAC0
 * Callers:
 *     <none>
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C0024180 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00245AC (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     ?eqLength@EFLOAT@@QEAA?AV1@AEBVPOINTFL@@@Z @ 0x1C0094520 (-eqLength@EFLOAT@@QEAA-AV1@AEBVPOINTFL@@@Z.c)
 *     efSin @ 0x1C00A49D0 (efSin.c)
 */

__int64 __fastcall EXFORMOBJ::bComputeUnits(
        __m128 **this,
        int a2,
        struct POINTFL *a3,
        struct EFLOAT *a4,
        struct EFLOAT *a5)
{
  unsigned int v5; // ebx
  float *v8; // r8
  __int32 v11; // esi
  int v12; // r10d
  float v13; // xmm1_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  char v16; // dl
  float v17; // xmm4_4
  int v18; // xmm5_4
  __m128i v19; // xmm0
  __m128i v20; // xmm6
  float v21; // xmm8_4
  float *v22; // rax
  float v24[12]; // [rsp+20h] [rbp-50h] BYREF
  int v25; // [rsp+A0h] [rbp+30h] BYREF
  float v26; // [rsp+A8h] [rbp+38h] BYREF

  v5 = 0;
  v8 = (float *)*this;
  v11 = (*this)[2].m128_i32[0];
  v26 = 0.0;
  v12 = abs32(a2);
  if ( (v11 & 1) == 0 || v12 != 900 * (v12 / 900) )
  {
    v19 = (__m128i)COERCE_UNSIGNED_INT((float)v12);
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 / 10.0;
    v20 = v19;
    *(float *)v19.m128i_i32 = *(float *)v19.m128i_i32 + *(float *)&FP_90_0;
    LODWORD(v21) = efSin(_mm_cvtsi128_si32(v19));
    v24[0] = v21;
    LODWORD(v24[1]) = efSin(_mm_cvtsi128_si32(v20));
    if ( (v11 & 2) == 0 )
    {
      if ( !(unsigned int)EXFORMOBJ::bXform(this, (struct VECTORFL *)v24, (struct VECTORFL *)v24, 1LL) )
        return v5;
      v21 = v24[0];
    }
    EFLOAT::eqLength((EFLOAT *)&v26, &v25, v24);
    if ( EFLOAT::bIsZero((EFLOAT *)&v26) )
      return v5;
    v15 = v24[1] / v26;
    v13 = v26 * 16.0;
    v24[0] = v21 / v26;
    goto LABEL_16;
  }
  if ( ((v12 / 900) & 1) != 0 )
  {
    v13 = v8[3];
    v14 = 0.0;
    v24[0] = 0.0;
    v15 = FLOAT_1_0;
    v24[1] = FLOAT_1_0;
  }
  else
  {
    v13 = *v8;
    v15 = 0.0;
    v14 = FLOAT_1_0;
    *(_QWORD *)v24 = LODWORD(FLOAT_1_0);
  }
  v26 = v13;
  if ( EFLOAT::bIsZero((EFLOAT *)&v26) )
    return v5;
  if ( (v16 & 2) != 0 )
    LODWORD(v13) ^= _xmm;
  if ( v17 > v13 )
  {
    LODWORD(v24[0]) = LODWORD(v14) ^ _xmm;
    LODWORD(v13) ^= _xmm;
    LODWORD(v15) = v18 ^ _xmm;
LABEL_16:
    v24[1] = v15;
  }
  if ( a2 < 0 )
    LODWORD(v24[1]) = LODWORD(v15) ^ _xmm;
  v22 = (float *)a5;
  *(_QWORD *)a3 = *(_QWORD *)v24;
  *(float *)a4 = v13;
  if ( v22 )
    *v22 = 1.0 / v13;
  return 1;
}
