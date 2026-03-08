/*
 * XREFs of PopFanUpdateCsState @ 0x14099463C
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140864610 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x140994200 (PopFanEndCsFanPeriod.c)
 */

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
