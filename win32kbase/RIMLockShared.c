/*
 * XREFs of RIMLockShared @ 0x1C00AADF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMLockShared(__int64 a1)
{
  KeEnterCriticalRegion();
  return ExAcquirePushLockSharedEx(a1, 0LL);
}
