/*
 * XREFs of PopFanUpdateRunningState @ 0x1407C1028
 * Callers:
 *     PopFanWorker @ 0x1407C0930 (PopFanWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140345294 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14034AAE4 (PopAcquireRwLockExclusive.c)
 *     PopFanEndCsFanPeriod @ 0x1408F1710 (PopFanEndCsFanPeriod.c)
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
    if ( !byte_140C23584 )
    {
      byte_140C23584 = 1;
      qword_140C23588 = MEMORY[0xFFFFF78000000008];
    }
  }
  else if ( byte_140C23584 )
  {
    if ( byte_140C23585 )
      PopFanEndCsFanPeriod();
    qword_140C23588 = 0LL;
    byte_140C23584 = 0;
  }
  PopReleaseRwLock((ULONG_PTR)&PopFanLock);
}
