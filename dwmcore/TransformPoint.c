/*
 * XREFs of TransformPoint @ 0x1801AD558
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x1801AAFC0 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_UPDATE@@1@Z @ 0x1802B73A0 (-TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_U.c)
 * Callees:
 *     <none>
 */

float *__fastcall TransformPoint(int *a1, int *a2, float a3, float a4, float *a5, float *a6)
{
  float v6; // xmm2_4
  float v7; // xmm2_4
  float *result; // rax

  v6 = a3 - (double)*a1;
  *a5 = (float)((float)(v6 * (float)(a2[2] - *a2)) / (float)(a1[2] - *a1)) + (float)*a2;
  v7 = a4 - (double)a1[1];
  result = a6;
  *a6 = (float)((float)(v7 * (float)(a2[3] - a2[1])) / (float)(a1[3] - a1[1])) + (float)a2[1];
  return result;
}
