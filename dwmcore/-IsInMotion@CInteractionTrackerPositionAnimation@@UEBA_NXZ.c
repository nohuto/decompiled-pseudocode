/*
 * XREFs of ?IsInMotion@CInteractionTrackerPositionAnimation@@UEBA_NXZ @ 0x1802636F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ @ 0x18012E802 (-AreInteractionAnimationsAlive@CInteractionTracker@@QEBA_NXZ.c)
 *     ?GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ @ 0x18026191C (-GetInteractionTracker@CScrollAnimation@@IEBAPEAVCInteractionTracker@@XZ.c)
 *     ?IsInMotion@CScrollAnimation@@UEBA_NXZ @ 0x180261B60 (-IsInMotion@CScrollAnimation@@UEBA_NXZ.c)
 */

char __fastcall CInteractionTrackerPositionAnimation::IsInMotion(CInteractionTrackerPositionAnimation *this)
{
  CInteractionTracker *InteractionTracker; // rax
  char v3; // dl
  __int64 v4; // rcx
  unsigned __int64 v5; // r8

  if ( CScrollAnimation::IsInMotion(this) )
    return 1;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  if ( CInteractionTracker::AreInteractionAnimationsAlive(InteractionTracker) )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 328) + 384LL);
  if ( v5 > *((_QWORD *)this + 48) )
    return 1;
  return v3;
}
