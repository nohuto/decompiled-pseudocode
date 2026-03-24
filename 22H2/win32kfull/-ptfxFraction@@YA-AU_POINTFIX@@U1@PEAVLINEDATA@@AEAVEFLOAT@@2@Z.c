/*
 * XREFs of ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C02CE968
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C0140328 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C00986B8 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00FB1E8 (bFToL.c)
 */

struct _POINTFIX __fastcall ptfxFraction(
        struct _POINTFIX a1,
        struct LINEDATA *a2,
        struct EFLOAT *a3,
        struct EFLOAT *a4)
{
  float *v5; // rdx
  float *v6; // r8
  float *v7; // r9
  float v9; // ecx
  float v10; // xmm3_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm3_4
  float v14; // xmm0_4
  float v15; // xmm3_4
  unsigned int v16; // r8d
  int v17; // [rsp+20h] [rbp-18h] BYREF
  int v18; // [rsp+24h] [rbp-14h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  if ( EFLOAT::bIsZero(a4) )
    return a1;
  v9 = *v5;
  if ( (*(_DWORD *)v5 & 0x10) == 0 )
  {
    v10 = (float)*((int *)v5 + 10);
    v11 = (float)*((int *)v5 + 11);
    v5[20] = v10;
    v5[21] = v11;
    v12 = FP_1_0 / *v7;
    *(_DWORD *)v5 = LODWORD(v9) | 0x10;
    v5[20] = v12 * v10;
    v5[21] = v12 * v11;
  }
  v13 = v5[21];
  v14 = v5[20] * *v6;
  v17 = 0;
  v15 = v13 * *v6;
  v18 = 0;
  bFToL(v14, &v17, 6u);
  bFToL(v15, &v18, v16);
  HIDWORD(v19) = v18 + a1.y;
  LODWORD(v19) = a1.x + v17;
  return (struct _POINTFIX)v19;
}
