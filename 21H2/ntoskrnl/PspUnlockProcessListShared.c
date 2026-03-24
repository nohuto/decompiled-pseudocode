/*
 * XREFs of PspUnlockProcessListShared @ 0x1402D6218
 * Callers:
 *     PsGetNextProcess @ 0x1406CE7A0 (PsGetNextProcess.c)
 *     PsChangeQuantumTable @ 0x14078C7B8 (PsChangeQuantumTable.c)
 *     PsGetPreviousProcess @ 0x14090E764 (PsGetPreviousProcess.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402F1470 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PspUnlockProcessListShared(__int64 a1)
{
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
