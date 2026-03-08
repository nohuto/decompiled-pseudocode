/*
 * XREFs of ?CalculateScaleAnimationDuration@CInteractionTracker@@AEAAMM@Z @ 0x18022E558
 * Callers:
 *     ?ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ @ 0x180230098 (-ProcessMousewheelManipulation@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z @ 0x18022E784 (-ClampValueToBoundary@CInteractionTracker@@QEAAMW4ScrollAxis@@M@Z.c)
 */

float __fastcall CInteractionTracker::CalculateScaleAnimationDuration(CInteractionTracker *this, float a2)
{
  double v3; // xmm0_8
  float v4; // xmm4_4
  __int64 v5; // rcx

  if ( *((float *)this + 34) == a2 )
    return FLOAT_0_001;
  if ( a2 >= *((float *)this + 35) && *((float *)this + 36) >= a2 )
    return *((float *)this + 32);
  v3 = CInteractionTracker::ClampValueToBoundary(this, 2LL);
  return fmaxf(
           COERCE_FLOAT(COERCE_UNSIGNED_INT(*(float *)&v3 - v4) & _xmm)
         / (float)(COERCE_FLOAT(COERCE_UNSIGNED_INT(a2 - v4) & _xmm) / *(float *)(v5 + 132)),
           0.001);
}
