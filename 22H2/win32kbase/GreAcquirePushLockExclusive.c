/*
 * XREFs of GreAcquirePushLockExclusive @ 0x1C016A520
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquirePushLockExclusive(__int64 a1)
{
  return ExAcquirePushLockExclusiveEx(a1, 0LL);
}
