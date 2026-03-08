/*
 * XREFs of PopUpdateWakeSource @ 0x14058C278
 * Callers:
 *     PopRequestCompletion @ 0x1402BB410 (PopRequestCompletion.c)
 *     PoSetSystemWakeDevice @ 0x140581690 (PoSetSystemWakeDevice.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x14033A950 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14033B450 (KeAcquireInStackQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
      v4 = (_QWORD *)qword_140C3E3E8;
      if ( *(PVOID **)qword_140C3E3E8 != &PopWakeSourceWorkList )
        __fastfail(3u);
      *Pool2 = &PopWakeSourceWorkList;
      Pool2[1] = v4;
      *v4 = Pool2;
      qword_140C3E3E8 = (__int64)Pool2;
      Pool2 = 0LL;
    }
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
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
