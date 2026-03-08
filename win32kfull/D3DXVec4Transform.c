/*
 * XREFs of D3DXVec4Transform @ 0x1C0144E20
 * Callers:
 *     BuildVertexList @ 0x1C0144D14 (BuildVertexList.c)
 *     GetInertiaRegionInVirtualizedScreen @ 0x1C01F8A64 (GetInertiaRegionInVirtualizedScreen.c)
 * Callees:
 *     <none>
 */

float *__fastcall D3DXVec4Transform(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm7_4
  float v5; // xmm1_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm2_4

  result = a1;
  v4 = (float)((float)((float)(*a2 * a3[1]) + (float)(a2[1] * a3[5])) + (float)(a2[2] * a3[9]))
     + (float)(a2[3] * a3[13]);
  v5 = a2[2];
  v6 = (float)((float)((float)(*a2 * a3[2]) + (float)(a2[1] * a3[6])) + (float)(v5 * a3[10])) + (float)(a2[3] * a3[14]);
  v7 = a2[3];
  v8 = (float)((float)((float)(*a2 * a3[3]) + (float)(a2[1] * a3[7])) + (float)(v5 * a3[11])) + (float)(v7 * a3[15]);
  *a1 = (float)((float)((float)(a2[1] * a3[4]) + (float)(*a2 * *a3)) + (float)(v5 * a3[8])) + (float)(v7 * a3[12]);
  a1[1] = v4;
  a1[2] = v6;
  a1[3] = v8;
  return result;
}
