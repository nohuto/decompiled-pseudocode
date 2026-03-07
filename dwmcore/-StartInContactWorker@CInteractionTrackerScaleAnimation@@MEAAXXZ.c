void __fastcall CInteractionTrackerScaleAnimation::StartInContactWorker(CInteractionTrackerScaleAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rax
  __int64 v2; // rcx
  float *v3; // rdi
  struct CInteractionTracker *v4; // rbx
  float CurrentValue; // xmm0_4
  InteractionSourceManager *v6; // rcx
  char ShouldChainForAxis; // bl
  struct CManipulation *ActiveManipulation; // rsi
  InteractionSourceManager *v9; // rcx
  __int64 v10; // rcx

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v3 = (float *)(v2 + 456);
  v4 = InteractionTracker;
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, 2);
  v6 = (struct CInteractionTracker *)((char *)v4 + 200);
  ShouldChainForAxis = 0;
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(v6);
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v9) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(v10, 2, (__int64)ActiveManipulation, 0);
  v3[28] = CurrentValue;
  v3[11] = CurrentValue;
  CMotion::StartInContact((CMotion *)v3, ShouldChainForAxis);
}
