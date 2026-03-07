void __fastcall CInteractionTracker::DemoteToBoundTracker(CInteractionTracker *this, bool a2)
{
  char v2; // al

  v2 = *((_BYTE *)this + 541);
  if ( (v2 & 1) != 0 )
  {
    *((_BYTE *)this + 541) = v2 & 0xFE;
    CInteractionTracker::DestroyInteractionAnimations(this);
    CInteractionTracker::DestroyDefaultAnimations(this, 0);
    CInteractionTracker::StopCustomAnimation(this, 0, a2);
    if ( *((_QWORD *)this + 45) )
    {
      if ( (*((_BYTE *)this + 541) & 2) == 0 )
        CInteractionTracker::StopCustomAnimation(this, 1, a2);
    }
  }
}
