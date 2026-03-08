/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140607750
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x1403586D0 (ExfTryAcquirePushLockSharedEx.c)
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  return ExfTryAcquirePushLockSharedEx(a1, 0);
}
