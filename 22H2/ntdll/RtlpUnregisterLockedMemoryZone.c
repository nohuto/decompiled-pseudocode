/*
 * XREFs of RtlpUnregisterLockedMemoryZone @ 0x18005E494
 * Callers:
 *     RtlUnlockMemoryZone @ 0x18005E400 (RtlUnlockMemoryZone.c)
 *     RtlDestroyMemoryZone @ 0x180085550 (RtlDestroyMemoryZone.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlUnlockModuleSection @ 0x18005EBD0 (RtlUnlockModuleSection.c)
 */

signed __int64 __fastcall RtlpUnregisterLockedMemoryZone(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  RtlAcquireSRWLockExclusive((unsigned __int64)&RtlpMemoryZoneLock, a2, a3, a4);
  if ( !--RtlpLockedMemoryZoneCount )
    RtlUnlockModuleSection(RtlAllocateMemoryZone);
  return RtlReleaseSRWLockExclusive(&RtlpMemoryZoneLock);
}
