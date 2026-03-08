/*
 * XREFs of ?TransformDirection@CInteractionContextTransformHelper@@SAXAEBVMatrix3x2F@D2D1@@MMPEAM1@Z @ 0x1802B75E4
 * Callers:
 *     ?CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PEBUMANIPULATION_TRANSFORM@@PEBUtagRECT@@IMMPEAM3@Z @ 0x1802B6CA8 (-CalculatePrediction@CInteractionContextTransformHelper@@QEAAXAEBUINTERACTION_CONTEXT_OUTPUT@@PE.c)
 * Callees:
 *     ?IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ @ 0x18008048C (-IsIdentity@Matrix3x2F@D2D1@@QEBA_NXZ.c)
 */

void __fastcall CInteractionContextTransformHelper::TransformDirection(
        const struct D2D1::Matrix3x2F *a1,
        float a2,
        float a3,
        float *a4,
        float *a5)
{
  float v5; // xmm7_4
  float *v6; // rcx
  float *v7; // r9
  float v8; // xmm3_4

  v5 = a3;
  if ( D2D1::Matrix3x2F::IsIdentity(a1) )
  {
    v8 = a2;
  }
  else
  {
    a3 = (float)((float)((float)(v6[1] * a2) + (float)(v6[3] * a3)) + v6[5])
       - (float)((float)((float)(v6[1] * 0.0) + (float)(v6[3] * 0.0)) + v6[5]);
    v8 = (float)((float)((float)(*v6 * a2) + (float)(v6[2] * v5)) + v6[4])
       - (float)((float)((float)(*v6 * 0.0) + (float)(v6[2] * 0.0)) + v6[4]);
  }
  *v7 = v8;
  *a5 = a3;
}
