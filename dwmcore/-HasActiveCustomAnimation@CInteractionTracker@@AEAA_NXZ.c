char __fastcall CInteractionTracker::HasActiveCustomAnimation(CInteractionTracker *this)
{
  char result; // al
  int v2; // edx
  char *i; // rcx

  result = 0;
  v2 = 0;
  for ( i = (char *)this + 352; !*(_QWORD *)i || !*(_QWORD *)(*(_QWORD *)i + 16LL); i += 8 )
  {
    if ( (unsigned int)++v2 >= 2 )
      return result;
  }
  return 1;
}
