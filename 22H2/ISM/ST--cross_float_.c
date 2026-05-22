/*
 * XREFs of ST::cross_float_ @ 0x1801A571C
 * Callers:
 *     ??$SE3_log@M@ST@@YAXQEAMAEBU?$SE3@M@0@@Z @ 0x1801A5428 (--$SE3_log@M@ST@@YAXQEAMAEBU-$SE3@M@0@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ST::cross_float_(float *a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  float v4; // xmm0_4
  float v5; // xmm3_4
  float v6; // xmm3_4

  v3 = *a3;
  v4 = *a2 * a3[2];
  v5 = *a2 * a3[1];
  *a1 = (float)(a3[2] * a2[1]) - (float)(a3[1] * a2[2]);
  v6 = v5 - (float)(v3 * a2[1]);
  a1[1] = (float)(v3 * a2[2]) - v4;
  a1[2] = v6;
}
