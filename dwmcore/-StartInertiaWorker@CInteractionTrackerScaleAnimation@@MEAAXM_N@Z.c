void __fastcall CInteractionTrackerScaleAnimation::StartInertiaWorker(
        CInteractionTrackerScaleAnimation *this,
        float a2,
        bool a3)
{
  struct CInteractionTracker *InteractionTracker; // rax
  __int64 v6; // rcx
  float *v7; // rsi
  char IsInertiaEnabledForAxis; // bl
  float *v9; // r11
  float InertiaDecayRate; // xmm6_4
  CMotion *v11; // rax
  float CurrentVelocity; // xmm0_4

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v7 = (float *)(v6 + 456);
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis((char *)InteractionTracker + 200, 2LL);
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate(v9, 2);
  v11 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerScaleAnimation *))(*(_QWORD *)this + 328LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v11);
  v7[11] = a2;
  CMotion::StartInertia((CMotion *)v7, CurrentVelocity, InertiaDecayRate, IsInertiaEnabledForAxis, a3);
}
