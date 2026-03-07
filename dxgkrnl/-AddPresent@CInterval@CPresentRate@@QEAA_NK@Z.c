char __fastcall CPresentRate::CInterval::AddPresent(CPresentRate::CInterval *this, int a2)
{
  if ( !*(_DWORD *)this )
  {
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 1) = 1;
    return 1;
  }
  if ( (unsigned int)(a2 - *(_DWORD *)this) <= 0x1F4 )
  {
    ++*((_DWORD *)this + 1);
    return 1;
  }
  return 0;
}
