/*
 * XREFs of NtQueryInformationFile @ 0x1406EAEB0
 * Callers:
 *     PfpFileCheckAttributesForPrefetch @ 0x1402DC2D0 (PfpFileCheckAttributesForPrefetch.c)
 *     PfSnGetPrefetchInstructions @ 0x1407E1BA4 (PfSnGetPrefetchInstructions.c)
 *     RtlIsPartialPlaceholderFileHandle @ 0x1409BD2F0 (RtlIsPartialPlaceholderFileHandle.c)
 *     SdbpGetFileTimestamp @ 0x140A4BCD4 (SdbpGetFileTimestamp.c)
 * Callees:
 *     IoSetActivityIdThread @ 0x140203940 (IoSetActivityIdThread.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     ObDereferenceObjectDeferDelete @ 0x1402637F0 (ObDereferenceObjectDeferDelete.c)
 *     IopReleaseFileObjectLock @ 0x140267920 (IopReleaseFileObjectLock.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x140267A70 (ObfReferenceObject.c)
 *     IoGetIoPriorityHint @ 0x14027F300 (IoGetIoPriorityHint.c)
 *     KeSetKernelStackSwapEnable @ 0x140283360 (KeSetKernelStackSwapEnable.c)
 *     IopWaitForSynchronousIo @ 0x140299468 (IopWaitForSynchronousIo.c)
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     IoGetAttachedDevice @ 0x14030EE00 (IoGetAttachedDevice.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x1403121F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x140312290 (IopAllocateIrpExReturn.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     IopQueueThreadIrp @ 0x140312720 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x140312C80 (IopCompleteRequest.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     IopGetFileVolumeNameInformation @ 0x1403C16A0 (IopGetFileVolumeNameInformation.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406B5654 (IopWaitAndAcquireFileObjectLock.c)
 *     IopValidateQueryInformationParameters @ 0x1406EB8A0 (IopValidateQueryInformationParameters.c)
 *     IopGetModeInformation @ 0x1406EB9CC (IopGetModeInformation.c)
 *     PsIsProcessAppContainer @ 0x140781158 (PsIsProcessAppContainer.c)
 *     ObReferenceObjectByHandle @ 0x1407C2D00 (ObReferenceObjectByHandle.c)
 *     IopAllocateIrpCleanup @ 0x1409411D4 (IopAllocateIrpCleanup.c)
 *     IopCancelAlertedRequest @ 0x14094140C (IopCancelAlertedRequest.c)
 *     IopExceptionCleanupEx @ 0x140941A08 (IopExceptionCleanupEx.c)
 *     IopGetNumaNodeInformation @ 0x140948150 (IopGetNumaNodeInformation.c)
 *     IopQueryProcessIdsUsingFile @ 0x1409481C8 (IopQueryProcessIdsUsingFile.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     VfFastIoCheckState @ 0x140AC8204 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140AC82DC (VfFastIoSnapState.c)
 */

NTSTATUS __stdcall NtQueryInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  FILE_INFORMATION_CLASS v8; // ebx
  unsigned __int8 PreviousMode; // r12
  NTSTATUS result; // eax
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // r14d
  struct _FILE_OBJECT *v13; // rdi
  _DWORD *v14; // rax
  ULONG *p_Flags; // rsi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v17; // r15
  char v18; // r14
  __int64 Irp; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  unsigned int *v22; // rax
  struct _KEVENT *p_Event; // r8
  __int64 v24; // rax
  __int64 Pool2; // rax
  struct _KTHREAD *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r8
  struct _KTHREAD *v29; // rax
  char v30; // r10
  NTSTATUS NumaNodeInformation; // edi
  bool v32; // zf
  _DWORD *v33; // rbx
  __int64 v34; // r9
  int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rdx
  struct _KTHREAD *v38; // rdx
  int v39; // ecx
  unsigned __int64 v40; // r8
  int v41; // edi
  int *v42; // rcx
  unsigned int v43; // eax
  int v44; // edi
  IO_PRIORITY_HINT IoPriorityHint; // eax
  _BYTE *v46; // rax
  char v47; // dl
  unsigned __int8 CurrentIrql; // r15
  char v49; // r14
  struct _KTHREAD *v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  _QWORD *v53; // rax
  _QWORD *v54; // r10
  _QWORD *v55; // r11
  void *v56; // rax
  char v57; // al
  PIO_STATUS_BLOCK v58; // rax
  __int64 v59; // rcx
  NTSTATUS v60; // eax
  NTSTATUS FileVolumeNameInformation; // ebx
  char IsProcessAppContainer; // al
  struct _KTHREAD *v63; // rax
  PIO_STATUS_BLOCK v64; // rax
  int ModeInformation; // eax
  _DWORD *v66; // r9
  int *v67; // rdx
  int v68; // ecx
  __int64 v69; // rax
  int v70; // ecx
  int v71; // eax
  __int64 v72; // rdx
  __int64 v73; // rdx
  struct _LIST_ENTRY *v74; // rbx
  unsigned __int8 v75; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v78; // eax
  char v79; // [rsp+30h] [rbp-188h]
  char v80; // [rsp+31h] [rbp-187h]
  BOOLEAN v81; // [rsp+33h] [rbp-185h]
  NTSTATUS v82; // [rsp+34h] [rbp-184h]
  _BYTE v83[15]; // [rsp+39h] [rbp-17Fh] BYREF
  ULONG v84; // [rsp+48h] [rbp-170h]
  _DWORD *v85; // [rsp+50h] [rbp-168h]
  PIO_STATUS_BLOCK v86; // [rsp+58h] [rbp-160h]
  unsigned int *v87; // [rsp+60h] [rbp-158h]
  unsigned int v88; // [rsp+68h] [rbp-150h] BYREF
  __int64 v89; // [rsp+70h] [rbp-148h]
  _QWORD *v90; // [rsp+78h] [rbp-140h]
  _QWORD *p_SizeOfFastIoDispatch; // [rsp+80h] [rbp-138h]
  _QWORD *v92; // [rsp+88h] [rbp-130h]
  PVOID Entry; // [rsp+90h] [rbp-128h]
  _QWORD *v94; // [rsp+98h] [rbp-120h]
  PIO_STATUS_BLOCK v95; // [rsp+A0h] [rbp-118h]
  PDEVICE_OBJECT v96; // [rsp+A8h] [rbp-110h]
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp-108h] BYREF
  ULONG *v98; // [rsp+B8h] [rbp-100h]
  PIO_STATUS_BLOCK v99; // [rsp+C0h] [rbp-F8h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-F0h]
  PIO_STATUS_BLOCK v101; // [rsp+D0h] [rbp-E8h]
  PVOID Object; // [rsp+D8h] [rbp-E0h] BYREF
  __int64 v103; // [rsp+E0h] [rbp-D8h] BYREF
  __int128 v104; // [rsp+E8h] [rbp-D0h] BYREF
  void *v105; // [rsp+F8h] [rbp-C0h]
  __int64 v106; // [rsp+110h] [rbp-A8h]
  __int64 v107; // [rsp+118h] [rbp-A0h]
  __int64 v108; // [rsp+120h] [rbp-98h]
  unsigned int *v109; // [rsp+128h] [rbp-90h]
  __int64 v110; // [rsp+130h] [rbp-88h] BYREF
  __int128 v111; // [rsp+138h] [rbp-80h] BYREF
  struct _KEVENT Event; // [rsp+148h] [rbp-70h] BYREF
  struct _LIST_ENTRY v113; // [rsp+160h] [rbp-58h] BYREF

  v84 = Length;
  v85 = FileInformation;
  v86 = IoStatusBlock;
  v101 = IoStatusBlock;
  v95 = IoStatusBlock;
  v99 = IoStatusBlock;
  v94 = FileInformation;
  LODWORD(v87) = Length;
  v8 = FileInformationClass;
  LODWORD(v89) = FileInformationClass;
  memset(&Event, 0, sizeof(Event));
  v111 = 0LL;
  HandleInformation = 0LL;
  v81 = 0;
  v80 = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v83[3] = PreviousMode;
  result = IopValidateQueryInformationParameters(
             PreviousMode,
             CurrentThread,
             IoStatusBlock,
             FileInformation,
             Length,
             FileInformationClass);
  if ( result < 0 )
    return result;
  if ( !PreviousMode && FileInformationClass == FileCaseSensitiveInformationForceAccessCheck )
  {
    v8 = FileCaseSensitiveInformation;
    LODWORD(v89) = 71;
    v80 = 1;
  }
  v11 = IopQueryOperationAccess[v8];
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(
          FileHandle,
          v11,
          (POBJECT_TYPE)IoFileObjectType,
          PreviousMode,
          &Object,
          &HandleInformation);
  v13 = (struct _FILE_OBJECT *)Object;
  *(_QWORD *)&v83[7] = Object;
  if ( v12 >= 0 )
  {
    v14 = (_DWORD *)*((_QWORD *)Object + 26);
    if ( v14 )
    {
      if ( (*v14 & 4) != 0 )
      {
        IsProcessAppContainer = PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process);
        v13 = *(struct _FILE_OBJECT **)&v83[7];
        if ( IsProcessAppContainer )
        {
          ObfDereferenceObject(*(PVOID *)&v83[7]);
          v12 = -1073739504;
        }
      }
    }
  }
  if ( v12 < 0 )
    return v12;
  if ( v8 == FileAccessInformation )
  {
    v63 = KeGetCurrentThread();
    ++v63->OtherOperationCount;
    __incgsdword(0x2EE4u);
    if ( Length >= 4 )
    {
      *v85 = HandleInformation.GrantedAccess;
      IoStatusBlock->Status = 0;
      IoStatusBlock->Information = 4LL;
    }
    else
    {
      v12 = -1073741820;
    }
    ObfDereferenceObject(*(PVOID *)&v83[7]);
    return v12;
  }
  p_Flags = &v13->Flags;
  v98 = &v13->Flags;
  if ( (v13->Flags & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(v13->DeviceObject);
  else
    AttachedDevice = IoGetRelatedDeviceObject(v13);
  v17 = AttachedDevice;
  v96 = AttachedDevice;
  p_SizeOfFastIoDispatch = &AttachedDevice->DriverObject->FastIoDispatch->SizeOfFastIoDispatch;
  if ( v8 == FileIsRemoteDeviceInformation )
  {
    v83[4] = 1;
    if ( v84 )
    {
      *(_BYTE *)v85 = (v13->DeviceObject->Characteristics & 0x10) != 0;
      v83[4] = 0;
      v64 = v86;
      v86->Status = 0;
      v64->Information = 1LL;
    }
    else
    {
      v12 = -1073741820;
    }
    goto LABEL_84;
  }
  if ( v8 == FileVolumeNameInformation )
  {
    FileVolumeNameInformation = IopGetFileVolumeNameInformation(v13->DeviceObject, (__int64)v86, v85, v84);
    ObfDereferenceObject(v13);
    return FileVolumeNameInformation;
  }
  if ( (*p_Flags & 2) == 0 )
  {
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v18 = 0;
    goto LABEL_13;
  }
  v49 = (*p_Flags & 4) != 0;
  v50 = KeGetCurrentThread();
  --v50->KernelApcDisable;
  v51 = KeAbPreAcquire(*(_QWORD *)&v83[7] + 128LL, 0LL);
  v83[0] = 0;
  if ( _InterlockedExchange((volatile __int32 *)(*(_QWORD *)&v83[7] + 116LL), 1) )
  {
    v13 = *(struct _FILE_OBJECT **)&v83[7];
    v12 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&v83[7], PreviousMode, v49, v51, v83);
  }
  else
  {
    if ( v51 )
      *(_BYTE *)(v51 + 18) = 1;
    v13 = *(struct _FILE_OBJECT **)&v83[7];
    ObfReferenceObject(*(PVOID *)&v83[7]);
    v12 = 0;
  }
  if ( v83[0] )
  {
LABEL_84:
    ObfDereferenceObject(v13);
    return v12;
  }
  if ( v8 == FilePositionInformation )
  {
    v83[1] = 1;
    if ( v84 < 8 )
    {
      v12 = -1073741820;
    }
    else
    {
      *(_QWORD *)v85 = v13->CurrentByteOffset.QuadPart;
      v83[1] = 0;
      v58 = v86;
      v86->Status = 0;
      v58->Information = 8LL;
    }
LABEL_83:
    IopReleaseFileObjectLock((volatile __int32 *)&v13->Type);
    goto LABEL_84;
  }
  v53 = p_SizeOfFastIoDispatch;
  if ( p_SizeOfFastIoDispatch )
  {
    if ( (v54 = (_QWORD *)p_SizeOfFastIoDispatch[4],
          v90 = v54,
          p_SizeOfFastIoDispatch = v54,
          v55 = (_QWORD *)v53[5],
          v92 = v55,
          v8 == FileBasicInformation)
      && v54
      || v8 == FileStandardInformation && v55 )
    {
      v104 = 0LL;
      v83[2] = 0;
      if ( (MmVerifierData & 0x10) != 0 )
      {
        if ( MmIsDriverVerifying(v17->DriverObject) )
        {
          v56 = (void *)VfFastIoSnapState();
          v54 = v90;
          v55 = v92;
LABEL_69:
          Entry = v56;
          v105 = v56;
          LOBYTE(v52) = 1;
          if ( v8 == FileBasicInformation )
            v57 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, _DWORD *, __int128 *, struct _DEVICE_OBJECT *))v54)(
                    v13,
                    v52,
                    v85,
                    &v104,
                    v17);
          else
            v57 = ((__int64 (__fastcall *)(struct _FILE_OBJECT *, __int64, _DWORD *, __int128 *, struct _DEVICE_OBJECT *))v55)(
                    v13,
                    v52,
                    v85,
                    &v104,
                    v17);
          v79 = v57;
          if ( Entry )
          {
            VfFastIoCheckState(Entry);
            v57 = v79;
          }
          if ( v57 )
          {
            v12 = v104;
            v83[2] = 1;
            *(_OWORD *)&v86->Status = v104;
            v57 = v79;
          }
          if ( !v57 )
            goto LABEL_80;
          goto LABEL_83;
        }
        v54 = v90;
        v55 = v92;
      }
      v56 = 0LL;
      goto LABEL_69;
    }
  }
LABEL_80:
  v18 = 1;
LABEL_13:
  if ( (*p_Flags & 0x4000000) == 0 )
    KeResetEvent(&v13->Event);
  Irp = IopAllocateIrpExReturn((__int64)v17, (unsigned __int8)v17->StackSize, 0LL);
  v20 = Irp;
  v89 = Irp;
  v21 = Irp;
  v99 = (PIO_STATUS_BLOCK)Irp;
  v90 = (_QWORD *)Irp;
  if ( !Irp )
  {
    IopAllocateIrpCleanup(v13, 0LL);
    return -1073741670;
  }
  *(_QWORD *)(Irp + 192) = v13;
  v92 = (_QWORD *)(Irp + 152);
  v108 = Irp + 152;
  *(_QWORD *)(Irp + 152) = CurrentThread;
  Entry = (PVOID)(Irp + 64);
  v98 = (ULONG *)(Irp + 64);
  *(_BYTE *)(Irp + 64) = PreviousMode;
  if ( v18 )
  {
    *(_BYTE *)(Irp + 71) |= 2u;
    p_Event = 0LL;
    v22 = (unsigned int *)(Irp + 16);
  }
  else
  {
    if ( PreviousMode == 1 )
    {
      v81 = KeSetKernelStackSwapEnable(0);
      v20 = v21;
    }
    v22 = (unsigned int *)(v21 + 16);
    *(_DWORD *)(v21 + 16) = 4;
    v95 = (PIO_STATUS_BLOCK)&v111;
    p_Event = &Event;
  }
  v87 = v22;
  v94 = (_QWORD *)(v20 + 80);
  p_SizeOfFastIoDispatch = (_QWORD *)(v20 + 72);
  v106 = v20 + 72;
  v107 = v20 + 80;
  v109 = v22;
  *(_QWORD *)(v20 + 80) = p_Event;
  *(_QWORD *)(v20 + 72) = v95;
  *(_QWORD *)(v21 + 88) = 0LL;
  v24 = *(_QWORD *)(v21 + 184) - 72LL;
  CurrentThread = (struct _KTHREAD *)v24;
  *(_BYTE *)v24 = 5;
  *(_QWORD *)(v24 + 48) = v13;
  *(_QWORD *)(v21 + 112) = v85;
  *(_QWORD *)(v21 + 24) = 0LL;
  *(_QWORD *)(v21 + 8) = 0LL;
  Pool2 = ExAllocatePool2(65LL, v84, 1112764233LL);
  *(_QWORD *)(v21 + 24) = Pool2;
  if ( Pool2 )
  {
    *v87 |= 0x870u;
    v26 = CurrentThread;
    LODWORD(CurrentThread->Header.WaitListHead.Flink) = v84;
    LODWORD(v26->Header.WaitListHead.Blink) = v8;
    if ( v80 )
      v26->Header.Size |= 1u;
    IopQueueThreadIrp(v21);
    v29 = KeGetCurrentThread();
    ++v29->OtherOperationCount;
    __incgsdword(0x2EE4u);
    v30 = 0;
    NumaNodeInformation = 0;
    v82 = 0;
    if ( v8 == FileModeInformation )
    {
      v33 = *(_DWORD **)&v83[7];
      ModeInformation = IopGetModeInformation(*(_QWORD *)&v83[7], v27, v28, *(_QWORD *)(v21 + 24));
      *v66 = ModeInformation;
      *(_QWORD *)(v21 + 56) = 4LL;
    }
    else if ( v8 == FileAlignmentInformation )
    {
      **(_DWORD **)(v21 + 24) = v17->AlignmentRequirement;
      *(_QWORD *)(v21 + 56) = 4LL;
      v33 = *(_DWORD **)&v83[7];
    }
    else if ( v8 == FileIoCompletionNotificationInformation )
    {
      v67 = *(int **)(v21 + 24);
      *v67 = 0;
      v33 = *(_DWORD **)&v83[7];
      v68 = 0;
      if ( (*(_DWORD *)(*(_QWORD *)&v83[7] + 80LL) & 0x4000000) != 0 )
      {
        v68 = 2;
        *v67 = 2;
      }
      if ( (v33[20] & 0x8000000) != 0 )
      {
        v68 |= 4u;
        *v67 = v68;
      }
      if ( (v33[20] & 0x2000000) != 0 )
        *v67 = v68 | 1;
      *(_QWORD *)(v21 + 56) = 4LL;
    }
    else if ( v8 == FileIoPriorityHintInformation )
    {
      v33 = *(_DWORD **)&v83[7];
      v69 = *(_QWORD *)(*(_QWORD *)&v83[7] + 208LL);
      if ( v69 && (v70 = *(_DWORD *)(v69 + 88)) != 0 )
        v71 = v70 - 1;
      else
        v71 = 2;
      **(_DWORD **)(v21 + 24) = v71;
      *(_QWORD *)(v21 + 56) = 4LL;
    }
    else
    {
      if ( v8 == FileProcessIdsUsingFileInformation )
      {
        v72 = *(_QWORD *)(v21 + 24);
        v88 = 0;
        v33 = *(_DWORD **)&v83[7];
        v85 = *(_DWORD **)&v83[7];
        NumaNodeInformation = IopQueryProcessIdsUsingFile(*(_QWORD *)&v83[7], v72, v84, &v88);
        v82 = NumaNodeInformation;
        v30 = 1;
        if ( NumaNodeInformation == -1073741820 )
          v86->Information = v88;
        else
          *(_QWORD *)(v21 + 56) = v88;
      }
      else if ( v8 == FileNumaNodeInformation )
      {
        v73 = *(_QWORD *)(v21 + 24);
        v33 = *(_DWORD **)&v83[7];
        v85 = *(_DWORD **)&v83[7];
        NumaNodeInformation = IopGetNumaNodeInformation(*(_QWORD *)&v83[7], v73);
        v82 = NumaNodeInformation;
        v30 = 1;
        if ( NumaNodeInformation >= 0 )
          *(_QWORD *)(v21 + 56) = 2LL;
      }
      else
      {
        v32 = v8 == FileAllInformation;
        v33 = *(_DWORD **)&v83[7];
        v85 = *(_DWORD **)&v83[7];
        if ( v32 )
        {
          v34 = *(_QWORD *)(v21 + 24);
          *(_DWORD *)(v34 + 76) = HandleInformation.GrantedAccess;
          v35 = IopGetModeInformation(v33, v27, v28, v34);
          *(_DWORD *)(v36 + 88) = v35;
          *(_DWORD *)(v36 + 92) = v17->AlignmentRequirement;
          *(_QWORD *)(v21 + 56) = 12LL;
        }
      }
      if ( !v30 )
      {
        if ( !v18 )
          ObfReferenceObject(v33);
        v37 = *((_QWORD *)v33 + 26);
        if ( v37 && *(_DWORD *)(v37 + 88) )
        {
          v42 = (int *)v87;
          v43 = *v87 & 0xFFF1FFFF;
          *v87 = v43;
          v41 = *(_DWORD *)(v37 + 88);
        }
        else
        {
          v38 = KeGetCurrentThread();
          v39 = (*((_DWORD *)&v38[1].SwapListEntry + 2) >> 9) & 7;
          v40 = v38->Process[1].Affinity.StaticBitmap[16];
          if ( v40 && v39 >= *(_DWORD *)(v40 + 1068) )
            v39 = *(_DWORD *)(v40 + 1068);
          if ( v39 < 2 && v38 == KeGetCurrentThread() && LODWORD(v38[1].Timer.TimerListEntry.Flink) )
            v39 = 2;
          v41 = v39 + 1;
          v42 = (int *)v87;
          v43 = *v87 & 0xFFF1FFFF;
          *v87 = v43;
          v33 = *(_DWORD **)&v83[7];
          v85 = *(_DWORD **)&v83[7];
        }
        v44 = v43 | (v41 << 17);
        *v42 = v44;
        IoPriorityHint = IoGetIoPriorityHint((PIRP)v21);
        if ( !*(_BYTE *)Entry && IoPriorityHint < IoPriorityNormal )
        {
          v59 = *v92;
          if ( !*v92 || (*(_DWORD *)(v59 + 116) & 0x400) == 0 && (*(_DWORD *)(v59 + 1380) & 0x80u) == 0 )
          {
            ++IoKernelIssuedIoBoostedCount;
            *v87 = v44 & 0xFFF1FFFF | 0x60000;
          }
        }
        if ( *(char *)(v21 + 71) >= 0 && (v46 = *(_BYTE **)(v21 + 200)) != 0LL && (*v46 & 2) != 0 )
        {
          v47 = 1;
        }
        else
        {
          v89 = (__int64)v90;
          v47 = 0;
        }
        if ( v47 )
        {
          v113 = 0LL;
          v113 = *(struct _LIST_ENTRY *)(*(_QWORD *)(v89 + 200) + 24LL);
          v74 = IoSetActivityIdThread(&v113);
          NumaNodeInformation = IofCallDriver(v17, (PIRP)v21);
          IoSetActivityIdThread(v74);
          v33 = v85;
        }
        else
        {
          NumaNodeInformation = IofCallDriver(v17, (PIRP)v21);
        }
        if ( !v18 )
          ObDereferenceObjectDeferDelete(v33);
        v82 = NumaNodeInformation;
LABEL_48:
        if ( NumaNodeInformation == 259 )
        {
          if ( !v18 )
          {
            v60 = KeWaitForSingleObject(&Event, Executive, PreviousMode, 0, 0LL);
            if ( v60 == 257 || v60 == 192 )
              IopCancelAlertedRequest(&Event, (PIRP)v21);
            NumaNodeInformation = v111;
            *(_OWORD *)&v86->Status = v111;
            goto LABEL_53;
          }
          NumaNodeInformation = IopWaitForSynchronousIo((PIRP)v21, v33, PreviousMode);
        }
        else
        {
          v110 = 0LL;
          v103 = 0LL;
          if ( !v18 )
            *v94 = 0LL;
          *p_SizeOfFastIoDispatch = v86;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          IopCompleteRequest((char **)(v21 + 120), (__int64)&v110, &v103, (ULONG_PTR *)&v83[7], &v103);
          if ( KiIrqlFlags )
          {
            v75 = KeGetCurrentIrql();
            if ( (KiIrqlFlags & 1) != 0 && v75 <= 0xFu && CurrentIrql <= 0xFu && v75 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v78 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v78 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v78;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              v33 = *(_DWORD **)&v83[7];
              NumaNodeInformation = v82;
            }
          }
          __writecr8(CurrentIrql);
          if ( !v18 )
            goto LABEL_53;
        }
        IopReleaseFileObjectLock(v33);
LABEL_53:
        if ( v81 )
          KeSetKernelStackSwapEnable(1u);
        return NumaNodeInformation;
      }
    }
    *(_DWORD *)(v21 + 48) = NumaNodeInformation;
    goto LABEL_48;
  }
  IopExceptionCleanupEx(v13, (PIRP)v21, 0LL, 0LL, (v13->Flags & 2) != 0);
  if ( v81 )
    KeSetKernelStackSwapEnable(1u);
  return -1073741670;
}
