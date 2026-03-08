/*
 * XREFs of ?CalculateDefaultInContactDelta@CInteractionTrackerScaleAnimation@@MEAAMMMMM@Z @ 0x180263A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

float __fastcall CInteractionTrackerScaleAnimation::CalculateDefaultInContactDelta(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  if ( (a4 <= a2 || a3 > 1.0) && (a2 <= a5 || a3 < 1.0) )
    return a3;
  else
    return (float)((float)((float)(1.0 - (float)(*(float *)(*((_QWORD *)this + 68) + 16LL) * 0.0099999998))
                         * (float)((float)(a2 * a3) - a2))
                 + a2)
         / a2;
}
