/*
 * XREFs of CmUnlockHive @ 0x14074A614
 * Callers:
 *     CmpWaitForLateUnloadWorker @ 0x1402BF844 (CmpWaitForLateUnloadWorker.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1680;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1680), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1680));
  return KeAbPostRelease(v1);
}
