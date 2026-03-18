/*
 * XREFs of CmUnlockHive @ 0x140748488
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402EC614 (CmpWaitForLateUnloadWorker.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1680;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1680));
  return KeAbPostRelease(v1);
}
