/*
 * XREFs of KiPriQueueThreadPriorityChanged @ 0x1402F76C0
 * Callers:
 *     KeSetActualBasePriorityThread @ 0x14022FF20 (KeSetActualBasePriorityThread.c)
 *     KeSetBasePriorityThread @ 0x1402586C0 (KeSetBasePriorityThread.c)
 *     KeSetPriorityAndQuantumProcess @ 0x14035AEA4 (KeSetPriorityAndQuantumProcess.c)
 * Callees:
 *     KiProcessThreadWaitList @ 0x14024AC40 (KiProcessThreadWaitList.c)
 *     KiReleaseThreadLockSafe @ 0x1402F1590 (KiReleaseThreadLockSafe.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402F781C (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterPriQueue @ 0x1402F79E4 (KiActivateWaiterPriQueue.c)
 */

int __fastcall KiPriQueueThreadPriorityChanged(volatile signed __int32 *a1, __int64 a2)
{
  __int64 v2; // r8
  int v4; // edx
  bool v5; // r9
  __int64 v6; // r10
  int result; // eax
  int v9; // edx
  __int64 v10; // rcx
  bool v11; // bl
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = *(char *)(a2 + 563);
  v4 = *(_DWORD *)(a2 + 540);
  v5 = 0;
  v6 = (unsigned __int8)v4;
  if ( (unsigned __int8)v4 == (_DWORD)v2 )
    return KiReleaseThreadLockSafe(a2);
  v9 = v4 & 0x100;
  if ( !v9 )
  {
    v10 = *(_QWORD *)(a2 + 232);
    _InterlockedDecrement((volatile signed __int32 *)(v10 + 4 * v6 + 536));
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4 * v2 + 536), 1u);
    v5 = (int)v2 < (int)v6;
  }
  *(_DWORD *)(a2 + 540) = v9 | (unsigned __int8)v2;
  if ( !v5 )
    return KiReleaseThreadLockSafe(a2);
  v11 = !_interlockedbittestandset(a1, 7u);
  KiReleaseThreadLockSafe(a2);
  if ( v11 )
    result = KiActivateWaiterPriQueue(a1);
  else
    result = KiActivateWaiterQueueWithNoLocks(a2, a1, 0LL);
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    return KiProcessThreadWaitList((__int64)CurrentPrcb, 1u, 0, 0);
  return result;
}
