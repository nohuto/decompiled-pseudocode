char __fastcall CAnimation::HasEnded(CAnimation *this)
{
  char result; // al

  result = 0;
  if ( *((_BYTE *)this + 121) || !*((_QWORD *)this + 16) )
    return 1;
  return result;
}
