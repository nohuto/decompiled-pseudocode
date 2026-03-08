/*
 * XREFs of ?vCosSin@@YAXVEFLOAT@@PEAV1@1@Z @ 0x1C02C8BF4
 * Callers:
 *     GreAngleArc @ 0x1C02ADE64 (GreAngleArc.c)
 *     NtGdiArcInternal @ 0x1C02C8EE0 (NtGdiArcInternal.c)
 * Callees:
 *     bFToL @ 0x1C00D1C50 (bFToL.c)
 *     eFraction @ 0x1C0309AC4 (eFraction.c)
 */

void __fastcall vCosSin(int a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  int v6; // edi
  int v7; // ebx
  double v8; // xmm0_8
  int v9; // xmm4_4
  unsigned int v10; // edx
  int v11; // r8d
  __int64 v12; // r11
  __int64 v13; // r9
  int v14; // r10d
  float v15; // xmm3_4
  char v16; // r10
  __int64 v17; // rdx
  float v18; // xmm3_4
  int v19; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(float *)&a1;
  if ( *(float *)&a1 >= 0.0 )
  {
    v6 = 0;
    v7 = 1;
  }
  else
  {
    v6 = 1;
    v7 = 0;
    LODWORD(v3) = a1 ^ _xmm;
  }
  v19 = 0;
  bFToL(FP_SINE_FACTOR * v3, &v19, 5u);
  v8 = eFraction();
  v10 = v19;
  v12 = (unsigned int)(v11 + 27);
  v13 = (unsigned int)(v11 + 26);
  v14 = v19 >> 5;
  if ( ((v19 >> 5) & 2) == 0 )
    v7 = v6;
  if ( (v14 & 1) != 0 )
  {
    v15 = COERCE_FLOAT(COERCE_UNSIGNED_INT(
                         (float)(gaefSin[(unsigned int)v12 - (unsigned __int64)((unsigned int)v13 & v19)]
                               - gaefSin[(unsigned int)v13 - (unsigned __int64)((unsigned int)v13 & v19)])
                       * *(float *)&v8) ^ v9)
        + gaefSin[(unsigned int)v12 - (unsigned __int64)((unsigned int)v13 & v19)];
  }
  else
  {
    v10 = v13 & v19;
    v15 = (float)((float)(gaefSin[((unsigned int)v13 & v19) + 1] - gaefSin[v10]) * *(float *)&v8) + gaefSin[v10];
  }
  if ( v7 )
    LODWORD(v15) ^= v9;
  v16 = v14 + 1;
  *a3 = v15;
  v17 = (unsigned int)v13 & v10;
  if ( (v16 & 1) != 0 )
    v18 = COERCE_FLOAT(COERCE_UNSIGNED_INT((float)(gaefSin[v12 - (unsigned int)v17] - gaefSin[v13 - (unsigned int)v17]) * *(float *)&v8) ^ v9)
        + gaefSin[v12 - (unsigned int)v17];
  else
    v18 = (float)((float)(gaefSin[v17 + 1] - gaefSin[v17]) * *(float *)&v8) + gaefSin[v17];
  if ( (v16 & 2) != 0 )
    LODWORD(v18) ^= v9;
  *a2 = v18;
}
