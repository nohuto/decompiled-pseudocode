/*
 * XREFs of GreAcquirePushLockShared @ 0x1C007F4D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquirePushLockShared(__int64 a1)
{
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
