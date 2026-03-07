__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInContactValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float a4,
        float *a5)
{
  __int64 v7; // rcx
  struct CInteractionTracker *InteractionTracker; // rbx
  float MostRecentCenterPoint; // xmm6_4
  double ActiveManipulationVelocity; // xmm0_8
  float v11; // xmm3_4
  int v12; // r11d
  float v13; // xmm2_4
  _DWORD *v14; // rcx
  int v15; // r11d
  float v16; // xmm4_4
  unsigned int v17; // eax
  double v18; // xmm5_8

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(
                            (__int64)InteractionTracker,
                            1,
                            *(_DWORD *)(v7 + 340));
  CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, 2);
  ActiveManipulationVelocity = InteractionSourceManager::GetActiveManipulationVelocity(
                                 (char *)InteractionTracker + 200,
                                 *((unsigned int *)this + 85));
  v11 = *(float *)&ActiveManipulationVelocity;
  v13 = CInteractionTracker::ValueFromBoundary(InteractionTracker, 2LL, v12);
  *(float *)&ActiveManipulationVelocity = CInteractionTracker::ValueFromBoundary(v14, 1LL, v15);
  *(float *)&ActiveManipulationVelocity = CPositionMotion::CalculateInContactValue(
                                            (CInteractionTrackerPositionAnimation *)((char *)this + 456),
                                            *(float *)&ActiveManipulationVelocity,
                                            v13,
                                            a4,
                                            v11,
                                            v16,
                                            MostRecentCenterPoint);
  v17 = CInteractionTracker::BoundaryFromValue(
          (__int64)InteractionTracker,
          *(float *)&ActiveManipulationVelocity,
          *((_DWORD *)this + 85));
  *(_DWORD *)a5 = CScrollAnimation::UpdateValueWithChaining(
                    (__int64)this,
                    v18,
                    *(float *)&v18 - *((float *)this + 125),
                    v17).m128_u32[0];
  return 0LL;
}
