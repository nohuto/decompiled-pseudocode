void __fastcall CInteractionTrackerScaleAnimation::InsertDependenciesInOrder(
        CInteractionTrackerScaleAnimation *this,
        const struct ExpressionWalkContext *a2)
{
  struct CInteractionTracker *InteractionTracker; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx
  const char *v5; // r9

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  CInteractionTracker::InsertDependenciesForAxis((__int64)InteractionTracker, v4, *(_DWORD *)(v3 + 340), v5);
}
