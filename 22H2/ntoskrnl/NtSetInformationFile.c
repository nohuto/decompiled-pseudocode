/*
 * XREFs of NtSetInformationFile @ 0x1402D2A20
 * Callers:
 *     <none>
 * Callees:
 *     IopUpdateOtherOperationCount @ 0x14022B620 (IopUpdateOtherOperationCount.c)
 *     IopVerifierExAllocatePoolWithQuota @ 0x14022B640 (IopVerifierExAllocatePoolWithQuota.c)
 *     IopCallDriverReference @ 0x14022B670 (IopCallDriverReference.c)
 *     KeSetKernelStackSwapEnable @ 0x14022BB00 (KeSetKernelStackSwapEnable.c)
 *     IopAllocateFileObjectExtension @ 0x14022BB40 (IopAllocateFileObjectExtension.c)
 *     IopWaitForSynchronousIo @ 0x14026E980 (IopWaitForSynchronousIo.c)
 *     IopCompleteRequest @ 0x1402C31B0 (IopCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopQueueThreadIrp @ 0x1402CB9A0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     IoGetAttachedDevice @ 0x1402D3EF0 (IoGetAttachedDevice.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402E0C70 (KeReleaseSpinLock.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     IopReplaceCompletionPort @ 0x14038CA2C (IopReplaceCompletionPort.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     IopOpenLinkOrRenameTarget @ 0x140608E08 (IopOpenLinkOrRenameTarget.c)
 *     ObCloseHandle @ 0x14061AFE0 (ObCloseHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     RtlIsSandboxedToken @ 0x140652B50 (RtlIsSandboxedToken.c)
 *     IopTrackLink @ 0x14065E674 (IopTrackLink.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14077BCF0 (ExRaiseDatatypeMisalignment.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x1408910DC (IopCancelAlertedRequest.c)
 *     IopSetFileObjectIosbRange @ 0x140892864 (IopSetFileObjectIosbRange.c)
 *     IopSetFileMemoryPartitionInformation @ 0x14089433C (IopSetFileMemoryPartitionInformation.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall NtSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  SIZE_T v5; // r13
  struct _KTHREAD *CurrentThread; // r10
  KPROCESSOR_MODE PreviousMode; // bl
  FILE_INFORMATION_CLASS v9; // r15d
  ULONG v10; // eax
  __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int16 v13; // ax
  __int64 v14; // rax
  ACCESS_MASK v15; // edi
  char IsSandboxedToken; // bl
  NTSTATUS result; // eax
  NTSTATUS v18; // edi
  __int64 v19; // r14
  int *v20; // r12
  int v21; // esi
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  _DWORD *v25; // r9
  struct _KTHREAD *v26; // rax
  __int64 v27; // rbx
  __int64 v28; // r9
  struct _DMA_ADAPTER *v29; // rcx
  __int64 v30; // rax
  int SectorSize; // ecx
  struct _KTHREAD *v32; // rcx
  char v33; // si
  NTSTATUS v34; // ebx
  __int128 *v35; // rax
  IRP *v36; // rax
  IRP *v37; // rsi
  PIO_STATUS_BLOCK v38; // rax
  struct _KEVENT *v39; // rcx
  __int64 v40; // rax
  struct _IRP *PoolWithQuota; // rax
  __int64 v42; // rbx
  struct _IRP *MasterIrp; // r8
  int v44; // edx
  int v45; // ecx
  unsigned int v46; // ecx
  char v47; // r15
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  struct _IRP *v50; // r8
  unsigned int Flags; // ecx
  char Type; // al
  int v53; // eax
  struct _IRP *v54; // rcx
  struct _IRP *v55; // r13
  void *v56; // rcx
  _QWORD *PoolWithTag; // rbx
  KIRQL v58; // al
  KSPIN_LOCK *v59; // rcx
  struct _IRP *v60; // r15
  struct _DMA_ADAPTER *v61; // rbx
  void *v62; // rcx
  struct _IRP *v63; // rdx
  int v64; // eax
  int v65; // ecx
  KPROCESSOR_MODE v66; // bl
  NTSTATUS v67; // eax
  struct _IRP *v68; // rbx
  struct _IRP *v69; // rax
  bool v70; // zf
  NTSTATUS v71; // eax
  BOOLEAN v72; // al
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 v74; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v77; // eax
  KPROCESSOR_MODE v78; // [rsp+30h] [rbp-E8h]
  char v79; // [rsp+31h] [rbp-E7h]
  BOOLEAN v80; // [rsp+32h] [rbp-E6h]
  char v81; // [rsp+33h] [rbp-E5h]
  _DWORD v82[3]; // [rsp+34h] [rbp-E4h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+40h] [rbp-D8h]
  NTSTATUS v84; // [rsp+48h] [rbp-D0h]
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v86; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v87; // [rsp+60h] [rbp-B8h] BYREF
  char *v88; // [rsp+70h] [rbp-A8h]
  struct _KTHREAD *v89; // [rsp+78h] [rbp-A0h]
  PIRP Irp; // [rsp+80h] [rbp-98h] BYREF
  PVOID v91; // [rsp+88h] [rbp-90h] BYREF
  __int64 v92; // [rsp+90h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-80h] BYREF
  __int128 v94; // [rsp+A0h] [rbp-78h] BYREF
  PVOID v95; // [rsp+B0h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v97; // [rsp+D8h] [rbp-40h]

  v5 = Length;
  *(_QWORD *)&v82[1] = 0LL;
  v87 = 0LL;
  v88 = 0LL;
  v94 = 0LL;
  Handle = 0LL;
  v80 = 0;
  v81 = 0;
  BYTE1(v82[0]) = 0;
  CurrentThread = KeGetCurrentThread();
  v89 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v78 = PreviousMode;
  if ( PreviousMode )
  {
    v9 = FileInformationClass;
    if ( (unsigned int)FileInformationClass >= FileMaximumInformation )
      return -1073741821;
    v10 = *((unsigned __int8 *)IopSetOperationLength + (int)FileInformationClass);
    if ( !(_BYTE)v10 )
      return -1073741821;
    if ( Length < v10 )
      return -1073741820;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v11 = (__int64)IoStatusBlock;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    v12 = CurrentThread->ApcState.Process[1].AffinityPadding[10];
    if ( v12 && ((v13 = *(_WORD *)(v12 + 8), v13 == 332) || v13 == 452) )
    {
      if ( Length )
      {
        v14 = 0LL;
        if ( Length != 1 )
          v14 = 3LL;
        if ( (v14 & (unsigned __int64)FileInformation) != 0 )
          ExRaiseDatatypeMisalignment();
LABEL_17:
        if ( (unsigned __int64)FileInformation + Length > 0x7FFFFFFF0000LL
          || (char *)FileInformation + Length < FileInformation )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
        }
      }
    }
    else if ( Length )
    {
      if ( ((*((unsigned __int8 *)IopQuerySetAlignmentRequirement + (int)FileInformationClass) - 1LL) & (unsigned __int64)FileInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      goto LABEL_17;
    }
    v15 = IopSetOperationAccess[FileInformationClass];
    if ( FileInformationClass == FileLinkInformation || FileInformationClass == FileLinkInformationEx )
    {
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      SeCaptureSubjectContextEx(CurrentThread, CurrentThread->Process, &SubjectContext);
      IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
      SeReleaseSubjectContext(&SubjectContext);
      v70 = IsSandboxedToken == 0;
      PreviousMode = v78;
      if ( !v70 )
        v15 |= 0x100u;
    }
    goto LABEL_36;
  }
  v9 = FileInformationClass;
  switch ( FileInformationClass )
  {
    case FileRenameInformationBypassAccessCheck:
      v9 = FileRenameInformation;
      v81 = 1;
      break;
    case FileRenameInformationExBypassAccessCheck:
      v9 = FileRenameInformationEx;
      v81 = 1;
      break;
    case FileLinkInformationBypassAccessCheck:
      v9 = FileLinkInformation;
      v81 = 1;
      break;
    case FileLinkInformationExBypassAccessCheck:
      v9 = FileLinkInformationEx;
      v81 = 1;
      break;
    case FileCaseSensitiveInformationForceAccessCheck:
      v9 = FileCaseSensitiveInformation;
      BYTE1(v82[0]) = 1;
      break;
  }
  v15 = IopSetOperationAccess[v9];
LABEL_36:
  result = IopReferenceFileObject(FileHandle, v15, PreviousMode, (PVOID *)&v82[1], 0LL);
  v18 = result;
  if ( result < 0 )
    return result;
  v19 = *(_QWORD *)&v82[1];
  v20 = (int *)(*(_QWORD *)&v82[1] + 80LL);
  v21 = *(_DWORD *)(*(_QWORD *)&v82[1] + 80LL);
  if ( (v21 & 0x800) != 0 )
  {
    AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(*(_QWORD *)&v82[1] + 8LL));
  }
  else
  {
    AttachedDevice = IoGetRelatedDeviceObject(*(PFILE_OBJECT *)&v82[1]);
    v21 = *v20;
  }
  DeviceObject = AttachedDevice;
  if ( (v21 & 2) != 0 )
  {
    v26 = KeGetCurrentThread();
    --v26->KernelApcDisable;
    v27 = *(_QWORD *)&v82[1];
    v28 = KeAbPreAcquire(*(_QWORD *)&v82[1] + 128LL, 0LL, 0);
    LOBYTE(v82[0]) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v27 + 116), 1) )
    {
      PreviousMode = v78;
      v19 = *(_QWORD *)&v82[1];
      v18 = IopWaitAndAcquireFileObjectLock(*(PVOID *)&v82[1], (__int64)v82);
    }
    else
    {
      if ( v28 )
        *(_BYTE *)(v28 + 26) |= 1u;
      v19 = *(_QWORD *)&v82[1];
      ObfReferenceObject(*(PVOID *)&v82[1]);
      v18 = 0;
      PreviousMode = v78;
    }
    v84 = v18;
    if ( LOBYTE(v82[0]) )
    {
      v29 = (struct _DMA_ADAPTER *)v19;
LABEL_204:
      HalPutDmaAdapter(v29);
      return v18;
    }
    if ( v9 == FilePositionInformation )
    {
      if ( (unsigned int)v5 >= 8 )
      {
        v30 = *(_QWORD *)FileInformation;
        v97 = *(_QWORD *)FileInformation;
        if ( (*v20 & 8) != 0
          && (SectorSize = DeviceObject->SectorSize, (_WORD)SectorSize)
          && ((SectorSize - 1) & (unsigned int)v30) != 0
          || v30 < 0 )
        {
          v18 = -1073741811;
        }
        else
        {
          *(_QWORD *)(v19 + 104) = v30;
          IoStatusBlock->Status = 0;
          IoStatusBlock->Information = 0LL;
        }
        v32 = KeGetCurrentThread();
        v32->OtherTransferCount += (unsigned int)v5;
        __addgsqword(0x2EF8u, (unsigned int)v5);
        IopReleaseFileObjectLock(*(PADAPTER_OBJECT *)&v82[1]);
        v29 = *(struct _DMA_ADAPTER **)&v82[1];
        goto LABEL_204;
      }
      IopReleaseFileObjectLock((PADAPTER_OBJECT)v19);
      HalPutDmaAdapter((PADAPTER_OBJECT)v19);
      return -1073741820;
    }
    v33 = 1;
  }
  else
  {
    LOWORD(v87) = 1;
    BYTE2(v87) = 6;
    DWORD1(v87) = 0;
    v88 = (char *)&v87 + 8;
    *((_QWORD *)&v87 + 1) = (char *)&v87 + 8;
    v33 = 0;
  }
  v79 = v33;
  IopResetEvent(v19, v23, v24, v25);
  if ( v9 != FileTrackingInformation )
  {
    v36 = (IRP *)IopAllocateIrpExReturn();
    v37 = v36;
    Irp = v36;
    if ( !v36 )
    {
      IopAllocateIrpCleanup((PADAPTER_OBJECT)v19, 0LL);
      return -1073741670;
    }
    v36->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v19;
    v36->Tail.Overlay.Thread = v89;
    v36->RequestorMode = PreviousMode;
    if ( v79 )
    {
      v36->AllocationFlags |= 2u;
      v38 = IoStatusBlock;
      v39 = 0LL;
    }
    else
    {
      if ( PreviousMode == 1 )
        v80 = KeSetKernelStackSwapEnable(0);
      v37->Flags = 4;
      v38 = (PIO_STATUS_BLOCK)&v94;
      v39 = (struct _KEVENT *)&v87;
    }
    v37->UserEvent = v39;
    v37->UserIosb = v38;
    v37->Overlay.AllocationSize.QuadPart = 0LL;
    v40 = (__int64)&v37->Tail.Overlay.CurrentStackLocation[-1];
    v86 = v40;
    *(_BYTE *)v40 = 6;
    *(_QWORD *)(v40 + 48) = v19;
    v37->AssociatedIrp.MasterIrp = 0LL;
    v37->MdlAddress = 0LL;
    PoolWithQuota = (struct _IRP *)IopVerifierExAllocatePoolWithQuota(0LL, v5);
    v89 = (struct _KTHREAD *)PoolWithQuota;
    v37->AssociatedIrp.MasterIrp = PoolWithQuota;
    memmove(PoolWithQuota, FileInformation, v5);
    if ( ((unsigned int)(v9 - 19) <= 1 || v9 == FilePositionInformation) && v89->Header.SignalState < 0 )
      RtlRaiseStatus(-1073741811);
    v37->Flags |= 0x830u;
    v42 = v86;
    *(_DWORD *)(v86 + 8) = v5;
    *(_DWORD *)(v42 + 16) = v9;
    if ( v81 || BYTE1(v82[0]) )
      *(_BYTE *)(v42 + 2) |= 1u;
    IopQueueThreadIrp((__int64)v37);
    IopUpdateOtherOperationCount();
    if ( v9 == FileModeInformation )
    {
      MasterIrp = v37->AssociatedIrp.MasterIrp;
      v44 = *(_DWORD *)&MasterIrp->Type;
      if ( (*(_DWORD *)&MasterIrp->Type & 0xFFFFFFC9) == 0
        && ((v44 & 0x30) == 0 || (*v20 & 2) != 0)
        && ((v44 & 0x30) != 0 || (*v20 & 2) == 0)
        && (*(_DWORD *)&MasterIrp->Type & 0x30) != 0x30 )
      {
        v45 = *v20;
        if ( (*v20 & 8) == 0 )
        {
          if ( (v44 & 2) != 0 )
            v45 |= 0x10u;
          else
            v45 &= ~0x10u;
          *v20 = v45;
        }
        if ( (*(_DWORD *)&MasterIrp->Type & 4) != 0 )
          v46 = v45 | 0x20;
        else
          v46 = v45 & 0xFFFFFFDF;
        *v20 = v46;
        if ( (v46 & 2) != 0 )
        {
          if ( (*(_DWORD *)&MasterIrp->Type & 0x10) != 0 )
          {
            *v20 = v46 | 4;
            v18 = 0;
            v37->IoStatus.Status = 0;
            v37->IoStatus.Information = 0LL;
            v47 = v79;
LABEL_179:
            v66 = v78;
LABEL_180:
            if ( v18 == 259 )
            {
              if ( !v47 )
              {
                v71 = KeWaitForSingleObject(&v87, Executive, v66, 0, 0LL);
                if ( v71 == 257 || v71 == 192 )
                  IopCancelAlertedRequest(&v87, v37);
                v18 = v94;
                *(_OWORD *)&IoStatusBlock->Status = v94;
                v72 = v80;
                goto LABEL_200;
              }
              v18 = IopWaitForSynchronousIo(v37, v19);
            }
            else
            {
              Irp = 0LL;
              v86 = 0LL;
              if ( !v47 )
                v37->UserEvent = 0LL;
              v37->UserIosb = IoStatusBlock;
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(1uLL);
              IopCompleteRequest((__int64)&v37->Tail, (__int64)&Irp, &v86, (ULONG_PTR *)&v82[1], &v86);
              if ( KiIrqlFlags )
              {
                if ( (KiIrqlFlags & 1) != 0 )
                {
                  v74 = KeGetCurrentIrql();
                  if ( v74 <= 0xFu && CurrentIrql <= 0xFu && v74 >= 2u )
                  {
                    CurrentPrcb = KeGetCurrentPrcb();
                    SchedulerAssist = CurrentPrcb->SchedulerAssist;
                    v77 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                    v70 = (v77 & SchedulerAssist[5]) == 0;
                    SchedulerAssist[5] &= v77;
                    if ( v70 )
                      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
                    v19 = *(_QWORD *)&v82[1];
                  }
                }
              }
              __writecr8(CurrentIrql);
              if ( !v47 )
                goto LABEL_199;
            }
            IopReleaseFileObjectLock((PADAPTER_OBJECT)v19);
LABEL_199:
            v72 = v80;
LABEL_200:
            if ( v72 )
              KeSetKernelStackSwapEnable(1u);
            if ( Handle )
              ObCloseHandle(Handle, 0);
            return v18;
          }
          *v20 = v46 & 0xFFFFFFFB;
        }
        v18 = 0;
        v37->IoStatus.Status = 0;
        v37->IoStatus.Information = 0LL;
        v47 = v79;
        goto LABEL_179;
      }
      goto LABEL_104;
    }
    v48 = (unsigned int)(v9 - 10);
    if ( (unsigned int)v48 <= 0x3E && (v49 = 0x4080000000200003LL, _bittest64(&v49, v48)) )
    {
      v50 = v37->AssociatedIrp.MasterIrp;
      Flags = v50->Flags;
      if ( !Flags || (Flags & 1) != 0 || (int)v5 - 20 < Flags )
      {
        v18 = -1073741811;
        v37->IoStatus.Status = -1073741811;
        v47 = v79;
        goto LABEL_179;
      }
      if ( v9 == FileMoveClusterInformation )
      {
        *(_DWORD *)(v42 + 32) = *(_DWORD *)&v50->Type;
      }
      else
      {
        if ( v9 == FileRenameInformationEx || v9 == FileLinkInformationEx )
          Type = v50->Type & 1;
        else
          Type = v50->Type;
        *(_BYTE *)(v42 + 32) = Type;
      }
      if ( *((_WORD *)&v50->Flags + 2) == 92 || v50->MdlAddress )
      {
        v53 = IopOpenLinkOrRenameTarget(&Handle, v37, v50, v19);
        v18 = v53;
        v47 = v79;
        if ( v53 < 0 )
        {
          v37->IoStatus.Status = v53;
          goto LABEL_179;
        }
LABEL_178:
        v18 = IopCallDriverReference(DeviceObject, v37, v47, (_QWORD *)v19, 2);
        goto LABEL_179;
      }
    }
    else
    {
      if ( v9 == FileShortNameInformation )
      {
        v54 = v37->AssociatedIrp.MasterIrp;
        v47 = v79;
        if ( (unsigned int)(v5 - 4) < *(_DWORD *)&v54->Type )
        {
          v18 = -1073741811;
          v37->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        if ( *(&v54->Size + 1) == 92 )
        {
          v18 = -1073741811;
          v37->IoStatus.Status = -1073741811;
          goto LABEL_179;
        }
        goto LABEL_178;
      }
      if ( v9 != FileDispositionInformation && v9 != FileDispositionInformationEx )
      {
        switch ( v9 )
        {
          case FileCompletionInformation:
            v55 = v37->AssociatedIrp.MasterIrp;
            if ( !*(_QWORD *)(v19 + 176) && (*v20 & 2) == 0 )
            {
              v56 = *(void **)&v55->Type;
              Object = 0LL;
              v18 = ObReferenceObjectByHandle(v56, 2u, IoCompletionObjectType, v78, &Object, 0LL);
              if ( v18 >= 0 )
              {
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x63436F49u);
                if ( PoolWithTag )
                {
                  v58 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v19 + 184));
                  v59 = (KSPIN_LOCK *)(v19 + 184);
                  if ( *(_QWORD *)(v19 + 176) )
                  {
                    KeReleaseSpinLock(v59, v58);
                    ExFreePoolWithTag(PoolWithTag, 0);
                    HalPutDmaAdapter((PADAPTER_OBJECT)Object);
                    v18 = -1073741752;
                    v37->IoStatus.Status = -1073741752;
                  }
                  else
                  {
                    *v20 &= ~0x400u;
                    *PoolWithTag = Object;
                    PoolWithTag[1] = v55->MdlAddress;
                    PoolWithTag[2] = 0LL;
                    *(_QWORD *)(v19 + 176) = PoolWithTag;
                    v18 = 0;
                    KeReleaseSpinLock(v59, v58);
                    v37->IoStatus.Status = 0;
                  }
                  v37->IoStatus.Information = 0LL;
                  v47 = v79;
                }
                else
                {
                  HalPutDmaAdapter((PADAPTER_OBJECT)Object);
                  v18 = -1073741670;
                  v37->IoStatus.Status = -1073741670;
                  v37->IoStatus.Information = 0LL;
                  v47 = v79;
                }
                goto LABEL_179;
              }
              goto LABEL_105;
            }
LABEL_104:
            v18 = -1073741811;
LABEL_105:
            v37->IoStatus.Status = v18;
            v37->IoStatus.Information = 0LL;
            v47 = v79;
            goto LABEL_179;
          case FileReplaceCompletionInformation:
            v60 = v37->AssociatedIrp.MasterIrp;
            v61 = 0LL;
            v95 = 0LL;
            if ( *(_QWORD *)(v19 + 176) )
            {
              v62 = *(void **)&v60->Type;
              if ( *(_QWORD *)&v60->Type )
              {
                v91 = 0LL;
                v18 = ObReferenceObjectByHandle(v62, 2u, IoCompletionObjectType, v78, &v91, 0LL);
                v61 = (struct _DMA_ADAPTER *)v91;
                v95 = v91;
              }
              if ( v18 >= 0 )
              {
                v18 = IopReplaceCompletionPort(v19, v61, v60->MdlAddress);
                if ( v61 )
                {
                  HalPutDmaAdapter(v61);
                  v37->IoStatus.Status = v18;
                  v37->IoStatus.Information = 0LL;
                  v47 = v79;
                  goto LABEL_179;
                }
              }
              goto LABEL_105;
            }
            goto LABEL_104;
          case FileIoCompletionNotificationInformation:
            v63 = v37->AssociatedIrp.MasterIrp;
            v64 = *v20;
            if ( (*v20 & 2) != 0 )
            {
              v18 = -1073741811;
              v37->IoStatus.Status = -1073741811;
              v37->IoStatus.Information = 0LL;
              v47 = v79;
            }
            else
            {
              v18 = 0;
              v65 = *(_DWORD *)&v63->Type;
              if ( (*(_DWORD *)&v63->Type & 1) != 0 )
              {
                v64 |= 0x2000000u;
                *v20 = v64;
                v65 = *(_DWORD *)&v63->Type;
              }
              if ( (v65 & 2) != 0 )
              {
                v64 |= 0x4000000u;
                *v20 = v64;
                v65 = *(_DWORD *)&v63->Type;
              }
              if ( (v65 & 4) != 0 )
                *v20 = v64 | 0x8000000;
              v37->IoStatus.Status = 0;
              v37->IoStatus.Information = 0LL;
              v47 = v79;
            }
            goto LABEL_179;
          case FileIoStatusBlockRangeInformation:
            v66 = v78;
            if ( !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, v78) )
            {
              v18 = -1073741727;
              v37->IoStatus.Status = -1073741727;
              v37->IoStatus.Information = 0LL;
              v47 = v79;
              goto LABEL_180;
            }
            if ( (*v20 & 2) != 0 )
            {
              v18 = -1073741811;
              v37->IoStatus.Status = -1073741811;
              v37->IoStatus.Information = 0LL;
              v47 = v79;
              goto LABEL_180;
            }
            v67 = IopSetFileObjectIosbRange(v19, v37);
            break;
          case FileIoPriorityHintInformation:
            v92 = 0LL;
            v68 = v37->AssociatedIrp.MasterIrp;
            if ( *(_DWORD *)&v68->Type <= 2u )
            {
              v18 = IopAllocateFileObjectExtension(v19, &v92);
              if ( v18 >= 0 )
              {
                *(_DWORD *)(v92 + 80) = *(_DWORD *)&v68->Type + 1;
                v37->IoStatus.Status = v18;
                v37->IoStatus.Information = 0LL;
                v47 = v79;
                goto LABEL_179;
              }
              goto LABEL_105;
            }
            goto LABEL_104;
          case FileMemoryPartitionInformation:
            v66 = v78;
            if ( v78 )
            {
              v18 = -1073741790;
              v37->IoStatus.Status = -1073741790;
              v37->IoStatus.Information = 0LL;
              v47 = v79;
              goto LABEL_180;
            }
            v67 = IopSetFileMemoryPartitionInformation(v19, v37->AssociatedIrp.MasterIrp, (unsigned int)v5);
            break;
          default:
            goto LABEL_177;
        }
        v18 = v67;
        v37->IoStatus.Status = v67;
        v37->IoStatus.Information = 0LL;
        v47 = v79;
        goto LABEL_180;
      }
      v69 = v37->AssociatedIrp.MasterIrp;
      if ( v9 == FileDispositionInformationEx )
        v70 = (*(_DWORD *)&v69->Type & 1) == 0;
      else
        v70 = LOBYTE(v69->Type) == 0;
      if ( !v70 )
        *(_QWORD *)(v42 + 32) = FileHandle;
    }
LABEL_177:
    v47 = v79;
    goto LABEL_178;
  }
  if ( (unsigned int)v5 >= 0x10 )
  {
    v35 = (__int128 *)(v19 + 152);
    if ( !v33 )
      v35 = &v87;
    v34 = IopTrackLink((PVOID)v19, (__int64)v35, PreviousMode);
    v84 = v34;
    if ( v34 >= 0 )
    {
      IoStatusBlock->Information = 0LL;
      IoStatusBlock->Status = v34;
    }
  }
  else
  {
    v34 = -1073741820;
  }
  if ( v33 )
    IopReleaseFileObjectLock((PADAPTER_OBJECT)v19);
  HalPutDmaAdapter((PADAPTER_OBJECT)v19);
  return v34;
}
