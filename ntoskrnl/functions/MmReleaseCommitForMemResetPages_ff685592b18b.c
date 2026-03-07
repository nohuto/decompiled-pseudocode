__int64 __fastcall MmReleaseCommitForMemResetPages(volatile signed __int32 *BugCheckParameter1, int a2)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  _QWORD *SharedVm; // r13
  int v7; // r15d
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  volatile LONG *v14; // rbx
  KIRQL v15; // cl
  __int64 v16; // r8
  __int64 Object; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v19[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v21[3]; // [rsp+68h] [rbp-9h] BYREF

  Object = 393216LL;
  v19[1] = v19;
  v3 = (__int64)(BugCheckParameter1 + 416);
  v19[0] = v19;
  memset(v21, 0, sizeof(v21));
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm((__int64)(BugCheckParameter1 + 416));
  if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C69440, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v3);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v7 )
    {
      KeForceAttachProcess((ULONG_PTR)BugCheckParameter1, (__int64)v21);
      v14 = (volatile LONG *)MiGetSharedVm(v3);
      v15 = ExAcquireSpinLockExclusive(v14);
      *((_DWORD *)v14 + 1) = 0;
      if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
      {
        v16 = SharedVm[4];
        if ( !*(_QWORD *)(v16 + 40) )
        {
          *(_QWORD *)(v16 + 40) = &Object;
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(v16 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v3, v15);
          KeRetryOutswapProcess(BugCheckParameter1);
          KeForceDetachProcess(v21, 0);
          MiAttachThreadDone(v3);
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          return v5;
        }
        v5 = -1073740682;
      }
      else
      {
        v5 = -1073741431;
      }
      if ( v15 != 17 )
        MiUnlockWorkingSetExclusive(v3, v15);
      KeForceDetachProcess(v21, 0);
      MiAttachThreadDone(v3);
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
