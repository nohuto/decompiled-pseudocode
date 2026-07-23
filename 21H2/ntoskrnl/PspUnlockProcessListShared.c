/*
 * XREFs of PspUnlockProcessListShared @ 0x140287568
 * Callers:
 *     PsGetNextProcess @ 0x1406A5A80 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x14078C978 (PsChangeQuantumTable.c)
 *     PsGetPreviousProcess @ 0x14090E8C4 (PsGetPreviousProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
