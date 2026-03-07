char __fastcall CInteractionTracker::SetCustomAnimation(CInteractionTracker *a1, __int64 a2, int a3)
{
  char v3; // di

  v3 = 0;
  if ( a2 )
    return CInteractionTracker::TransitionToCustomAnimation();
  if ( *((_DWORD *)a1 + 44) == 3 )
  {
    CInteractionTracker::StopCustomAnimation(a1, a3, 0);
    CInteractionTracker::CheckForIdle(a1);
  }
  return v3;
}
