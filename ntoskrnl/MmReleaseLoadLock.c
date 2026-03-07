char __fastcall MmReleaseLoadLock(__int64 a1)
{
  char result; // al

  if ( dword_140C65560-- == 1 )
  {
    qword_140C65558 |= 1uLL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C65550, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C65550);
    KeAbPostRelease((ULONG_PTR)&qword_140C65550);
    return KeLeaveCriticalRegionThread(a1);
  }
  return result;
}
