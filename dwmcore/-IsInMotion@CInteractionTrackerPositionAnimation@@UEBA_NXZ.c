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
