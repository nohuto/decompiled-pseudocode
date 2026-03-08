/*
 * XREFs of GreLeaveCriticalRegionAndReleasePushLockExclusive @ 0x1C0197410
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreLeaveCriticalRegionAndReleasePushLockExclusive(__int64 a1)
{
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
