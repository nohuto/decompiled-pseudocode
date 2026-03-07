char __fastcall CInteractionTracker::HasDefaultAnimations(CInteractionTracker *this)
{
  char result; // al

  result = 0;
  if ( *((_QWORD *)this + 58) || *((_QWORD *)this + 59) )
    return 1;
  return result;
}
