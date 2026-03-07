void __fastcall PopFanUpdateRunningState(char a1)
{
  int v2; // eax

  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
    v2 = PopFanTracking + 1;
  else
    v2 = PopFanTracking - 1;
  PopFanTracking = v2;
  if ( v2 )
  {
    if ( !byte_140C3C5C4 )
    {
      byte_140C3C5C4 = 1;
      qword_140C3C5D0 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C3C5C4 )
  {
    if ( byte_140C3C5C5 )
      PopFanEndCsFanPeriod();
    qword_140C3C5D0 = 0LL;
    byte_140C3C5C4 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
