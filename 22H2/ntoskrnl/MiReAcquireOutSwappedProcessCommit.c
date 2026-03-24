/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x14052C2A8
 * Callers:
 *     KiInSwapProcesses @ 0x140249EA8 (KiInSwapProcesses.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140205660 (ObfReferenceObjectWithTag.c)
 *     MiChargeCommit @ 0x14021AA90 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x14021AF10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14021CAA0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     KeForceAttachProcess @ 0x14025BAD8 (KeForceAttachProcess.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     KeForceDetachProcess @ 0x140311DD8 (KeForceDetachProcess.c)
 *     KeFreezeProcess @ 0x14031529C (KeFreezeProcess.c)
 *     MiBeginProcessClean @ 0x140350150 (MiBeginProcessClean.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14052B644 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  LONG *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v4; // edi
  LONG *v5; // rbp
  int v6; // r15d
  int v7; // ebx
  LONG *v8; // rbx
  KIRQL v9; // al
  _QWORD *v10; // rax
  LONG *v11; // rbx
  KIRQL v12; // al
  struct _WORK_QUEUE_ITEM *v13; // rbx
  struct _KEVENT *Blink; // rcx

  KeForceAttachProcess((ULONG_PTR)Object, 0LL);
  SharedVm = MiGetSharedVm((__int64)(Object + 832));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = SharedVm;
  if ( dword_140CFB1D0 != 1 )
  {
    if ( (*((_DWORD *)Object + 281) & 8) != 0 )
    {
      v7 = 1;
      v6 = 0;
    }
    else
    {
      v7 = 0;
      v6 = MiChargeCommit(*(_QWORD *)(qword_140C4E648 + 8LL * Object[919]), *((_QWORD *)SharedVm + 1), 1u);
      if ( v6 )
        goto LABEL_15;
    }
    MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 1, v7);
    _InterlockedOr((volatile signed __int32 *)Object + 543, 0x100u);
    v8 = MiGetSharedVm((__int64)(Object + 832));
    v9 = ExAcquireSpinLockExclusive(v8);
    v8[1] = 0;
    *((_BYTE *)Object + 1851) |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 832), v9);
    MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v10 = (_QWORD *)*((_QWORD *)v5 + 4);
    v10[2] = MiReAcquireCommitFailWorker;
    v10[3] = Object;
    *v10 = 0LL;
    goto LABEL_6;
  }
  v6 = 1;
LABEL_15:
  MiLogOutswappedProcessCommitReacquire((__int64)Object, *((_QWORD *)v5 + 1), 0, 0);
LABEL_6:
  v11 = MiGetSharedVm((__int64)(Object + 832));
  v12 = ExAcquireSpinLockExclusive(v11);
  v11[1] = 0;
  if ( (*((_BYTE *)Object + 1851) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1851) = *((_BYTE *)Object + 1851) & 0x9F | 0x20;
  v13 = (struct _WORK_QUEUE_ITEM *)*((_QWORD *)v5 + 4);
  if ( v6 )
  {
    *((_QWORD *)v5 + 1) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)(Object + 832), v12);
  KeForceDetachProcess(0LL, 0);
  Blink = (struct _KEVENT *)v13[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v6 )
  {
    ExFreePoolWithTag(v13, 0);
  }
  else
  {
    ExQueueWorkItem(v13, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v4;
}
