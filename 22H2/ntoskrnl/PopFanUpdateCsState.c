/*
 * XREFs of PopFanUpdateCsState @ 0x1409976EC
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x1408673F0 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1409972B0 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C3C9C5 )
    {
      if ( byte_140C3C9C4 )
        PopFanEndCsFanPeriod();
      qword_140C3C9D8 = 0LL;
      byte_140C3C9C5 = 0;
    }
  }
  else if ( !byte_140C3C9C5 )
  {
    byte_140C3C9C5 = 1;
    qword_140C3C9D8 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock(&PopFanLock);
}
