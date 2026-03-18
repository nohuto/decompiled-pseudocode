/*
 * XREFs of PopFanUpdateRunningState @ 0x140997768
 * Callers:
 *     PopFanWorker @ 0x140802170 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1409972B0 (PopFanEndCsFanPeriod.c)
 */

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
    if ( !byte_140C3C9C4 )
    {
      byte_140C3C9C4 = 1;
      qword_140C3C9D0 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C3C9C4 )
  {
    if ( byte_140C3C9C5 )
      PopFanEndCsFanPeriod();
    qword_140C3C9D0 = 0LL;
    byte_140C3C9C4 = 0;
  }
  PopReleaseRwLock(&PopFanLock);
}
