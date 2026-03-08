/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x140616AC8
 * Callers:
 *     KiInSwapProcesses @ 0x1402C0180 (KiInSwapProcesses.c)
 * Callees:
 *     KeForceDetachProcess @ 0x14020CC48 (KeForceDetachProcess.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x140289BA0 (MiUnlockWorkingSetExclusive.c)
 *     MiBeginProcessClean @ 0x1402DB7FC (MiBeginProcessClean.c)
 *     KeForceAttachProcess @ 0x1402E6610 (KeForceAttachProcess.c)
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x140330CD4 (MiGetSharedVm.c)
 *     ObfReferenceObjectWithTag @ 0x14033E0E0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x14033F3D0 (ExQueueWorkItem.c)
 *     KeFreezeProcess @ 0x140355C58 (KeFreezeProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140615DEC (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(char *Object)
{
  char *v2; // rbp
  _QWORD *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // edi
  _QWORD *v6; // r14
  int v7; // r15d
  int v8; // ebx
  __int64 v9; // rdx
  volatile LONG *v10; // rbx
  KIRQL v11; // al
  _QWORD *v12; // rax
  volatile LONG *v13; // rbx
  KIRQL v14; // al
  struct _WORK_QUEUE_ITEM *v15; // rbx
  struct _KEVENT *Blink; // rcx

  KeForceAttachProcess((ULONG_PTR)Object, 0LL);
  v2 = Object + 1664;
  SharedVm = MiGetSharedVm((__int64)(Object + 1664));
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = SharedVm;
  if ( dword_140D1D220 == 1 )
  {
    v7 = 1;
    v8 = 0;
  }
  else if ( (*((_DWORD *)Object + 281) & 8) != 0 )
  {
    v8 = 1;
    v7 = 0;
  }
  else
  {
    v8 = 0;
    v7 = MiChargeCommit(*(_QWORD *)(qword_140C67048 + 8LL * *((unsigned __int16 *)Object + 919)), SharedVm[1], 1uLL);
  }
  v9 = v6[1];
  if ( v7 )
  {
    MiLogOutswappedProcessCommitReacquire((__int64)Object, v9, 0, 0);
  }
  else
  {
    MiLogOutswappedProcessCommitReacquire((__int64)Object, v9, 1, v8);
    _InterlockedOr((volatile signed __int32 *)Object + 543, 0x100u);
    v10 = (volatile LONG *)MiGetSharedVm((__int64)(Object + 1664));
    v11 = ExAcquireSpinLockExclusive(v10);
    *((_DWORD *)v10 + 1) = 0;
    Object[1851] |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 1664), v11);
    MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v12 = (_QWORD *)v6[4];
    v12[2] = MiReAcquireCommitFailWorker;
    v12[3] = Object;
    *v12 = 0LL;
  }
  v13 = (volatile LONG *)MiGetSharedVm((__int64)v2);
  v14 = ExAcquireSpinLockExclusive(v13);
  *((_DWORD *)v13 + 1) = 0;
  if ( (Object[1851] & 0x60) == 0x40 )
    Object[1851] = Object[1851] & 0x9F | 0x20;
  v15 = (struct _WORK_QUEUE_ITEM *)v6[4];
  if ( v7 )
  {
    v6[1] = 0LL;
    v6[4] = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)v2, v14);
  KeForceDetachProcess(0LL, 0);
  Blink = (struct _KEVENT *)v15[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v7 )
  {
    ExFreePoolWithTag(v15, 0);
  }
  else
  {
    ExQueueWorkItem(v15, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v5;
}
