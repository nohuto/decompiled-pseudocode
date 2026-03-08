/*
 * XREFs of ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x1802636C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 */

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
