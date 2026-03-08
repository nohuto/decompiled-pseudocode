/*
 * XREFs of ExfAcquirePushLockShared @ 0x1402413D0
 * Callers:
 *     ExpCovQueryInformation @ 0x140A03B6C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, 0LL, a1);
}
