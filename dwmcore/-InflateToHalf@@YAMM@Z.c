/*
 * XREFs of ?InflateToHalf@@YAMM@Z @ 0x180030260
 * Callers:
 *     ?CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1800300A0 (-CreateSurfaceDrawListBrushForIntermediate@CRenderingTechnique@@QEAAJIAEBUEffectInput@@PEAPEAVCS.c)
 * Callees:
 *     floorf_0 @ 0x180117728 (floorf_0.c)
 */

float __fastcall InflateToHalf(float a1)
{
  float v1; // xmm6_4
  float v2; // xmm0_4

  v1 = a1;
  v2 = floorf_0(a1);
  if ( (float)(v1 - v2) < 0.5 )
    return v2 + 0.5;
  return v1;
}
