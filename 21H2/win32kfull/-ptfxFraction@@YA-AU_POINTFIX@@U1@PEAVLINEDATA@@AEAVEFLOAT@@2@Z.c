/*
 * XREFs of ?ptfxFraction@@YA?AU_POINTFIX@@U1@PEAVLINEDATA@@AEAVEFLOAT@@2@Z @ 0x1C017045A
 * Callers:
 *     ?bWiden@WIDENER@@IEAAHXZ @ 0x1C01309F0 (-bWiden@WIDENER@@IEAAHXZ.c)
 * Callees:
 *     ?bIsZero@EFLOAT@@QEBAHXZ @ 0x1C0017E64 (-bIsZero@EFLOAT@@QEBAHXZ.c)
 *     bFToL @ 0x1C00E82E4 (bFToL.c)
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
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm3_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  unsigned int v17; // r8d
  int v18; // [rsp+20h] [rbp-18h] BYREF
  int v19; // [rsp+24h] [rbp-14h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

  if ( EFLOAT::bIsZero(a4) )
    return a1;
  v9 = *v5;
  if ( (*(_DWORD *)v5 & 0x10) != 0 )
  {
    v13 = v5[20];
  }
  else
  {
    v10 = (float)*((int *)v5 + 10);
    v11 = (float)*((int *)v5 + 11);
    v5[20] = v10;
    v5[21] = v11;
    v12 = FP_1_0 / *v7;
    *(_DWORD *)v5 = LODWORD(v9) | 0x10;
    v13 = v12 * v10;
    v5[20] = v12 * v10;
    v5[21] = v12 * v11;
  }
  v14 = v5[21];
  v15 = v13 * *v6;
  v18 = 0;
  v16 = v14 * *v6;
  v19 = 0;
  bFToL(v15, &v18, 6u);
  bFToL(v16, &v19, v17);
  HIDWORD(v20) = v19 + a1.y;
  LODWORD(v20) = a1.x + v18;
  return (struct _POINTFIX)v20;
}
