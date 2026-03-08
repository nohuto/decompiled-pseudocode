/*
 * XREFs of ?bPartialQuadrantArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@AEAVEFLOAT@@34@Z @ 0x1C02C8340
 * Callers:
 *     ?bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z @ 0x1C02C80A4 (-bPartialArc@@YAHW4PARTIALARC@@AEAVEPATHOBJ@@AEAVEBOX@@AEAVEPOINTFL@@JAEAVEFLOAT@@3J4J@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z @ 0x1C014D8B8 (-bMoveTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@@Z.c)
 *     ?bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DA72 (-bPolyLineTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z @ 0x1C014DF96 (-bPolyBezierTo@EPATHOBJ@@QEAAHPEAVEXFORMOBJ@@PEAU_POINTL@@K@Z.c)
 *     ?ptlXform@EBOX@@QEAA?AU_POINTL@@AEAVEPOINTFL@@@Z @ 0x1C02C89C8 (-ptlXform@EBOX@@QEAA-AU_POINTL@@AEAVEPOINTFL@@@Z.c)
 */

__int64 __fastcall bPartialQuadrantArc(
        int a1,
        EPATHOBJ *a2,
        EBOX *a3,
        float *a4,
        float *a5,
        float *a6,
        unsigned int *a7)
{
  float v7; // xmm5_4
  float v8; // xmm3_4
  float v12; // xmm4_4
  float v14; // xmm6_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  __m128i v18; // xmm1
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm5_4
  int v29; // ebx
  int v30; // eax
  struct _POINTL v32; // [rsp+28h] [rbp-61h] BYREF
  __int64 v33; // [rsp+30h] [rbp-59h]
  __int64 v34; // [rsp+38h] [rbp-51h]
  float v35; // [rsp+40h] [rbp-49h]
  float v36; // [rsp+44h] [rbp-45h]
  unsigned __int64 v37; // [rsp+48h] [rbp-41h]
  struct _POINTL v38; // [rsp+50h] [rbp-39h] BYREF
  __int64 v39; // [rsp+58h] [rbp-31h]
  __int64 v40; // [rsp+60h] [rbp-29h]

  v7 = *a4;
  v8 = a4[1];
  v12 = *a6;
  v14 = a6[1];
  v15 = (float)(*a4 * v14) - (float)(v8 * *a6);
  v16 = v15;
  if ( v15 < 0.0 )
    LODWORD(v16) = LODWORD(v15) ^ _xmm;
  if ( FP_EPSILON < v16 )
  {
    v18 = (__m128i)*a7;
    v32.y = *(LONG *)a4;
    v19 = (float)(v14 - v8) / v16;
    *(float *)v18.m128i_i32 = (float)(*(float *)v18.m128i_i32 - *a5) * 0.5;
    v20 = (float)(v7 - v12) / v16;
    v21 = COERCE_FLOAT(efCos((unsigned int)_mm_cvtsi128_si32(v18)));
    if ( v21 < 0.0 )
      LODWORD(v21) ^= _xmm;
    v22 = (float)(FP_4DIV3 * v21) / (float)(FP_1_0 + v21);
    v33 = *(_QWORD *)a4;
    v23 = FP_1_0 - v22;
    v24 = v22 * v20;
    v25 = (float)((float)(FP_4DIV3 * v21) / (float)(FP_1_0 + v21)) * v19;
    v26 = (float)(v23 * *(float *)&v33) + v25;
    *((float *)&v34 + 1) = (float)(v23 * *((float *)&v33 + 1)) + v24;
    v27 = v23 * *a6;
    v28 = v23 * a6[1];
    *(float *)&v34 = v26;
    v35 = v27 + v25;
    v37 = *(_QWORD *)a6;
    v36 = v28 + v24;
  }
  else
  {
    v33 = *(_QWORD *)a4;
    v34 = v33;
    v17 = a6[1];
    v35 = *a6;
    v36 = v17;
    v37 = __PAIR64__(LODWORD(v17), LODWORD(v35));
  }
  if ( !a1 )
    goto LABEL_13;
  EBOX::ptlXform(a3, (struct EPOINTFL *)&v32);
  v29 = a1 - 1;
  if ( v29 )
  {
    if ( v29 != 1 )
    {
LABEL_13:
      v38 = **(struct _POINTL **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v32);
      v39 = **(_QWORD **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v32);
      v40 = **(_QWORD **)&EBOX::ptlXform(a3, (struct EPOINTFL *)&v32);
      return EPATHOBJ::bPolyBezierTo(a2, 0LL, &v38, 3u);
    }
    v30 = EPATHOBJ::bPolyLineTo(a2, 0LL, &v32, 1u);
  }
  else
  {
    v30 = EPATHOBJ::bMoveTo(a2, 0LL, &v32);
  }
  if ( v30 )
    goto LABEL_13;
  return 0LL;
}
