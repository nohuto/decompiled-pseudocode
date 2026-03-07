char __fastcall CKeyframeAnimation::IsWaiting(CKeyframeAnimation *this)
{
  char v1; // dl

  v1 = 1;
  if ( (*((_BYTE *)this + 581) & 1) == 0 || *((_DWORD *)this + 123) >= *((_DWORD *)this + 122) )
    return 0;
  return v1;
}
