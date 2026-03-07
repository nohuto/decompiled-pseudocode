void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C3C5C5 )
    {
      if ( byte_140C3C5C4 )
        PopFanEndCsFanPeriod();
      qword_140C3C5D8 = 0LL;
      byte_140C3C5C5 = 0;
    }
  }
  else if ( !byte_140C3C5C5 )
  {
    byte_140C3C5C5 = 1;
    qword_140C3C5D8 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
