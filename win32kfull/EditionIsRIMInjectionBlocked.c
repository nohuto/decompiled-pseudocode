__int64 __fastcall EditionIsRIMInjectionBlocked(__int64 a1)
{
  unsigned int v1; // ebx

  if ( (*(_DWORD *)(a1 + 184) & 0x4000) == 0 )
  {
    v1 = 0;
    if ( grpdeskRitInput )
    {
      if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
        return 1LL;
      if ( PsGetCurrentProcess() != gpepCSRSS )
      {
        LOBYTE(v1) = RtlAreAllAccessesGranted(*(_DWORD *)(gptiCurrent + 896LL), 0x20u) == 0;
        return v1;
      }
    }
  }
  return 0LL;
}
