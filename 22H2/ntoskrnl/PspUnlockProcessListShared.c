/*
 * XREFs of PspUnlockProcessListShared @ 0x140264068
 * Callers:
 *     PsGetNextProcess @ 0x14062BFA0 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x14078C6B8 (PsChangeQuantumTable.c)
 *     PsGetPreviousProcess @ 0x14090E7B4 (PsGetPreviousProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140271AF0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
