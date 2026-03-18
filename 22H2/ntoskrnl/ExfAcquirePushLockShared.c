/*
 * XREFs of ExfAcquirePushLockShared @ 0x1402FD020
 * Callers:
 *     ExpCovQueryInformation @ 0x140A0685C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402FD040 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, 0LL, a1);
}
