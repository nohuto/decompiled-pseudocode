/*
 * XREFs of ExfTryAcquirePushLockShared @ 0x140609BA0
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryAcquirePushLockSharedEx @ 0x14032F93C (ExfTryAcquirePushLockSharedEx.c)
 */

char __fastcall ExfTryAcquirePushLockShared(signed __int64 *a1)
{
  return ExfTryAcquirePushLockSharedEx(a1, 0);
}
