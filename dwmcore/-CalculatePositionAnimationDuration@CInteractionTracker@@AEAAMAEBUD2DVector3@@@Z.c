/*
 * XREFs of ?CalculatePositionAnimationDuration@CInteractionTracker@@AEAAMAEBUD2DVector3@@@Z @ 0x18022E3F0
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     sqrtf_0 @ 0x1801177AC (sqrtf_0.c)
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18022E784 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 */

float __fastcall CInteractionTracker::CalculatePositionAnimationDuration(
        CInteractionTracker *this,
        const struct D2DVector3 *a2)
{
  unsigned __int64 v3; // rcx
  float v5; // xmm9_4
  bool v6; // cl
  float v7; // xmm8_4
  bool v8; // al
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm7_4
  double v12; // xmm0_8
  float v13; // xmm3_4
  __int64 v14; // rcx
  double v15; // xmm0_8
  float v16; // [rsp+28h] [rbp-50h]

  v3 = *((_QWORD *)this + 10) - *(_QWORD *)a2;
  if ( !v3 )
    v3 = *((unsigned int *)this + 22) - (unsigned __int64)*((unsigned int *)a2 + 2);
  if ( !v3 )
    return FLOAT_0_001;
  v5 = *(float *)a2;
  v6 = *(float *)a2 >= *((float *)this + 23) && *((float *)this + 26) >= v5;
  v7 = *((float *)a2 + 1);
  v8 = v7 >= *((float *)this + 24) && *((float *)this + 27) >= v7;
  if ( v6 && v8 )
    return *((float *)this + 32);
  v9 = v5 - *((float *)this + 20);
  v10 = v7 - *((float *)this + 21);
  v11 = *((float *)a2 + 2) - *((float *)this + 22);
  v16 = *((float *)a2 + 2);
  v12 = CInteractionTracker::ClampValueToBoundary(this, 0LL);
  v13 = *(float *)&v12 - *((float *)this + 20);
  v15 = CInteractionTracker::ClampValueToBoundary(v14, 1LL);
  *(float *)&v15 = sqrtf_0(
                     (float)((float)((float)(*(float *)&v15 - *((float *)this + 21))
                                   * (float)(*(float *)&v15 - *((float *)this + 21)))
                           + (float)(v13 * v13))
                   + (float)((float)(v16 - *((float *)this + 22)) * (float)(v16 - *((float *)this + 22))));
  return fmaxf(
           *(float *)&v15
         / (float)(sqrtf_0((float)((float)(v10 * v10) + (float)(v9 * v9)) + (float)(v11 * v11)) / *((float *)this + 32)),
           0.001);
}
