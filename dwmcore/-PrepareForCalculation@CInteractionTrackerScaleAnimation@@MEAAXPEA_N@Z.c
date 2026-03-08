/*
 * XREFs of ?PrepareForCalculation@CInteractionTrackerScaleAnimation@@MEAAXPEA_N@Z @ 0x180263D70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTrackerScaleAnimation::PrepareForCalculation(LARGE_INTEGER *this, bool *a2)
{
  QueryPerformanceCounter(this + 74);
  CScrollAnimation::PrepareForCalculation((CScrollAnimation *)this, a2);
}
