/*
 * XREFs of KeReleaseInStackQueuedSpinLock @ 0x14025C890
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x140215670 (CcNotifyOfMappedWrite.c)
 *     CcMapAndCopyInToCache @ 0x14021CD00 (CcMapAndCopyInToCache.c)
 *     CcSetFileSizesEx @ 0x14029F9B0 (CcSetFileSizesEx.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     CcWaitForCurrentLazyWriterActivityOnNode @ 0x1403CEA10 (CcWaitForCurrentLazyWriterActivityOnNode.c)
 *     PnprMarkOrMirrorPages @ 0x140A99F48 (PnprMarkOrMirrorPages.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x140A9CCE4 (KiAddProcessorToGroupSchedulingDatabase.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 */

void __stdcall KeReleaseInStackQueuedSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int64 *volatile Lock; // rcx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v8; // eax
  bool v9; // zf
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(LockHandle, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(LockHandle);
  Next = LockHandle->LockQueue.Next;
  if ( !LockHandle->LockQueue.Next )
  {
    if ( LockHandle == (PKLOCK_QUEUE_HANDLE)_InterlockedCompareExchange64(
                                              (volatile signed __int64 *)LockHandle->LockQueue.Lock,
                                              0LL,
                                              (signed __int64)LockHandle) )
      goto LABEL_4;
    Next = (_KSPIN_LOCK_QUEUE *volatile)KxWaitForLockChainValid(LockHandle);
  }
  LockHandle->LockQueue.Next = 0LL;
  Lock = LockHandle->LockQueue.Lock;
  if ( (((unsigned __int8)Lock ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)&Next->Lock, (__int64)Lock)) & 4) != 0 )
  {
    _InterlockedOr(v10, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)&Next->Lock >> 5) & 0x7F], 0LL));
  }
LABEL_4:
  OldIrql = LockHandle->OldIrql;
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)OldIrql <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v8 = ~(unsigned __int16)(-1LL << ((unsigned __int8)OldIrql + 1));
      v9 = (v8 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v8;
      if ( v9 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(OldIrql);
}
