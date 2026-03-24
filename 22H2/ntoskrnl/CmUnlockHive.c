/*
 * XREFs of CmUnlockHive @ 0x1406DC84C
 * Callers:
 *     NtNotifyChangeMultipleKeys @ 0x1406DC020 (NtNotifyChangeMultipleKeys.c)
 *     CmpFlushNotify @ 0x1406E3C7C (CmpFlushNotify.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 */

char __fastcall CmUnlockHive(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 1672;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1672), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1672));
  return KeAbPostRelease(v1);
}
