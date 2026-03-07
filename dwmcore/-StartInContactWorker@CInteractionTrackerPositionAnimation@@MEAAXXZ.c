void __fastcall CInteractionTrackerPositionAnimation::StartInContactWorker(CInteractionTrackerPositionAnimation *this)
{
  struct CInteractionTracker *InteractionTracker; // rax
  __int64 v3; // rcx
  __int64 *v4; // rcx
  char ShouldChainForAxis; // bl
  __int64 v6; // rbp
  int v7; // xmm6_4
  float CurrentValue; // xmm2_4
  struct CManipulation *ActiveManipulation; // rbp
  InteractionSourceManager *v10; // rcx
  __int64 v11; // rcx

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  v4 = (__int64 *)(v3 + 552);
  ShouldChainForAxis = 0;
  v6 = (__int64)InteractionTracker;
  if ( *v4 )
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(v4);
  v7 = *(_DWORD *)(v6 + 528);
  CurrentValue = CInteractionTracker::GetCurrentValue(v6, *((_DWORD *)this + 85));
  ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation((InteractionSourceManager *)(v6 + 200));
  if ( InteractionSourceManager::TryGetActiveChainingHelper(v10) && ActiveManipulation )
    ShouldChainForAxis = CInteractionTracker::ShouldChainForAxis(
                           v11,
                           *((_DWORD *)this + 85),
                           (__int64)ActiveManipulation,
                           0);
  *((float *)this + 125) = CurrentValue;
  *((float *)this + 150) = CurrentValue;
  *((_DWORD *)this + 151) = v7;
  CMotion::StartInContact((CInteractionTrackerPositionAnimation *)((char *)this + 456), ShouldChainForAxis);
}
