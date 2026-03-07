bool __fastcall CInteractionTracker::AreInteractionAnimationsAlive(CInteractionTracker *this)
{
  bool result; // al

  result = 0;
  if ( *((_QWORD *)this + 41) )
  {
    if ( *((_QWORD *)this + 42) )
      return *((_QWORD *)this + 43) != 0LL;
  }
  return result;
}
