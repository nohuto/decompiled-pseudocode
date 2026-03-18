/*
 * XREFs of KxAcquireQueuedSpinLock @ 0x1402A0950
 * Callers:
 *     CcUnmapVacbArray @ 0x14029ECA0 (CcUnmapVacbArray.c)
 *     CcGetVacbMiss @ 0x14029EFF0 (CcGetVacbMiss.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1402A06D0 (ExIsResourceAcquiredSharedLite.c)
 *     IoBoostThreadIoPriority @ 0x14031B140 (IoBoostThreadIoPriority.c)
 *     KeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x1405712B0 (KeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     KeAcquireQueuedSpinLockRaiseToSynch @ 0x140571340 (KeAcquireQueuedSpinLockRaiseToSynch.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140260E00 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x14045FB2E (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall KxAcquireQueuedSpinLock(__int64 a1, volatile __int64 *a2)
{
  signed __int64 *v2; // rdx
  __int64 result; // rax

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiAcquireQueuedSpinLockInstrumented(a1, a2);
  v2 = (signed __int64 *)_InterlockedExchange64(a2, a1);
  if ( v2 )
    return KxWaitForLockOwnerShip(a1, v2);
  return result;
}
