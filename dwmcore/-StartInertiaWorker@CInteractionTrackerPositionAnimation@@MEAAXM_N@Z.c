void __fastcall CInteractionTrackerPositionAnimation::StartInertiaWorker(
        CInteractionTrackerPositionAnimation *this,
        float a2,
        bool a3)
{
  __int64 v5; // rcx
  struct CInteractionTracker *InteractionTracker; // rsi
  float MostRecentCenterPoint; // xmm10_4
  CMotion *v8; // rax
  float CurrentVelocity; // xmm7_4
  float BoundedEndpoint; // xmm6_4
  char IsInertiaEnabledForAxis; // bp
  int v12; // r11d
  float InertiaDecayRate; // xmm9_4
  CInteractionTracker *v14; // rcx
  float CurrentValue; // xmm0_4

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(
                            (__int64)InteractionTracker,
                            2,
                            *(_DWORD *)(v5 + 340));
  v8 = (CMotion *)(*(__int64 (__fastcall **)(CInteractionTrackerPositionAnimation *))(*(_QWORD *)this + 328LL))(this);
  CurrentVelocity = CMotion::GetCurrentVelocity(v8);
  BoundedEndpoint = 0.0;
  if ( a3 && (*((_BYTE *)this + 344) & 1) != 0 )
    CurrentVelocity = 0.0;
  IsInertiaEnabledForAxis = InteractionSourceManager::IsInertiaEnabledForAxis(
                              (char *)InteractionTracker + 200,
                              *((unsigned int *)this + 85));
  InertiaDecayRate = CInteractionTracker::GetInertiaDecayRate((float *)InteractionTracker, v12);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(v14) )
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*((CScrollAnimation **)InteractionTracker + 41));
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, 2);
  *((_DWORD *)this + 149) = 0;
  *((_DWORD *)this + 143) = 0;
  *((float *)this + 125) = a2;
  *((float *)this + 150) = a2;
  *((float *)this + 144) = CurrentValue;
  *((float *)this + 151) = CurrentValue;
  *((float *)this + 147) = BoundedEndpoint;
  *((float *)this + 146) = MostRecentCenterPoint;
  CMotion::StartInertia(
    (CInteractionTrackerPositionAnimation *)((char *)this + 456),
    CurrentVelocity,
    InertiaDecayRate,
    IsInertiaEnabledForAxis,
    a3);
  *((_BYTE *)this + 344) &= ~1u;
}
