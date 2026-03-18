/*
 * XREFs of PopGetCurrentWakeInfos @ 0x1403971A8
 * Callers:
 *     PopGetWakeSource @ 0x140806788 (PopGetWakeSource.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopGetCurrentWakeInfos(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebx
  __int64 Pool2; // rax
  __int64 v5; // rcx
  __int64 i; // rdx
  unsigned __int64 OldIrql; // rsi
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // edx
  bool v13; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
  v3 = PopWakeInfoCount;
  if ( PopWakeInfoCount )
  {
    Pool2 = ExAllocatePool2(64LL, 8LL * (unsigned int)PopWakeInfoCount, 544040269LL);
    v2 = Pool2;
    if ( Pool2 )
    {
      v5 = PopWakeInfoList;
      for ( i = 0LL; (__int64 *)v5 != &PopWakeInfoList && (unsigned int)i < v3; i = (unsigned int)(i + 1) )
      {
        *(_QWORD *)(Pool2 + 8 * i) = v5;
        _InterlockedIncrement((volatile signed __int32 *)(v5 + 16));
        v5 = *(_QWORD *)v5;
      }
    }
    else
    {
      v3 = 0;
    }
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  OldIrql = LockHandle.OldIrql;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(OldIrql);
  result = v3;
  *a1 = v2;
  return result;
}
