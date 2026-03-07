NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  size_t v5; // r15
  PIO_STATUS_BLOCK v7; // r13
  struct _KTHREAD *CurrentThread; // r9
  KPROCESSOR_MODE PreviousMode; // r14
  FILE_INFORMATION_CLASS v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rcx
  _KPROCESS *Process; // rax
  __int16 v14; // cx
  __int64 v15; // rax
  ACCESS_MASK v16; // esi
  NTSTATUS v17; // esi
  struct _FILE_OBJECT *v18; // rdi
  _DWORD *v19; // rax
  ULONG *p_Flags; // r14
  struct _KTHREAD *v21; // rax
  volatile __int32 *v22; // rdi
  __int64 v23; // r9
  LARGE_INTEGER v24; // rax
  struct _KTHREAD *v25; // rcx
  PVOID v26; // rcx
  __int64 v27; // rcx
  char v28; // di
  KPROCESSOR_MODE v29; // al
  unsigned __int8 v30; // bl
  BOOLEAN v31; // al
  char v33; // r13
  unsigned __int8 CurrentIrql; // r14
  __int64 Irp; // rax
  IRP *v36; // r14
  PIO_STATUS_BLOCK v37; // rcx
  struct _KEVENT *v38; // rdx
  PIO_STATUS_BLOCK *v39; // rax
  __int64 v40; // rax
  int *Pool2; // r13
  __int64 v42; // rax
  PETHREAD Thread; // r12
  struct _LIST_ENTRY *p_SystemCallNumber; // r13
  LIST_ENTRY *p_ThreadListEntry; // rdi
  struct _KTHREAD *v46; // rcx
  struct _LIST_ENTRY *Flink; // rax
  unsigned __int8 v48; // di
  struct _KTHREAD *v49; // rax
  unsigned __int64 v50; // rax
  _DWORD *v51; // r8
  __int64 v52; // r9
  _DWORD *SchedulerAssist; // r9
  int v54; // r8d
  __int64 v55; // rdx
  int SectorSize; // ecx
  struct _IRP *v57; // rax
  bool v58; // zf
  struct _IRP *v59; // r12
  KSPIN_LOCK *v60; // rbx
  void *v61; // rcx
  PVOID *v62; // rdi
  unsigned __int64 v63; // r13
  struct _IRP *v64; // rdx
  _DWORD *v65; // r8
  int v66; // ecx
  NTSTATUS v67; // eax
  struct _IRP *v68; // r8
  unsigned int Flags; // ecx
  char Type; // al
  int v71; // eax
  struct _IRP *v72; // rbx
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  KEVENT *p_Event; // rax
  NTSTATUS v75; // ebx
  char IsSandboxedToken; // di
  char IsProcessAppContainer; // al
  unsigned __int8 v78; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v80; // r9
  int v81; // eax
  unsigned __int8 v82; // cl
  struct _KPRCB *v83; // r10
  _DWORD *v84; // r9
  int v85; // eax
  struct _IRP *MasterIrp; // r9
  int v87; // r8d
  _DWORD *v88; // rdx
  int v89; // ecx
  unsigned int v90; // ecx
  unsigned int v91; // ecx
  struct _IRP *v92; // rcx
  unsigned __int8 v93; // cl
  struct _KPRCB *v94; // r10
  _DWORD *v95; // r9
  int v96; // eax
  unsigned __int8 v97; // al
  struct _KPRCB *v98; // r10
  _DWORD *v99; // r9
  int v100; // eax
  struct _IRP *v101; // rdi
  PVOID v102; // rbx
  void *v103; // rcx
  unsigned __int8 v104; // cl
  struct _KPRCB *v105; // r9
  _DWORD *v106; // r8
  int v107; // eax
  KPROCESSOR_MODE v108; // [rsp+30h] [rbp-118h]
  char v109; // [rsp+31h] [rbp-117h]
  BOOLEAN v110; // [rsp+32h] [rbp-116h]
  char v111; // [rsp+33h] [rbp-115h]
  PVOID Object; // [rsp+38h] [rbp-110h] BYREF
  char v113; // [rsp+40h] [rbp-108h] BYREF
  char v114; // [rsp+41h] [rbp-107h]
  __int64 v115; // [rsp+48h] [rbp-100h]
  __int64 v116; // [rsp+50h] [rbp-F8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-F0h]
  struct _KTHREAD *v118; // [rsp+60h] [rbp-E8h]
  PVOID v119; // [rsp+68h] [rbp-E0h] BYREF
  __int128 v120; // [rsp+70h] [rbp-D8h] BYREF
  char *v121; // [rsp+80h] [rbp-C8h]
  int v122; // [rsp+88h] [rbp-C0h] BYREF
  PVOID v123; // [rsp+90h] [rbp-B8h] BYREF
  __int64 v124; // [rsp+98h] [rbp-B0h] BYREF
  __int64 v125; // [rsp+A0h] [rbp-A8h] BYREF
  HANDLE v126; // [rsp+A8h] [rbp-A0h] BYREF
  __int128 v127; // [rsp+B0h] [rbp-98h] BYREF
  PKEVENT *p_UserEvent; // [rsp+C0h] [rbp-88h]
  PIO_STATUS_BLOCK *v129; // [rsp+C8h] [rbp-80h]
  PVOID v130; // [rsp+D0h] [rbp-78h] BYREF
  _QWORD v131[2]; // [rsp+D8h] [rbp-70h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-60h] BYREF
  LARGE_INTEGER v133; // [rsp+108h] [rbp-40h]
  void *retaddr; // [rsp+148h] [rbp+0h]

  v5 = Length;
  v7 = IoStatusBlock;
  v120 = 0LL;
  v121 = 0LL;
  v127 = 0LL;
  v126 = 0LL;
  v110 = 0;
  v111 = 0;
  v114 = 0;
  CurrentThread = KeGetCurrentThread();
  v118 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v108 = PreviousMode;
  if ( !PreviousMode )
  {
    v10 = FileInformationClass;
    switch ( FileInformationClass )
    {
      case FileRenameInformationBypassAccessCheck:
        v10 = FileRenameInformation;
        v111 = 1;
        break;
      case FileRenameInformationExBypassAccessCheck:
        v10 = FileRenameInformationEx;
        v111 = 1;
        break;
      case FileLinkInformationBypassAccessCheck:
        v10 = FileLinkInformation;
        v111 = 1;
        break;
      case FileLinkInformationExBypassAccessCheck:
        v115 = 72LL;
        v10 = FileLinkInformationEx;
        v111 = 1;
        PreviousMode = 0;
        goto LABEL_123;
      case FileCaseSensitiveInformationForceAccessCheck:
        v10 = FileCaseSensitiveInformation;
        v114 = 1;
        break;
    }
    v115 = 72LL;
LABEL_123:
    v16 = IopSetOperationAccess[v10];
    goto LABEL_29;
  }
  v10 = FileInformationClass;
  if ( (unsigned int)FileInformationClass >= (FileRenameInformationExBypassAccessCheck|FileModeInformation) )
    return -1073741821;
  v11 = *((unsigned __int8 *)IopSetOperationLength + (int)FileInformationClass);
  if ( !(_BYTE)v11 )
    return -1073741821;
  if ( (unsigned int)v5 < v11 )
    return -1073741820;
  v12 = (__int64)IoStatusBlock;
  if ( (unsigned __int64)IoStatusBlock >= 0x7FFFFFFF0000LL )
    v12 = 0x7FFFFFFF0000LL;
  *(_DWORD *)v12 = *(_DWORD *)v12;
  Process = CurrentThread->ApcState.Process;
  if ( Process[1].Affinity.StaticBitmap[30]
    && ((v14 = WORD2(Process[2].Affinity.StaticBitmap[20]), v14 == 332) || v14 == 452) )
  {
    if ( !(_DWORD)v5 )
      goto LABEL_26;
    if ( (_DWORD)v5 == 1 )
      v15 = 0LL;
    else
      v15 = 3LL;
    if ( (v15 & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + v5 <= 0x7FFFFFFF0000LL && (char *)FileInformation + v5 >= FileInformation )
      goto LABEL_26;
  }
  else
  {
    if ( !(_DWORD)v5 )
      goto LABEL_26;
    if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation + v5 <= 0x7FFFFFFF0000LL && (char *)FileInformation + v5 >= FileInformation )
      goto LABEL_26;
  }
  MEMORY[0x7FFFFFFF0000] = 0;
LABEL_26:
  v16 = IopSetOperationAccess[FileInformationClass];
  if ( (FileInformationClass == FileLinkInformationEx || FileInformationClass == FileLinkInformation)
    && (memset(&SubjectContext, 0, sizeof(SubjectContext)),
        SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext),
        IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext),
        SeReleaseSubjectContext(&SubjectContext),
        IsSandboxedToken) )
  {
    v16 |= 0x100u;
    v115 = 72LL;
  }
  else
  {
    v115 = 72LL;
  }
LABEL_29:
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(FileHandle, v16, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  v18 = (struct _FILE_OBJECT *)Object;
  v130 = Object;
  if ( v17 >= 0 )
  {
    v19 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v19 )
    {
      if ( (*v19 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v18 = (struct _FILE_OBJECT *)Object;
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(Object);
          v17 = -1073739504;
        }
      }
    }
  }
  if ( v17 < 0 )
    return v17;
  p_Flags = &v18->Flags;
  if ( (v18->Flags & 0x800) != 0 )
  {
    DeviceObject = v18->DeviceObject;
    AttachedDevice = DeviceObject->AttachedDevice;
    if ( AttachedDevice )
    {
      do
      {
        DeviceObject = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      while ( AttachedDevice );
      v7 = IoStatusBlock;
    }
  }
  else
  {
    DeviceObject = IoGetRelatedDeviceObject(v18);
  }
  if ( (*p_Flags & 2) != 0 )
  {
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    v22 = (volatile __int32 *)Object;
    v23 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    v113 = 0;
    if ( _InterlockedExchange(v22 + 29, 1) )
    {
      v18 = (struct _FILE_OBJECT *)Object;
      v17 = IopWaitAndAcquireFileObjectLock(Object, (__int64)&v113);
    }
    else
    {
      if ( v23 )
        *(_BYTE *)(v23 + 18) = 1;
      v18 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v17 = 0;
    }
    LODWORD(v116) = v17;
    if ( v113 )
    {
      v26 = v18;
LABEL_46:
      ObfDereferenceObjectWithTag(v26, 0x746C6644u);
      return v17;
    }
    if ( v10 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v24 = *(LARGE_INTEGER *)FileInformation;
        v133 = *(LARGE_INTEGER *)FileInformation;
        if ( (*p_Flags & 8) != 0
          && (SectorSize = DeviceObject->SectorSize, (_WORD)SectorSize)
          && ((SectorSize - 1) & v24.LowPart) != 0
          || v24.HighPart < 0 )
        {
          v17 = -1073741811;
        }
        else
        {
          v18->CurrentByteOffset = v24;
          v7->Status = 0;
          v7->Information = 0LL;
        }
        v25 = KeGetCurrentThread();
        v25->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
        IopReleaseFileObjectLock((volatile __int32 *)Object);
        v26 = Object;
        goto LABEL_46;
      }
      IopReleaseFileObjectLock((volatile __int32 *)&v18->Type);
      ObfDereferenceObjectWithTag(v18, 0x746C6644u);
      return -1073741820;
    }
    v33 = 1;
  }
  else
  {
    LOWORD(v120) = 1;
    BYTE2(v120) = 6;
    DWORD1(v120) = 0;
    v121 = (char *)&v120 + 8;
    *((_QWORD *)&v120 + 1) = (char *)&v120 + 8;
    v33 = 0;
  }
  v109 = v33;
  if ( (*p_Flags & 0x4000000) != 0 )
  {
    LODWORD(v116) = 4;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      v54 = SchedulerAssist[5];
      if ( CurrentIrql == 2 )
      {
        v116 = 4LL;
        LODWORD(v55) = 4;
      }
      else
      {
        v55 = (-1LL << (CurrentIrql + 1)) & 4;
        LODWORD(v116) = 4;
      }
      SchedulerAssist[5] = v55 | v54;
    }
    else
    {
      LODWORD(v116) = 4;
    }
    v122 = 0;
    while ( _interlockedbittestandset(&v18->Event.Header.Lock, 7u) )
    {
      do
        KeYieldProcessorEx(&v122);
      while ( (v18->Event.Header.Lock & 0x80u) != 0 );
    }
    v18->Event.Header.SignalState = 0;
    _InterlockedAnd(&v18->Event.Header.Lock, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      v78 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v78 <= 0xFu && CurrentIrql <= 0xFu && v78 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v80 = CurrentPrcb->SchedulerAssist;
        v81 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v58 = (v81 & v80[5]) == 0;
        v80[5] &= v81;
        if ( v58 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    v18 = (struct _FILE_OBJECT *)Object;
  }
  if ( v10 == FileTrackingInformation )
  {
    if ( (unsigned int)v5 < 0x10 )
    {
      v75 = -1073741820;
    }
    else
    {
      if ( v33 )
        p_Event = &v18->Event;
      else
        p_Event = (KEVENT *)&v120;
      v75 = IopTrackLink(v18, (__int64)p_Event, v108);
      LODWORD(v116) = v75;
      if ( v75 >= 0 )
      {
        IoStatusBlock->Information = 0LL;
        IoStatusBlock->Status = v75;
      }
    }
    if ( v33 )
      IopReleaseFileObjectLock((volatile __int32 *)&v18->Type);
    ObfDereferenceObjectWithTag(v18, 0x746C6644u);
    return v75;
  }
  else
  {
    Irp = IopAllocateIrpExReturn(DeviceObject, (unsigned __int8)DeviceObject->StackSize, (unsigned __int8)v33 ^ 1u);
    v36 = (IRP *)Irp;
    v131[1] = Irp;
    if ( Irp )
    {
      *(_QWORD *)(Irp + 192) = v18;
      *(_QWORD *)(Irp + 152) = v118;
      *(_BYTE *)(Irp + 64) = v108;
      if ( v33 )
      {
        *(_BYTE *)(Irp + 71) |= 2u;
        v37 = IoStatusBlock;
        v38 = 0LL;
      }
      else
      {
        if ( v108 == 1 )
          v110 = KeSetKernelStackSwapEnable(0);
        v36->Flags = v116;
        v37 = (PIO_STATUS_BLOCK)&v127;
        v38 = (struct _KEVENT *)&v120;
        v115 = 72LL;
      }
      p_UserEvent = &v36->UserEvent;
      v39 = (PIO_STATUS_BLOCK *)((char *)v36 + v115);
      v129 = (PIO_STATUS_BLOCK *)((char *)v36 + v115);
      v36->UserEvent = v38;
      *v39 = v37;
      v36->Overlay.AllocationSize.QuadPart = 0LL;
      v40 = (__int64)&v36->Tail.Overlay.CurrentStackLocation[-1];
      v115 = v40;
      *(_BYTE *)v40 = 6;
      *(_QWORD *)(v40 + 48) = v18;
      v36->AssociatedIrp.MasterIrp = 0LL;
      v36->MdlAddress = 0LL;
      Pool2 = (int *)ExAllocatePool2(97LL, v5, 1112764233LL);
      v36->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
      memmove(Pool2, FileInformation, v5);
      if ( ((unsigned int)(v10 - 19) <= 1 || v10 == FilePositionInformation) && Pool2[1] < 0 )
        RtlRaiseStatus(3221225485LL);
      v36->Flags |= 0x830u;
      v42 = v115;
      *(_DWORD *)(v115 + 8) = v5;
      *(_DWORD *)(v42 + 16) = v10;
      if ( v111 || v114 )
        *(_BYTE *)(v42 + 2) |= 1u;
      Thread = v36->Tail.Overlay.Thread;
      p_SystemCallNumber = (struct _LIST_ENTRY *)&Thread[1].SystemCallNumber;
      p_ThreadListEntry = &v36->ThreadListEntry;
      v46 = (struct _KTHREAD *)KeGetCurrentIrql();
      v118 = v46;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v46 <= 0xFu )
      {
        v51 = KeGetCurrentPrcb()->SchedulerAssist;
        if ( (_BYTE)v46 == 2 )
          LODWORD(v52) = v116;
        else
          v52 = (-1LL << ((unsigned __int8)v46 + 1)) & 4;
        v51[5] |= v52;
      }
      KxAcquireSpinLock((PKSPIN_LOCK)&Thread[1].WaitBlock[0].Thread);
      Flink = p_SystemCallNumber->Flink;
      if ( p_SystemCallNumber->Flink->Blink != p_SystemCallNumber )
        __fastfail(3u);
      p_ThreadListEntry->Flink = Flink;
      v36->ThreadListEntry.Blink = p_SystemCallNumber;
      Flink->Blink = p_ThreadListEntry;
      p_SystemCallNumber->Flink = p_ThreadListEntry;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&Thread[1].WaitBlockFill11[24], retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)&Thread[1].WaitBlock[0].Thread, 0LL);
      v48 = (unsigned __int8)v118;
      if ( KiIrqlFlags )
      {
        v82 = KeGetCurrentIrql();
        if ( (KiIrqlFlags & 1) != 0 && v82 <= 0xFu && (unsigned __int8)v118 <= 0xFu && v82 >= 2u )
        {
          v83 = KeGetCurrentPrcb();
          v84 = v83->SchedulerAssist;
          v85 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v118 + 1));
          v58 = (v85 & v84[5]) == 0;
          v84[5] &= v85;
          if ( v58 )
            KiRemoveSystemWorkPriorityKick(v83);
        }
      }
      __writecr8(v48);
      v49 = KeGetCurrentThread();
      ++v49->OtherOperationCount;
      __incgsdword(0x2EE4u);
      if ( v10 == FileModeInformation )
      {
        MasterIrp = v36->AssociatedIrp.MasterIrp;
        v87 = *(_DWORD *)&MasterIrp->Type;
        if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) != 0
          || (v87 & 0x30) != 0 && (*((_DWORD *)Object + 20) & 2) == 0
          || (v87 & 0x30) == 0 && (*((_DWORD *)Object + 20) & 2) != 0
          || (*(_DWORD *)&MasterIrp->Type & 0x30) == 0x30 )
        {
          v17 = -1073741811;
        }
        else
        {
          v88 = Object;
          v89 = *((_DWORD *)Object + 20);
          if ( (v89 & 8) == 0 )
          {
            if ( (v87 & 2) != 0 )
              v89 |= 0x10u;
            else
              v89 &= ~0x10u;
            *((_DWORD *)Object + 20) = v89;
          }
          if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
            v90 = v89 | 0x20;
          else
            v90 = v89 & 0xFFFFFFDF;
          v88[20] = v90;
          if ( (v90 & 2) != 0 )
          {
            if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
              v91 = v90 | 4;
            else
              v91 = v90 & 0xFFFFFFFB;
            v88[20] = v91;
          }
          v17 = 0;
        }
        goto LABEL_167;
      }
      v50 = (unsigned int)(v10 - 10);
      if ( (unsigned int)v50 <= 0x3E && (v27 = 0x4080000000200003LL, _bittest64(&v27, v50)) )
      {
        v68 = v36->AssociatedIrp.MasterIrp;
        Flags = v68->Flags;
        if ( !Flags || (Flags & 1) != 0 || (int)v5 - 20 < Flags )
        {
          v17 = -1073741811;
          v36->IoStatus.Status = -1073741811;
          v28 = v109;
          goto LABEL_59;
        }
        if ( v10 == FileMoveClusterInformation )
        {
          *(_DWORD *)(v115 + 32) = *(_DWORD *)&v68->Type;
        }
        else
        {
          if ( v10 == FileRenameInformationEx || v10 == FileLinkInformationEx )
            Type = v68->Type & 1;
          else
            Type = v68->Type;
          *(_BYTE *)(v115 + 32) = Type;
        }
        if ( *((_WORD *)&v68->Flags + 2) == 92 || v68->MdlAddress )
        {
          v71 = IopOpenLinkOrRenameTarget(&v126, v36, v68, Object);
          v17 = v71;
          v28 = v109;
          if ( v71 < 0 )
          {
            v36->IoStatus.Status = v71;
            goto LABEL_59;
          }
LABEL_58:
          v17 = IopCallDriverReference(DeviceObject, v36, 2);
LABEL_59:
          v29 = v108;
          goto LABEL_60;
        }
      }
      else
      {
        if ( v10 == FileShortNameInformation )
        {
          v92 = v36->AssociatedIrp.MasterIrp;
          v28 = v109;
          if ( (unsigned int)(v5 - 4) < *(_DWORD *)&v92->Type )
          {
            v17 = -1073741811;
            v36->IoStatus.Status = -1073741811;
            goto LABEL_59;
          }
          if ( *(&v92->Size + 1) == 92 )
          {
            v17 = -1073741811;
            v36->IoStatus.Status = -1073741811;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
        if ( v10 != FileDispositionInformationEx && v10 != FileDispositionInformation )
        {
          switch ( v10 )
          {
            case FileCompletionInformation:
              v59 = v36->AssociatedIrp.MasterIrp;
              v60 = (KSPIN_LOCK *)Object;
              if ( *((_QWORD *)Object + 22) || (*((_DWORD *)Object + 20) & 2) != 0 )
              {
                v17 = -1073741811;
              }
              else
              {
                v61 = *(void **)&v59->Type;
                v119 = 0LL;
                v17 = ObReferenceObjectByHandle(v61, 2u, IoCompletionObjectType, v108, &v119, 0LL);
                if ( v17 >= 0 )
                {
                  v62 = (PVOID *)ExAllocatePool2(64LL, 24LL, 1665363785LL);
                  if ( v62 )
                  {
                    v63 = KeAcquireSpinLockRaiseToDpc(v60 + 23);
                    if ( v60[22] )
                    {
                      KxReleaseSpinLock((volatile signed __int64 *)v60 + 23);
                      if ( KiIrqlFlags )
                      {
                        v97 = KeGetCurrentIrql();
                        if ( (KiIrqlFlags & 1) != 0 && v97 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v97 >= 2u )
                        {
                          v98 = KeGetCurrentPrcb();
                          v99 = v98->SchedulerAssist;
                          v100 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
                          v58 = (v100 & v99[5]) == 0;
                          v99[5] &= v100;
                          if ( v58 )
                            KiRemoveSystemWorkPriorityKick(v98);
                        }
                      }
                      __writecr8(v63);
                      ExFreePoolWithTag(v62, 0);
                      ObfDereferenceObjectWithTag(v119, 0x746C6644u);
                      v17 = -1073741752;
                    }
                    else
                    {
                      *((_DWORD *)v60 + 20) &= ~0x400u;
                      *v62 = v119;
                      v62[1] = v59->MdlAddress;
                      v60[22] = (KSPIN_LOCK)v62;
                      v17 = 0;
                      KxReleaseSpinLock((volatile signed __int64 *)v60 + 23);
                      if ( KiIrqlFlags )
                      {
                        v93 = KeGetCurrentIrql();
                        if ( (KiIrqlFlags & 1) != 0 && v93 <= 0xFu && (unsigned __int8)v63 <= 0xFu && v93 >= 2u )
                        {
                          v94 = KeGetCurrentPrcb();
                          v95 = v94->SchedulerAssist;
                          v96 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v63 + 1));
                          v58 = (v96 & v95[5]) == 0;
                          v95[5] &= v96;
                          if ( v58 )
                            KiRemoveSystemWorkPriorityKick(v94);
                        }
                      }
                      __writecr8(v63);
                    }
                  }
                  else
                  {
                    ObfDereferenceObjectWithTag(v119, 0x746C6644u);
                    v17 = -1073741670;
                  }
                }
              }
              v36->IoStatus.Status = v17;
              v36->IoStatus.Information = 0LL;
              v28 = v109;
              goto LABEL_59;
            case FileReplaceCompletionInformation:
              v101 = v36->AssociatedIrp.MasterIrp;
              v102 = 0LL;
              if ( *((_QWORD *)Object + 22) )
              {
                v103 = *(void **)&v101->Type;
                if ( *(_QWORD *)&v101->Type )
                {
                  v123 = 0LL;
                  v17 = ObReferenceObjectByHandle(v103, 2u, IoCompletionObjectType, v108, &v123, 0LL);
                  v102 = v123;
                }
                if ( v17 >= 0 )
                {
                  v17 = IopReplaceCompletionPort(Object, v102, v101->MdlAddress);
                  if ( v102 )
                  {
                    ObfDereferenceObjectWithTag(v102, 0x746C6644u);
                    v36->IoStatus.Status = v17;
                    v36->IoStatus.Information = 0LL;
                    v28 = v109;
                    goto LABEL_59;
                  }
                }
                goto LABEL_167;
              }
              break;
            case FileIoCompletionNotificationInformation:
              v64 = v36->AssociatedIrp.MasterIrp;
              v65 = Object;
              v66 = *((_DWORD *)Object + 20);
              if ( (v66 & 2) != 0 )
              {
                v17 = -1073741811;
              }
              else
              {
                v17 = 0;
                if ( (*(_DWORD *)&v64->Type & 1) != 0 )
                {
                  v66 |= 0x2000000u;
                  *((_DWORD *)Object + 20) = v66;
                }
                if ( (*(_DWORD *)&v64->Type & 2) != 0 )
                {
                  v66 |= 0x4000000u;
                  v65[20] = v66;
                }
                if ( (*(_DWORD *)&v64->Type & 4) != 0 )
                  v65[20] = v66 | 0x8000000;
              }
              v36->IoStatus.Status = v17;
              v36->IoStatus.Information = 0LL;
              v28 = v109;
              goto LABEL_59;
            case FileIoStatusBlockRangeInformation:
              if ( SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v108) )
              {
                if ( (*((_DWORD *)Object + 20) & 2) != 0 )
                  v17 = -1073741811;
                else
                  v17 = IopSetFileObjectIosbRange(Object, v36);
              }
              else
              {
                v17 = -1073741727;
              }
              v36->IoStatus.Status = v17;
              v36->IoStatus.Information = 0LL;
              v28 = v109;
              goto LABEL_59;
            case FileIoPriorityHintInformation:
              v124 = 0LL;
              v72 = v36->AssociatedIrp.MasterIrp;
              if ( *(_DWORD *)&v72->Type <= 2u )
              {
                v17 = IopAllocateFileObjectExtension((__int64)Object, &v124);
                if ( v17 >= 0 )
                  *(_DWORD *)(v124 + 88) = *(_DWORD *)&v72->Type + 1;
                goto LABEL_167;
              }
              break;
            case FileMemoryPartitionInformation:
              v29 = v108;
              if ( v108 )
              {
                v17 = -1073741790;
              }
              else
              {
                v17 = IopSetFileMemoryPartitionInformation(Object, v36->AssociatedIrp.MasterIrp, (unsigned int)v5);
                v29 = 0;
              }
              v36->IoStatus.Status = v17;
              v36->IoStatus.Information = 0LL;
              v28 = v109;
LABEL_60:
              if ( v17 == 259 )
              {
                if ( !v28 )
                {
                  v67 = KeWaitForSingleObject(&v120, Executive, v29, 0, 0LL);
                  if ( v67 == 257 || v67 == 192 )
                    IopCancelAlertedRequest(&v120, v36);
                  v17 = v127;
                  *(_OWORD *)&IoStatusBlock->Status = v127;
                  v31 = v110;
                  goto LABEL_67;
                }
                v17 = IopWaitForSynchronousIo(v36);
              }
              else
              {
                v131[0] = 0LL;
                v125 = 0LL;
                if ( !v28 )
                  *p_UserEvent = 0LL;
                *v129 = IoStatusBlock;
                v30 = KeGetCurrentIrql();
                __writecr8(1uLL);
                IopCompleteRequest(
                  (_DWORD)v36 + 120,
                  (unsigned int)v131,
                  (unsigned int)&v125,
                  (unsigned int)&v130,
                  (__int64)&v125);
                if ( KiIrqlFlags )
                {
                  v104 = KeGetCurrentIrql();
                  if ( (KiIrqlFlags & 1) != 0 && v104 <= 0xFu && v30 <= 0xFu && v104 >= 2u )
                  {
                    v105 = KeGetCurrentPrcb();
                    v106 = v105->SchedulerAssist;
                    v107 = ~(unsigned __int16)(-1LL << (v30 + 1));
                    v58 = (v107 & v106[5]) == 0;
                    v106[5] &= v107;
                    if ( v58 )
                      KiRemoveSystemWorkPriorityKick(v105);
                  }
                }
                __writecr8(v30);
                if ( !v28 )
                  goto LABEL_66;
              }
              IopReleaseFileObjectLock((volatile __int32 *)Object);
LABEL_66:
              v31 = v110;
LABEL_67:
              if ( v31 )
                KeSetKernelStackSwapEnable(1u);
              if ( v126 )
                ObCloseHandle(v126, 0);
              return v17;
            default:
              goto LABEL_57;
          }
          v17 = -1073741811;
LABEL_167:
          v36->IoStatus.Status = v17;
          v36->IoStatus.Information = 0LL;
          v28 = v109;
          goto LABEL_59;
        }
        v57 = v36->AssociatedIrp.MasterIrp;
        if ( v10 == FileDispositionInformationEx )
          v58 = (*(_DWORD *)&v57->Type & 1) == 0;
        else
          v58 = LOBYTE(v57->Type) == 0;
        if ( !v58 )
          *(_QWORD *)(v115 + 32) = FileHandle;
      }
LABEL_57:
      v28 = v109;
      goto LABEL_58;
    }
    IopAllocateIrpCleanup(v18, 0LL);
    return -1073741670;
  }
}
