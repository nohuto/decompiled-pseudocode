/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18005E494
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005E400 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180085550 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005EBD0 (RtlUnlockModuleSection.c)
 */

void RtlpUnregisterLockedMemoryZone()
{
  RtlAcquireSRWLockExclusive(&RtlpMemoryZoneLock);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
