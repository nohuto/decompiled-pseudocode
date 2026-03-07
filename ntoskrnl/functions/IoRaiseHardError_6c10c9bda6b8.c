void __stdcall IoRaiseHardError(PIRP Irp, PVPB Vpb, PDEVICE_OBJECT RealDeviceObject)
{
  PVPB v4; // r13
  bool v6; // r15
  PETHREAD Thread; // r14
  int SessionId; // ebx
  int ThreadActiveConsoleId; // eax
  int v10; // ecx
  char v11; // cl
  __int64 Pool2; // rbx
  bool v13; // bl
  struct _EX_RUNDOWN_REF *p_WaitStatus; // r15
  _DWORD *Teb; // r13
  _KPROCESS *Process; // rbx
  char v17; // r14
  int v18; // eax
  __int16 v19; // cx
  struct _WORK_QUEUE_ITEM *v21; // rax
  $115DCDF994C6370D29323EAB0E0C9502 v22; // [rsp+58h] [rbp-60h] BYREF

  v4 = Vpb;
  v6 = 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (*(_DWORD *)(&Thread[1].SwapListEntry + 1) & 0x10) != 0 )
    goto LABEL_32;
  SessionId = MmGetSessionIdEx((__int64)Thread->Process);
  ThreadActiveConsoleId = IopGetThreadActiveConsoleId(Thread);
  v10 = 0;
  if ( SessionId != -1 )
    v10 = SessionId;
  if ( v10 != ThreadActiveConsoleId )
  {
LABEL_32:
    if ( (Irp->Flags & 0x40) == 0 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( (Irp->Flags & 0x3FF1FFFF) == 0x43 || Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 18 )
  {
    v11 = 1;
  }
  else
  {
    v11 = 0;
    v6 = KeGetCurrentThread()->WaitBlock[3].SpareLong != 0;
  }
  if ( v11 )
  {
    if ( !v6 )
      goto LABEL_30;
  }
  else if ( !v6 )
  {
    Pool2 = ExAllocatePool2(64LL, 88LL, 1129333067LL);
    if ( Pool2 )
    {
      KeInitializeApc(
        Pool2,
        (__int64)Thread,
        Irp->ApcEnvironment,
        (__int64)SC_ENV::Free,
        (__int64)IopAbortRequest,
        (__int64)IopRaiseHardError,
        0,
        (__int64)Irp);
      KeInsertQueueApc(Pool2, (__int64)v4, RealDeviceObject, 0);
      return;
    }
    goto LABEL_34;
  }
  if ( (Thread->MiscFlags & 0x400) == 0 )
  {
    v13 = 1;
    p_WaitStatus = (struct _EX_RUNDOWN_REF *)&Thread[1].WaitStatus;
    if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&Thread[1].WaitStatus) )
    {
      memset(&v22, 0, sizeof(v22));
      Teb = Thread->Teb;
      Process = Thread->Process;
      if ( Process == KeGetCurrentThread()->ApcState.Process )
      {
        v17 = 0;
      }
      else
      {
        v17 = 1;
        KiStackAttachProcess(Process, 0, (__int64)&v22);
      }
      v18 = Teb[1452];
      if ( Process[1].Affinity.StaticBitmap[30] )
      {
        v19 = WORD2(Process[2].Affinity.StaticBitmap[20]);
        if ( v19 == 332 || v19 == 452 )
          v18 |= Teb[3018];
      }
      v13 = (v18 & 0x10) != 0;
      if ( v17 )
        KiUnstackDetachProcess(&v22);
      ExReleaseRundownProtection_0(p_WaitStatus);
      v4 = Vpb;
    }
    if ( v13 )
    {
LABEL_33:
      Irp->IoStatus.Information = 0LL;
      goto LABEL_34;
    }
  }
LABEL_30:
  v21 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 56LL, 1917153097LL);
  if ( v21 )
  {
    v21->WorkerRoutine = (void (__fastcall *)(void *))IopStartApcHardError;
    v21->Parameter = v21;
    v21->List.Flink = 0LL;
    v21[1].List.Flink = (struct _LIST_ENTRY *)Irp;
    v21[1].List.Blink = (struct _LIST_ENTRY *)v4;
    v21[1].WorkerRoutine = (void (__fastcall *)(void *))RealDeviceObject;
    ExQueueWorkItem(v21, CriticalWorkQueue);
    return;
  }
LABEL_34:
  IofCompleteRequest(Irp, 1);
}
