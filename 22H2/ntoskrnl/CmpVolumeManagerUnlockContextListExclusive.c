/*
 * XREFs of CmpVolumeManagerUnlockContextListExclusive @ 0x1407D4628
 * Callers:
 *     CmpVolumeManagerGetContextForFile @ 0x140721364 (CmpVolumeManagerGetContextForFile.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 */

char __fastcall CmpVolumeManagerUnlockContextListExclusive(volatile signed __int64 *BugCheckParameter2)
{
  char v2; // al

  v2 = _InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
