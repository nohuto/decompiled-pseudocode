/*
 * XREFs of ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x1801C87E4
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x1801CA380 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x1801C8B88 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 */

float __fastcall CInteractionTracker::CalculateScaleAnimationDuration(CInteractionTracker *this, float a2)
{
  double v3; // xmm0_8
  float v4; // xmm4_4
  __int64 v5; // rcx

  if ( *((float *)this + 32) == a2 )
    return FLOAT_0_001;
  if ( a2 >= *((float *)this + 33) && *((float *)this + 34) >= a2 )
    return *((float *)this + 30);
  v3 = CInteractionTracker::ClampValueToBoundary(this, 2LL);
  return fmaxf(
           COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v3 - v4) & _xmm)
         / (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - v4) & _xmm) / *(float *)(v5 + 124)),
           0.001);
}
