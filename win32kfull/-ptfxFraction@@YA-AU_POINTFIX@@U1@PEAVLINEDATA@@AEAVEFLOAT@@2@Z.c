struct _POINTFIX __fastcall ptfxFraction(
        struct _POINTFIX a1,
        struct LINEDATA *a2,
        struct EFLOAT *a3,
        struct EFLOAT *a4)
{
  float *v5; // rdx
  float *v6; // r9
  float *v7; // r10
  float v9; // r8d
  float *v10; // rcx
  float v11; // xmm3_4
  float v12; // xmm4_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm2_4
  unsigned int v17; // r8d
  int v18; // [rsp+20h] [rbp-18h] BYREF
  int v19; // [rsp+24h] [rbp-14h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

  if ( EFLOAT::bIsZero(a4) )
    return a1;
  v9 = *v5;
  v10 = v5 + 20;
  if ( (*(_DWORD *)v5 & 0x10) == 0 )
  {
    v11 = (float)*((int *)v5 + 10);
    v12 = (float)*((int *)v5 + 11);
    *v10 = v11;
    v5[21] = v12;
    v13 = FP_1_0 / *v6;
    *(_DWORD *)v5 = LODWORD(v9) | 0x10;
    *v10 = v13 * v11;
    v5[21] = v13 * v12;
  }
  v14 = *v7;
  v15 = *v10;
  v16 = v5[21];
  v18 = 0;
  v19 = 0;
  bFToL(v15 * v14, &v18, 6u);
  bFToL(v16 * v14, &v19, v17);
  HIDWORD(v20) = v19 + a1.y;
  LODWORD(v20) = a1.x + v18;
  return (struct _POINTFIX)v20;
}
