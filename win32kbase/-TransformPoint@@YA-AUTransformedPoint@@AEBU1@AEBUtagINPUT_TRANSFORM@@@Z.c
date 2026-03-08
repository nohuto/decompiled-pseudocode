/*
 * XREFs of ?TransformPoint@@YA?AUTransformedPoint@@AEBU1@AEBUtagINPUT_TRANSFORM@@@Z @ 0x1C0158EE0
 * Callers:
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1C01585A4 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     ?MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z @ 0x1C0158A04 (-MapPointsByVisualIdentifierInternal@@YAJPEAU_LUID@@0KPEAUVisualPoint@@1@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall TransformPoint(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm3_4
  float v5; // xmm1_4

  result = a1;
  v4 = (float)((float)(*a2 * a3[3]) + (float)(a2[1] * a3[7])) + a3[15];
  v5 = (float)((float)((float)(a2[1] * a3[4]) + (float)(*a2 * *a3)) + a3[12]) / v4;
  a1[1] = (float)((float)((float)(*a2 * a3[1]) + (float)(a2[1] * a3[5])) + a3[13]) / v4;
  *a1 = v5;
  return result;
}
