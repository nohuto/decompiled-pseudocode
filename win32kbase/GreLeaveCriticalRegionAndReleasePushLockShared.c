/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C00AD060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockShared(__int64 a1)
{
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
