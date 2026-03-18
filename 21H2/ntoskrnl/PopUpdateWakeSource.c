/*
 * XREFs of PopUpdateWakeSource @ 0x1405CFED4
 * Callers:
 *     PopRequestCompletion @ 0x1403A4B90 (PopRequestCompletion.c)
 *     PoSetSystemWakeDevice @ 0x1405C6AF0 (PoSetSystemWakeDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PopUpdateWakeSource(PVOID Object)
{
  unsigned int v2; // edi
  _QWORD *Pool2; // rbx
  _QWORD *v4; // rax
  unsigned __int64 OldIrql; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v9; // eax
  bool v10; // zf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  v2 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 544040269LL);
  if ( Pool2 )
  {
    KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, &LockHandle);
    if ( PopCurrentWakeInfo && (unsigned int)PopWakeSourceWorkState <= 1 )
    {
      ObfReferenceObjectWithTag(Object, 0x67446F50u);
      Pool2[2] = Object;
      v4 = (_QWORD *)qword_140C237A8;
      if ( *(PVOID **)qword_140C237A8 != &PopWakeSourceWorkList )
        __fastfail(3u);
      *Pool2 = &PopWakeSourceWorkList;
      Pool2[1] = v4;
      *v4 = Pool2;
      qword_140C237A8 = (__int64)Pool2;
      Pool2 = 0LL;
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
          v9 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v10 = (v9 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x206D654Du);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v2;
}
