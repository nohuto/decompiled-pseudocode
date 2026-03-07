void __fastcall CInteractionTrackerScaleAnimation::PrepareForCalculation(LARGE_INTEGER *this, bool *a2)
{
  QueryPerformanceCounter(this + 74);
  CScrollAnimation::PrepareForCalculation((CScrollAnimation *)this, a2);
}
