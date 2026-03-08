/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x140336C10
 * Callers:
 *     CcUnmapVacbArray @ 0x14021B910 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x140335850 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     ExIsResourceAcquiredSharedLite @ 0x140336990 (ExIsResourceAcquiredSharedLite.c)
 *     IoBoostThreadIoPriority @ 0x140356FD0 (IoBoostThreadIoPriority.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x14056EC40 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x14056ECD0 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  if ( _InterlockedExchange64(a2, a1) )
    return KxWaitForLockOwnerShip(a1);
  return result;
}
