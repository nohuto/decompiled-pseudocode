/*
 * XREFs of ExfAcquirePushLockShared @ 0x140273520
 * Callers:
 *     ExpCovQueryInformation @ 0x14095782C (ExpCovQueryInformation.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140273540 (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExfAcquirePushLockShared(__int64 a1)
{
  return ExfAcquirePushLockSharedEx(a1, 0LL, a1);
}
