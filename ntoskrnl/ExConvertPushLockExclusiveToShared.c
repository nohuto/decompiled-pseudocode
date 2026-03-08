/*
 * XREFs of ExConvertPushLockExclusiveToShared @ 0x14040CBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ExConvertPushLockExclusiveToShared(volatile signed __int64 *a1)
{
  return _InterlockedCompareExchange64(a1, 17LL, 1LL);
}
