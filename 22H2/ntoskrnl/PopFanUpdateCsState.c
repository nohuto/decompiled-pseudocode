/*
 * XREFs of PopFanUpdateCsState @ 0x1408F17C0
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140781970 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408F1710 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1)
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopFanLock);
  if ( a1 )
  {
    if ( byte_140C23585 )
    {
      if ( byte_140C23584 )
        PopFanEndCsFanPeriod();
      qword_140C23590 = 0LL;
      byte_140C23585 = 0;
    }
  }
  else if ( !byte_140C23585 )
  {
    byte_140C23585 = 1;
    qword_140C23590 = MEMORY[0xFFFFF78000000008];
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
