/*
 * XREFs of ?TryDoubleTheStep@?$CBezierFlattener@MVCMilPoint2F@@@@IEAA_NXZ @ 0x180083330
 * Callers:
 *     ?Flatten@?$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z @ 0x18001655C (-Flatten@-$CBezierFlattener@MVCMilPoint2F@@@@QEAA_NPEAVCMilPoint2F@@0PEAMIPEAI_N@Z.c)
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x180082A70 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CBezierFlattener<float,CMilPoint2F>::TryDoubleTheStep(__int64 a1)
{
  int v1; // eax
  char v2; // r8
  float v4; // xmm5_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  float v8; // xmm1_4
  float v9; // xmm0_4

  v1 = *(_DWORD *)(a1 + 80);
  v2 = 0;
  if ( (v1 & 1) == 0 )
  {
    v4 = *(float *)(a1 + 72);
    v5 = *(float *)(a1 + 40);
    v6 = (float)(*(float *)(a1 + 68) + *(float *)(a1 + 68)) - *(float *)(a1 + 76);
    v7 = (float)(*(float *)(a1 + 64) + *(float *)(a1 + 64)) - v4;
    if ( v5 >= COERCE_FLOAT(LODWORD(v4) & _xmm)
      && v5 >= COERCE_FLOAT(*(_DWORD *)(a1 + 76) & _xmm)
      && v5 >= COERCE_FLOAT(LODWORD(v7) & _xmm)
      && v5 >= COERCE_FLOAT(LODWORD(v6) & _xmm) )
    {
      v8 = (float)(*(float *)(a1 + 56) + *(float *)(a1 + 56)) + *(float *)(a1 + 64);
      v2 = 1;
      *(float *)(a1 + 60) = (float)(*(float *)(a1 + 60) + *(float *)(a1 + 60)) + *(float *)(a1 + 68);
      *(float *)(a1 + 56) = v8;
      *(float *)(a1 + 76) = *(float *)(a1 + 76) * 4.0;
      *(float *)(a1 + 72) = v4 * 4.0;
      *(float *)(a1 + 64) = v7 * 4.0;
      *(float *)(a1 + 68) = v6 * 4.0;
      v9 = *(float *)(a1 + 88) + *(float *)(a1 + 88);
      *(_DWORD *)(a1 + 80) = v1 / 2;
      *(float *)(a1 + 88) = v9;
    }
  }
  return v2;
}
