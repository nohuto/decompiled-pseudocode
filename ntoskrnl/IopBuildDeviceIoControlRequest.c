/*
 * XREFs of IopBuildDeviceIoControlRequest @ 0x14024FAC0
 * Callers:
 *     IoBuildDeviceIoControlRequest @ 0x14024FE00 (IoBuildDeviceIoControlRequest.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403BE180 (FsRtlGetVirtualDiskNestingLevel.c)
 *     IopStoreBootDriveLetter @ 0x140B54800 (IopStoreBootDriveLetter.c)
 *     IopCreateArcNamesCd @ 0x140B54C8C (IopCreateArcNamesCd.c)
 *     IopGetBootDiskInformation @ 0x140B907EC (IopGetBootDiskInformation.c)
 *     SbpAddTransportToInstance @ 0x140B9874C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x140B98940 (SbpStartLanman.c)
 * Callees:
 *     IopAllocateMdl @ 0x140241F90 (IopAllocateMdl.c)
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     IopProbeAndLockPages @ 0x14036D5D4 (IopProbeAndLockPages.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

IRP *__fastcall IopBuildDeviceIoControlRequest(
        int a1,
        __int64 a2,
        const void *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        char a7,
        struct _KEVENT *a8,
        struct _IO_STATUS_BLOCK *a9)
{
  size_t v9; // r14
  int v11; // r13d
  __int64 Irp; // rax
  __int64 v14; // r9
  IRP *v15; // rbx
  __int64 v16; // rdi
  int v17; // esi
  __int64 v18; // rdx
  struct _IRP *v19; // rax
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *p_SystemCallNumber; // rsi
  LIST_ENTRY *p_ThreadListEntry; // rdi
  unsigned __int8 CurrentIrql; // r15
  volatile signed __int64 *p_Thread; // r14
  struct _LIST_ENTRY *Flink; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v28; // r10
  struct _IRP *Pool2; // rax
  int v30; // eax
  int v31; // r14d
  __int64 Mdl; // rax
  int v33; // edx
  unsigned __int8 v34; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  bool v38; // zf

  v9 = a4;
  v11 = a2;
  Irp = IopAllocateIrpExReturn(a2, *(unsigned __int8 *)(a2 + 76), 0LL);
  v15 = (IRP *)Irp;
  if ( !Irp )
    return 0LL;
  v16 = *(_QWORD *)(Irp + 184);
  *(_BYTE *)(v16 - 72) = (a7 != 0) + 14;
  *(_DWORD *)(v16 - 64) = a6;
  *(_DWORD *)(v16 - 56) = v9;
  *(_DWORD *)(v16 - 48) = a1;
  v17 = a1 & 3;
  if ( v17 )
  {
    if ( v17 != 1 && v17 != 2 )
    {
      *(_QWORD *)(Irp + 112) = a5;
      *(_QWORD *)(v16 - 40) = a3;
      goto LABEL_12;
    }
    if ( a3 )
    {
      Pool2 = (struct _IRP *)ExAllocatePool2(74LL, v9, 1112764233LL);
      v15->AssociatedIrp.MasterIrp = Pool2;
      if ( !Pool2 )
        goto LABEL_37;
      memmove(Pool2, a3, v9);
      v30 = 48;
      v31 = 0;
    }
    else
    {
      v31 = 0;
      v30 = 0;
    }
    v15->Flags = v30;
    if ( !a5 )
      goto LABEL_12;
    Mdl = IopAllocateMdl(a5, a6, 0, v14, 0LL, 0);
    v15->MdlAddress = (PMDL)Mdl;
    if ( Mdl )
    {
      if ( v17 != 1 )
        v31 = 1;
      IopProbeAndLockPages(Mdl, v33, v31, v11, *(unsigned __int8 *)(v16 - 72));
      goto LABEL_12;
    }
    if ( a3 )
      ExFreePoolWithTag(v15->AssociatedIrp.MasterIrp, 0);
LABEL_37:
    IoFreeIrp(v15);
    return 0LL;
  }
  if ( (_DWORD)v9 || a6 )
  {
    v18 = (unsigned int)v9;
    if ( (unsigned int)v9 <= a6 )
      v18 = a6;
    v19 = (struct _IRP *)ExAllocatePool2(72LL, v18, 1112764233LL);
    v15->AssociatedIrp.MasterIrp = v19;
    if ( v19 )
    {
      if ( a3 )
        memmove(v19, a3, v9);
      v15->Flags = 48;
      v15->UserBuffer = (PVOID)a5;
      if ( a5 )
        v15->Flags = 112;
      goto LABEL_12;
    }
    goto LABEL_37;
  }
  *(_DWORD *)(Irp + 16) = 0;
  *(_QWORD *)(Irp + 112) = 0LL;
LABEL_12:
  v15->UserIosb = a9;
  v15->UserEvent = a8;
  CurrentThread = KeGetCurrentThread();
  v15->Tail.Overlay.Thread = CurrentThread;
  p_SystemCallNumber = (struct _LIST_ENTRY *)&CurrentThread[1].SystemCallNumber;
  p_ThreadListEntry = &v15->ThreadListEntry;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v28) = 4;
    else
      v28 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v28;
  }
  p_Thread = (volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].Thread;
  KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlock[0].Thread);
  Flink = p_SystemCallNumber->Flink;
  if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
    __fastfail(3u);
  p_ThreadListEntry->Flink = Flink;
  v15->ThreadListEntry.Blink = p_SystemCallNumber;
  Flink->Blink = p_ThreadListEntry;
  p_SystemCallNumber->Flink = p_ThreadListEntry;
  KxReleaseSpinLock(p_Thread);
  if ( KiIrqlFlags )
  {
    v34 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v36 = CurrentPrcb->SchedulerAssist;
      v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v38 = (v37 & v36[5]) == 0;
      v36[5] &= v37;
      if ( v38 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(CurrentIrql);
  v15->Flags = v15->Flags & 0xFFF1FFFF | (((unsigned int)PsGetIoPriorityThread(v15->Tail.Overlay.Thread) + 1) << 17);
  return v15;
}
