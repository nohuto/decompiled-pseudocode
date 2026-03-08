/*
 * XREFs of IopfCompleteRequest @ 0x14027B2C0
 * Callers:
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     IopPerfCompleteRequest @ 0x14045735E (IopPerfCompleteRequest.c)
 *     IovCompleteRequest @ 0x140ABE48C (IovCompleteRequest.c)
 * Callees:
 *     KeInitializeApc @ 0x140237E20 (KeInitializeApc.c)
 *     KeReleaseQueuedSpinLock @ 0x14023FDE0 (KeReleaseQueuedSpinLock.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1402409DC (IopVerifyDeviceObjectOnStack.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14024F7D0 (KxWaitForSpinLockAndAcquire.c)
 *     KxAcquireSpinLock @ 0x14024FE60 (KxAcquireSpinLock.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x14025CA50 (KiExitDispatcher.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     IofCompleteRequest @ 0x14027B290 (IofCompleteRequest.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     KeInsertQueueApc @ 0x14027DBF0 (KeInsertQueueApc.c)
 *     KxWaitForLockChainValid @ 0x140291730 (KxWaitForLockChainValid.c)
 *     KiWakeOtherQueueWaiters @ 0x140293BF4 (KiWakeOtherQueueWaiters.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     IopDropIrp @ 0x140293E48 (IopDropIrp.c)
 *     PoDeviceReleaseIrp @ 0x1402B9A0C (PoDeviceReleaseIrp.c)
 *     PoDeviceAcquireIrp @ 0x1402B9AA8 (PoDeviceAcquireIrp.c)
 *     IopFreeCopyObjectsFromIrp @ 0x1402F98FC (IopFreeCopyObjectsFromIrp.c)
 *     IoFreeIrp @ 0x14030EC00 (IoFreeIrp.c)
 *     IopFreeIrp @ 0x14030EC30 (IopFreeIrp.c)
 *     IopDequeueIrpFromThread @ 0x14030F160 (IopDequeueIrpFromThread.c)
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     IoFreeMdl @ 0x1403147E0 (IoFreeMdl.c)
 *     KeAcquireQueuedSpinLock @ 0x140336900 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14033B510 (KxWaitForLockOwnerShip.c)
 *     KiWakeQueueWaiter @ 0x140340700 (KiWakeQueueWaiter.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140457B8E (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140457E30 (KiAcquireSpinLockInstrumented.c)
 *     IopDoesCompletionNeedsApc @ 0x140552F8C (IopDoesCompletionNeedsApc.c)
 *     IopIoRingCompleteIrp @ 0x1405570DC (IopIoRingCompleteIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     KeIsThreadRunning @ 0x14056C7FC (KeIsThreadRunning.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14056EF78 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056F278 (KiReleaseSpinLockInstrumented.c)
 *     KiHaltOnAddressWakeEntireList @ 0x14057DAC8 (KiHaltOnAddressWakeEntireList.c)
 *     EtwTraceEnqueueWork @ 0x1405FA8FC (EtwTraceEnqueueWork.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 *     IovFreeIrpPrivate @ 0x140ABE6D0 (IovFreeIrpPrivate.c)
 */

void __fastcall IopfCompleteRequest(IRP *BugCheckParameter1, char a2)
{
  PIRP v2; // r14
  CHAR StackCount; // cl
  unsigned __int8 v4; // r12
  char CurrentLocation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char v7; // r15
  int Flink; // r13d
  PIRP v9; // rdi
  UCHAR *p_Control; // rsi
  PIRP v11; // rcx
  struct _LIST_ENTRY *Status; // rax
  char v13; // al
  unsigned __int8 v14; // r12
  PIRP v15; // rcx
  PDEVICE_OBJECT DeviceObject; // rdi
  PFILE_OBJECT OriginalFileObject; // rcx
  PVPB Vpb; // rsi
  PVPB v19; // rsi
  __int64 v20; // rsi
  __int64 v21; // r15
  int v22; // eax
  PCHAR v23; // rcx
  __int64 (__fastcall *v24)(); // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // r15d
  ULONG v28; // esi
  PMDL v29; // rsi
  ULONG v30; // eax
  PFILE_OBJECT v31; // r14
  PETHREAD v32; // rsi
  volatile signed __int32 *v33; // rdi
  unsigned __int8 v34; // r12
  _DWORD *v35; // r9
  __int64 v36; // rdx
  PIRP v37; // rax
  CCHAR ApcEnvironment; // cl
  CHAR *v39; // r8
  PFILE_OBJECT v40; // rdx
  ULONG_PTR v41; // rax
  _QWORD *p_Port; // rax
  __int64 v43; // rsi
  unsigned __int8 v44; // dl
  __int64 v45; // r10
  unsigned int v46; // r12d
  struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *p_ListEntry; // r13
  _QWORD *v48; // r15
  __int64 v49; // rcx
  struct _KPRCB *v50; // r14
  _KTHREAD *CurrentThread; // r9
  char v52; // si
  __int64 v53; // rax
  unsigned __int64 v54; // rbx
  IRP *v55; // rcx
  int v56; // esi
  _QWORD *FileObjectExtension; // rax
  __int64 i; // rax
  _DWORD *v59; // r11
  __int64 v60; // r15
  _DWORD *v61; // r9
  unsigned __int8 v62; // bl
  int v63; // edx
  struct _LIST_ENTRY *v64; // rcx
  PIRP v65; // r13
  unsigned __int8 CurrentIrql; // r15
  PETHREAD Thread; // rdi
  _DWORD *SchedulerAssist; // r9
  __int64 v69; // rdx
  __int64 p_Thread; // rbx
  struct _LIST_ENTRY *v71; // rdx
  LIST_ENTRY *p_ThreadListEntry; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 *v74; // r15
  char v75; // al
  unsigned __int8 v76; // cl
  struct _MDL *MdlAddress; // rcx
  IRP *MasterIrp; // rsi
  struct _MDL *Next; // rbx
  unsigned __int64 Information; // rax
  unsigned __int64 v81; // rcx
  __int64 v82; // rax
  KIRQL v83; // di
  __int64 v84; // rdx
  PETHREAD v85; // r10
  ULONG Flags; // eax
  unsigned __int8 v87; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v89; // r8
  int v90; // eax
  bool v91; // zf
  unsigned __int8 IsThreadRunning; // al
  __int64 v93; // r9
  unsigned __int8 v94; // cl
  struct _KPRCB *v95; // r9
  _DWORD *v96; // r8
  int v97; // eax
  unsigned __int8 v98; // cl
  struct _KPRCB *v99; // r10
  _DWORD *v100; // r9
  int v101; // eax
  unsigned __int8 v102; // cl
  struct _KPRCB *v103; // r9
  _DWORD *v104; // r8
  int v105; // eax
  __int64 *v106; // r8
  __int64 **v107; // rax
  signed __int32 v108[6]; // [rsp+8h] [rbp-79h] BYREF
  __int64 v109; // [rsp+48h] [rbp-39h]
  __int64 v110; // [rsp+50h] [rbp-31h] BYREF
  __int64 v111; // [rsp+58h] [rbp-29h]
  __int64 v112; // [rsp+60h] [rbp-21h] BYREF
  __int64 v113; // [rsp+68h] [rbp-19h] BYREF
  __int64 v114; // [rsp+70h] [rbp-11h] BYREF
  __int128 v115; // [rsp+78h] [rbp-9h] BYREF
  __int64 v116; // [rsp+88h] [rbp+7h]
  void *retaddr; // [rsp+E0h] [rbp+5Fh]
  PIRP Irp; // [rsp+E8h] [rbp+67h] BYREF
  char v119; // [rsp+F0h] [rbp+6Fh]
  PFILE_OBJECT v120; // [rsp+F8h] [rbp+77h] BYREF
  CHAR *AuxiliaryBuffer; // [rsp+100h] [rbp+7Fh] BYREF

  v119 = a2;
  Irp = BugCheckParameter1;
  v2 = BugCheckParameter1;
  StackCount = BugCheckParameter1->StackCount;
  v4 = a2;
  v120 = 0LL;
  AuxiliaryBuffer = 0LL;
  CurrentLocation = v2->CurrentLocation;
  if ( CurrentLocation > (char)(StackCount + 1) || v2->Type != 6 )
    KeBugCheckEx(0x44u, (ULONG_PTR)v2, 0x1347uLL, 0LL, 0LL);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  if ( CurrentLocation <= StackCount && CurrentStackLocation->MajorFunction == 22 )
  {
    v7 = 1;
    PoDeviceReleaseIrp(v2, CurrentStackLocation->MinorFunction, CurrentStackLocation->DeviceObject);
    v2 = Irp;
  }
  else
  {
    v7 = 0;
  }
  if ( (v2[1].Size & 0x200) != 0 )
    Flink = (int)v2[1].ThreadListEntry.Flink;
  else
    Flink = 0;
  ++v2->CurrentLocation;
  ++Irp->Tail.Overlay.CurrentStackLocation;
  v9 = Irp;
  if ( Irp->CurrentLocation <= (char)(Irp->StackCount + 1) )
  {
    p_Control = &CurrentStackLocation->Control;
    while ( 1 )
    {
      v9->PendingReturned = *p_Control & 1;
      v11 = Irp;
      Status = (struct _LIST_ENTRY *)Irp->IoStatus.Status;
      if ( (int)Status < 0 && (_DWORD)Status != Flink )
      {
        *p_Control |= 2u;
        Flink = (int)Status;
        HIBYTE(v2[1].Size) |= 2u;
        v2[1].ThreadListEntry.Flink = Status;
        v11 = Irp;
      }
      v13 = *p_Control;
      if ( v11->IoStatus.Status < 0 )
      {
        if ( v13 < 0 )
          goto LABEL_13;
      }
      else if ( (v13 & 0x40) != 0 )
      {
        goto LABEL_13;
      }
      if ( v11->Cancel )
      {
        v13 = *p_Control;
        if ( (*p_Control & 0x20) != 0 )
        {
LABEL_13:
          v14 = *(p_Control - 2);
          *p_Control = v13 & 2;
          *((_WORD *)p_Control - 1) = 0;
          *(_QWORD *)(p_Control + 5) = 0LL;
          *(_QWORD *)(p_Control + 13) = 0LL;
          *(_QWORD *)(p_Control + 21) = 0LL;
          *(_QWORD *)(p_Control + 45) = 0LL;
          v15 = Irp;
          if ( Irp->CurrentLocation == Irp->StackCount + 1 )
            DeviceObject = 0LL;
          else
            DeviceObject = Irp->Tail.Overlay.CurrentStackLocation->DeviceObject;
          if ( v7 )
          {
            PoDeviceAcquireIrp(Irp, v14, DeviceObject);
            v15 = Irp;
          }
          if ( (*(unsigned int (__fastcall **)(PDEVICE_OBJECT, PIRP, _QWORD))(p_Control + 53))(
                 DeviceObject,
                 v15,
                 *(_QWORD *)(p_Control + 61)) == -1073741802 )
            return;
          if ( v7 )
            PoDeviceReleaseIrp(Irp, v14, DeviceObject);
          goto LABEL_20;
        }
      }
      if ( v11->PendingReturned && v11->CurrentLocation <= v11->StackCount )
        v11->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      *p_Control &= 2u;
      *((_WORD *)p_Control - 1) = 0;
      *(_QWORD *)(p_Control + 5) = 0LL;
      *(_QWORD *)(p_Control + 13) = 0LL;
      *(_QWORD *)(p_Control + 21) = 0LL;
      *(_QWORD *)(p_Control + 45) = 0LL;
LABEL_20:
      p_Control += 72;
      ++Irp->CurrentLocation;
      ++Irp->Tail.Overlay.CurrentStackLocation;
      v9 = Irp;
      if ( Irp->CurrentLocation > (char)(Irp->StackCount + 1) )
      {
        v4 = v119;
        break;
      }
    }
  }
  if ( (v9->Flags & 8) != 0 )
  {
    MdlAddress = v9->MdlAddress;
    MasterIrp = v9->AssociatedIrp.MasterIrp;
    if ( MdlAddress )
    {
      do
      {
        Next = MdlAddress->Next;
        IoFreeMdl(MdlAddress);
        MdlAddress = Next;
      }
      while ( Next );
    }
    IoFreeIrp(v9);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)&MasterIrp->AssociatedIrp, 0xFFFFFFFF) == 1 )
      IofCompleteRequest(MasterIrp, v4);
    return;
  }
  if ( v9->IoStatus.Status == 260 )
  {
    Information = v9->IoStatus.Information;
    if ( Information > 2 )
    {
      v81 = Information - 2684354563u;
      if ( Information - 2684354563u <= 0x16 && (v82 = 4194817LL, _bittest64(&v82, v81)) )
      {
        AuxiliaryBuffer = v9->Tail.Overlay.AuxiliaryBuffer;
        v9->Tail.Overlay.AuxiliaryBuffer = 0LL;
      }
      else
      {
        v9->IoStatus.Status = -1073741191;
      }
      v9 = Irp;
    }
  }
  if ( !v4 )
  {
    OriginalFileObject = v9->Tail.Overlay.OriginalFileObject;
    if ( OriginalFileObject )
    {
      if ( (v9->Flags & 0x400) == 0 )
      {
        Vpb = OriginalFileObject->Vpb;
        if ( (!Vpb || (v20 = (__int64)Vpb->DeviceObject) == 0)
          && ((OriginalFileObject->Flags & 0x800) != 0
           || (v19 = OriginalFileObject->DeviceObject->Vpb) == 0LL
           || (v20 = (__int64)v19->DeviceObject) == 0) )
        {
          v20 = (__int64)OriginalFileObject->DeviceObject;
        }
        if ( *(_QWORD *)(v20 + 24) )
        {
          FileObjectExtension = OriginalFileObject->FileObjectExtension;
          if ( FileObjectExtension )
          {
            if ( FileObjectExtension != IopRevocationExtension )
            {
              v74 = (__int64 *)FileObjectExtension[2];
              if ( v74 )
              {
                v21 = *v74;
                if ( v21 )
                {
                  v75 = IopVerifyDeviceObjectOnStack(v20, v21, 0);
                  v9 = Irp;
                  if ( v75 )
                  {
LABEL_33:
                    v22 = *(_DWORD *)(v21 + 72);
                    if ( v22 == 8 || v22 == 20 )
                    {
                      v4 = 1;
                      v119 = 1;
                    }
                    goto LABEL_35;
                  }
                }
              }
            }
          }
          for ( i = *(_QWORD *)(v20 + 24); i; i = *(_QWORD *)(i + 24) )
            v20 = i;
        }
        v21 = v20;
        goto LABEL_33;
      }
    }
  }
LABEL_35:
  v23 = v9->Tail.Overlay.AuxiliaryBuffer;
  if ( v23 )
  {
    ExFreePoolWithTag(v23, 0);
    Irp->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v9 = Irp;
  }
  v24 = 0LL;
  v25 = *((_QWORD *)&v9->Tail.CompletionKey + 10);
  if ( (v9->AllocationFlags & 0x80u) != 0 )
  {
    v9->AllocationFlags &= ~0x80u;
    *((_QWORD *)&v9->Tail.CompletionKey + 10) = 0LL;
    goto LABEL_48;
  }
  if ( !v25 )
  {
LABEL_49:
    v27 = v4;
    goto LABEL_50;
  }
  if ( (v9->AllocationFlags & 0x80u) == 0 && (*(_BYTE *)(v25 + 2) & 0x20) != 0 )
    *(_QWORD *)(v25 + 40) = 0LL;
  v26 = *((_QWORD *)&v9->Tail.CompletionKey + 10);
  if ( (v9->AllocationFlags & 0x80u) == 0 && v26 && _bittest16((const signed __int16 *)(v26 + 2), 9u) )
  {
    Flags = v9->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      IopFreeCopyObjectsFromIrp(v9);
      v9->PendingReturned = 1;
    }
    else if ( (Flags & 0x100) != 0 )
    {
      v24 = IopCopyCompleteReadIrp;
    }
  }
  *(_WORD *)(v25 + 2) = 0;
  if ( (v9->AllocationFlags & 0x40) != 0 )
  {
    ExFreePoolWithTag((PVOID)v25, 0x58707249u);
    v9->AllocationFlags &= ~0x40u;
    *((_QWORD *)&v9->Tail.CompletionKey + 10) = 0LL;
  }
  if ( !v24 )
  {
LABEL_48:
    v9 = Irp;
    goto LABEL_49;
  }
  v27 = v4;
  if ( ((unsigned __int8 (__fastcall *)(PIRP *, PFILE_OBJECT, _QWORD))v24)(
         &Irp,
         Irp->Tail.Overlay.OriginalFileObject,
         v4) )
  {
    return;
  }
  v9 = Irp;
LABEL_50:
  v28 = v9->Flags;
  if ( (v28 & 0x402) != 0 )
  {
    if ( (v28 & 0x440) == 0 )
    {
      IopDequeueIrpFromThread(v9);
      KeInitializeApc(
        (__int64)&Irp->Tail,
        (__int64)Irp->Tail.Overlay.Thread,
        Irp->ApcEnvironment,
        (__int64)IopCompletePageWrite,
        0LL,
        0LL,
        0,
        0LL);
      KeInsertQueueApc(&Irp->Tail, 0LL, 0LL, v27);
      return;
    }
    *(_OWORD *)&v9->UserIosb->Status = *(_OWORD *)&v9->IoStatus.Status;
    v56 = v28 & 0x42;
    if ( !v56 )
      goto LABEL_118;
    v65 = Irp;
    CurrentIrql = 0;
    Thread = Irp->Tail.Overlay.Thread;
    if ( Thread )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 2 )
          LODWORD(v69) = 4;
        else
          v69 = (-1LL << (CurrentIrql + 1)) & 4;
        SchedulerAssist[5] |= v69;
      }
      p_Thread = (__int64)&Thread[1].WaitBlock[0].Thread;
      KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlock[0].Thread);
    }
    else
    {
      p_Thread = 1496LL;
    }
    v71 = v65->ThreadListEntry.Flink;
    p_ThreadListEntry = &v65->ThreadListEntry;
    Blink = v65->ThreadListEntry.Blink;
    if ( v71->Blink != &v65->ThreadListEntry || Blink->Flink != p_ThreadListEntry )
      goto LABEL_149;
    Blink->Flink = v71;
    v71->Blink = Blink;
    if ( Blink != v71 )
      p_Thread = (__int64)&Thread[1].WaitBlock[0].Thread;
    v65->ThreadListEntry.Blink = &v65->ThreadListEntry;
    p_ThreadListEntry->Flink = p_ThreadListEntry;
    if ( Thread )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(p_Thread, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)p_Thread, 0LL);
      if ( KiIrqlFlags )
      {
        v87 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v87 <= 0xFu && CurrentIrql <= 0xFu && v87 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v89 = CurrentPrcb->SchedulerAssist;
          v90 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v91 = (v90 & v89[5]) == 0;
          v89[5] &= v90;
          if ( v91 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
      KeSetEvent(Irp->UserEvent, v4, 0);
    }
    else
    {
LABEL_118:
      KeSetEvent(Irp->UserEvent, v4, 0);
      if ( !v56 )
        return;
    }
    if ( IopDispatchFreeIrp )
      IovFreeIrpPrivate((ULONG_PTR)Irp);
    else
      IopFreeIrp((ULONG_PTR)Irp);
    return;
  }
  v29 = v9->MdlAddress;
  if ( v29 )
  {
    do
    {
      if ( (v29->MdlFlags & 2) != 0 )
        MmUnlockPages(v29);
      v29 = v29->Next;
    }
    while ( v29 );
    v9 = Irp;
  }
  if ( (v9->Flags & 0x2000) != 0 )
  {
    ObfDereferenceObject(v9->Tail.Overlay.Thread);
    v9 = Irp;
  }
  v30 = v9->Flags;
  if ( (v30 & 0x800) != 0 && !v9->PendingReturned )
  {
    if ( v9->IoStatus.Status == 260 )
    {
      v41 = v9->IoStatus.Information;
      if ( v41 == 2684354563 || v41 == 2684354572 || v41 == 2684354585 )
        v9->Tail.Overlay.AuxiliaryBuffer = AuxiliaryBuffer;
    }
    return;
  }
  v31 = v9->Tail.Overlay.OriginalFileObject;
  v32 = v9->Tail.Overlay.Thread;
  v120 = v31;
  if ( (v30 & 0x200000) != 0 )
  {
    if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v9) )
    {
      IopIoRingCompleteIrp(v9);
      return;
    }
    goto LABEL_57;
  }
  if ( (v30 & 0x2000) == 0 )
    goto LABEL_57;
  v112 = 0LL;
  v110 = 0LL;
  if ( !v9->PendingReturned
    && ((v9->IoStatus.Status & 0xC0000000) == 0xC0000000 || (v31->Flags & 0x2000000) != 0 && v9->IoStatus.Status >= 0) )
  {
    goto LABEL_57;
  }
  p_Port = &v120->CompletionContext->Port;
  if ( !p_Port )
  {
    if ( !(unsigned __int8)IopDoesCompletionNeedsApc(v9) )
    {
      IopCompleteRequest((_DWORD)v9 + 120, (unsigned int)&v112, (unsigned int)&v110, (_DWORD)v9 + 192, (__int64)&v110);
      return;
    }
LABEL_57:
    if ( v32 )
    {
      v33 = (volatile signed __int32 *)&v32[1].WaitBlockFill11[24];
      v34 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v34 <= 0xFu )
      {
        v35 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( v34 == 2 )
          LODWORD(v36) = 4;
        else
          v36 = (-1LL << (v34 + 1)) & 4;
        v35[5] |= v36;
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v32[1].WaitBlockFill11[24]);
      }
      else if ( _interlockedbittestandset64(v33, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&v32[1].WaitBlockFill11[24]);
      }
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&v32[1].WaitBlockFill11[24], retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v33, 0LL);
      if ( KiIrqlFlags )
      {
        v98 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v98 <= 0xFu && v34 <= 0xFu && v98 >= 2u )
        {
          v99 = KeGetCurrentPrcb();
          v100 = v99->SchedulerAssist;
          v101 = ~(unsigned __int16)(-1LL << (v34 + 1));
          v91 = (v101 & v100[5]) == 0;
          v100[5] &= v101;
          if ( v91 )
            KiRemoveSystemWorkPriorityKick(v99);
        }
      }
      __writecr8(v34);
      v9 = Irp;
    }
    if ( !v9->Cancel )
    {
      if ( v32 != KeGetCurrentThread()
        || KeGetCurrentThread()->SpecialApcDisable
        || !(unsigned __int8)KeAreInterruptsEnabled()
        || KeGetCurrentIrql()
        || KeGetCurrentThread()->ApcStateIndex == 1 )
      {
        v37 = Irp;
        ApcEnvironment = Irp->ApcEnvironment;
        Irp->Tail.Apc.Type = 18;
        v37->Tail.Apc.Size = 88;
        if ( ApcEnvironment == 2 )
          ApcEnvironment = v32->ApcStateIndex;
        v37->Tail.Apc.ApcStateIndex = ApcEnvironment;
        v39 = AuxiliaryBuffer;
        v37->Tail.Overlay.Thread = (PETHREAD)IopCompleteRequest;
        v37->Tail.Overlay.AuxiliaryBuffer = (PCHAR)IopAbortRequest;
        v40 = v120;
        v37->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Blink = (struct _LIST_ENTRY *)v32;
        v37->Tail.Overlay.ListEntry.Flink = 0LL;
        *(_WORD *)((char *)&v37->Tail.CompletionKey + 81) = 0;
        v37->Tail.Overlay.ListEntry.Blink = 0LL;
        v37->Tail.Apc.SpareByte0 = 0;
        KeInsertQueueApc(&Irp->Tail, v40, v39, v27);
      }
      else
      {
        v114 = 0LL;
        v113 = 1LL;
        v62 = KeGetCurrentIrql();
        __writecr8(1uLL);
        IopCompleteRequest(
          (_DWORD)Irp + 120,
          (unsigned int)&v114,
          (unsigned int)&v113,
          (unsigned int)&v120,
          (__int64)&AuxiliaryBuffer);
        if ( KiIrqlFlags )
        {
          v102 = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && v102 <= 0xFu && v62 <= 0xFu && v102 >= 2u )
          {
            v103 = KeGetCurrentPrcb();
            v104 = v103->SchedulerAssist;
            v105 = ~(unsigned __int16)(-1LL << (v62 + 1));
            v91 = (v105 & v104[5]) == 0;
            v104[5] &= v105;
            if ( v91 )
              KiRemoveSystemWorkPriorityKick(v103);
          }
        }
        __writecr8(v62);
      }
      return;
    }
    v83 = KeAcquireQueuedSpinLock(0xBuLL);
    v84 = IopDeadIrps;
    v85 = Irp->Tail.Overlay.Thread;
    if ( (__int64 *)IopDeadIrps == &IopDeadIrps )
    {
LABEL_203:
      if ( v85 )
      {
        KeInitializeApc(
          (__int64)&Irp->Tail,
          (__int64)v85,
          Irp->ApcEnvironment,
          (__int64)IopCompleteRequest,
          (__int64)IopAbortRequest,
          0LL,
          0,
          0LL);
        KeInsertQueueApc(&Irp->Tail, v120, AuxiliaryBuffer, v27);
        KeReleaseQueuedSpinLock(0xBuLL, v83);
        return;
      }
    }
    else
    {
      while ( 1 )
      {
        v106 = *(__int64 **)v84;
        if ( (PIRP)(v84 - 32) == Irp )
          break;
        v84 = *(_QWORD *)v84;
        if ( v106 == &IopDeadIrps )
          goto LABEL_203;
      }
      v107 = *(__int64 ***)(v84 + 8);
      if ( v106[1] != v84 || *v107 != (__int64 *)v84 )
        goto LABEL_149;
      *v107 = v106;
      v106[1] = (__int64)v107;
      *(_QWORD *)(v84 + 8) = v84;
      *(_QWORD *)v84 = v84;
      ObfDereferenceObject(v85);
    }
    KeReleaseQueuedSpinLock(0xBuLL, v83);
    v55 = Irp;
    goto LABEL_115;
  }
  v115 = 0LL;
  v116 = 0LL;
  v43 = *p_Port;
  v9->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = (struct _LIST_ENTRY *)p_Port[1];
  v9->Tail.Overlay.PacketType = 0;
  *(_QWORD *)&v115 = 0LL;
  *((_QWORD *)&v115 + 1) = v43 + 64;
  v44 = KeGetCurrentIrql();
  __writecr8(2uLL);
  LODWORD(v45) = 4;
  v109 = 4LL;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v44 <= 0xFu )
  {
    v59 = KeGetCurrentPrcb()->SchedulerAssist;
    if ( v44 == 2 )
      LODWORD(v60) = 4;
    else
      v60 = (-1LL << (v44 + 1)) & 4;
    v59[5] |= v60;
  }
  LOBYTE(v116) = v44;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v115, v43 + 64);
  }
  else
  {
    if ( !_InterlockedExchange64((volatile __int64 *)(v43 + 64), (__int64)&v115) )
      goto LABEL_96;
    KxWaitForLockOwnerShip(&v115);
  }
  LODWORD(v45) = v109;
LABEL_96:
  v9->Flags |= 0x10000u;
  if ( !*(_BYTE *)(v43 + 72) )
  {
    v46 = v119;
    p_ListEntry = (struct _IRP::$::$2AD798E65616C4F7304824DBFA27E419::$665C8370128C04AB892B069E6FB086E8 *)&v9->Tail.Overlay.ListEntry;
    v48 = (_QWORD *)(v43 + 8);
    v49 = KeGetCurrentIrql();
    v111 = v49;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v49 <= 0xFu )
    {
      v61 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( (_BYTE)v49 != 2 )
        v45 = (-1LL << ((unsigned __int8)v49 + 1)) & 4;
      v61[5] |= v45;
    }
    v50 = KeGetCurrentPrcb();
    CurrentThread = v50->CurrentThread;
    v109 = (__int64)CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      IsThreadRunning = KeIsThreadRunning(CurrentThread);
      EtwTraceEnqueueWork(v93, &v9->Tail.CompletionKey + 6, IsThreadRunning);
    }
    if ( v46 && (*(_BYTE *)(v43 + 1) & 2) != 0 )
      v46 = 0;
    KiAcquireKobjectLockSafe(v43);
    if ( (_QWORD *)*v48 != v48
      && *(_DWORD *)(v43 + 40) < *(_DWORD *)(v43 + 44)
      && (*(_QWORD *)(v109 + 232) != v43 || *(_BYTE *)(v109 + 643) != 15)
      && (unsigned __int8)KiWakeQueueWaiter(v50, v43, &v9->Tail.CompletionKey + 6) )
    {
      p_ListEntry->ListEntry.Flink = 0LL;
LABEL_108:
      _InterlockedAnd((volatile signed __int32 *)v43, 0xFFFFFF7F);
      KiExitDispatcher((__int64)v50, 0, (struct _PROCESSOR_NUMBER)1, v46, v111);
      v52 = 0;
      goto LABEL_109;
    }
    v63 = *(_DWORD *)(v43 + 4);
    *(_DWORD *)(v43 + 4) = v63 + 1;
    v64 = *(struct _LIST_ENTRY **)(v43 + 32);
    if ( v64->Flink == (struct _LIST_ENTRY *)(v43 + 24) )
    {
      p_ListEntry->ListEntry.Flink = (struct _LIST_ENTRY *)(v43 + 24);
      v9->Tail.Overlay.ListEntry.Blink = v64;
      v64->Flink = &p_ListEntry->ListEntry;
      *(_QWORD *)(v43 + 32) = p_ListEntry;
      if ( !v63 && (_QWORD *)*v48 != v48 )
        KiWakeOtherQueueWaiters(v50, v43);
      goto LABEL_108;
    }
LABEL_149:
    __fastfail(3u);
  }
  v52 = 1;
LABEL_109:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v115, retaddr);
    goto LABEL_112;
  }
  _m_prefetchw(&v115);
  v53 = v115;
  if ( !(_QWORD)v115 )
  {
    if ( (__int128 *)_InterlockedCompareExchange64(*((volatile signed __int64 **)&v115 + 1), 0LL, (signed __int64)&v115) == &v115 )
      goto LABEL_112;
    v53 = KxWaitForLockChainValid(&v115);
  }
  *(_QWORD *)&v115 = 0LL;
  v76 = BYTE8(v115);
  if ( ((v76 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v53 + 8), *((__int64 *)&v115 + 1))) & 4) != 0 )
  {
    _InterlockedOr(v108, 0);
    KiHaltOnAddressWakeEntireList(_InterlockedExchange64(&KiHaltOnAddressHashTable[((unsigned __int64)(v53 + 8) >> 5) & 0x7F], 0LL));
  }
LABEL_112:
  v54 = (unsigned __int8)v116;
  if ( KiIrqlFlags )
  {
    v94 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v94 <= 0xFu && (unsigned __int8)v116 <= 0xFu && v94 >= 2u )
    {
      v95 = KeGetCurrentPrcb();
      v96 = v95->SchedulerAssist;
      v97 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v116 + 1));
      v91 = (v97 & v96[5]) == 0;
      v96[5] &= v97;
      if ( v91 )
        KiRemoveSystemWorkPriorityKick(v95);
    }
  }
  __writecr8(v54);
  if ( v52 )
  {
    v55 = v9;
LABEL_115:
    IopDropIrp(v55);
  }
}
