/*
 * XREFs of IopXxxControlFile @ 0x14064B730
 * Callers:
 *     PfpPrefetchEntireDirectory @ 0x140632798 (PfpPrefetchEntireDirectory.c)
 *     NtDeviceIoControlFile @ 0x14064B6C0 (NtDeviceIoControlFile.c)
 *     NtFsControlFile @ 0x140677860 (NtFsControlFile.c)
 *     PfSnPrefetchFileMetadata @ 0x1406928A8 (PfSnPrefetchFileMetadata.c)
 *     PfpVolumePrefetchMetadata @ 0x14070B688 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14070BA34 (PfpPrefetchDirectoryStream.c)
 * Callees:
 *     IoThreadToProcess @ 0x1402056C0 (IoThreadToProcess.c)
 *     IopProbeAndLockPages @ 0x1402081B0 (IopProbeAndLockPages.c)
 *     KeSetEvent @ 0x1402C3C30 (KeSetEvent.c)
 *     IopReferenceFileObject @ 0x1402C90B0 (IopReferenceFileObject.c)
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 *     HalPutDmaAdapter @ 0x1402CB830 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x1402CB940 (ObfReferenceObject.c)
 *     IopReleaseFileObjectLock @ 0x1402CDEE0 (IopReleaseFileObjectLock.c)
 *     IoGetRelatedDeviceObject @ 0x1402D20D0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpExReturn @ 0x1402D21F0 (IopAllocateIrpExReturn.c)
 *     IopResetEvent @ 0x1402D2590 (IopResetEvent.c)
 *     IopMarkApcRoutineIfAsynchronousIo32 @ 0x1402D2650 (IopMarkApcRoutineIfAsynchronousIo32.c)
 *     IopVerifierExAllocatePoolWithQuota_0 @ 0x1402D26C0 (IopVerifierExAllocatePoolWithQuota_0.c)
 *     IoGetAttachedDevice @ 0x1402D3EF0 (IoGetAttachedDevice.c)
 *     RtlRaiseStatus @ 0x1402F1CB0 (RtlRaiseStatus.c)
 *     KeResetEvent @ 0x140344C50 (KeResetEvent.c)
 *     IoAllocateMdl @ 0x14035A110 (IoAllocateMdl.c)
 *     IopSetFileObjectExtensionFlag @ 0x1403618B0 (IopSetFileObjectExtensionFlag.c)
 *     IopDecrementCompletionContextUsageCount @ 0x1403F0594 (IopDecrementCompletionContextUsageCount.c)
 *     IopIncrementCompletionContextUsageCountAndReadData @ 0x1403F065C (IopIncrementCompletionContextUsageCountAndReadData.c)
 *     IopIsStandardFsctlIoControlCode @ 0x1403F0728 (IopIsStandardFsctlIoControlCode.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     IopExceptionCleanupEx @ 0x1405CDBA4 (IopExceptionCleanupEx.c)
 *     EtwTimLogProhibitFsctlSystemCalls @ 0x1405D0984 (EtwTimLogProhibitFsctlSystemCalls.c)
 *     IopWaitAndAcquireFileObjectLock @ 0x1406352D8 (IopWaitAndAcquireFileObjectLock.c)
 *     ObReferenceObjectByHandle @ 0x14063E2E0 (ObReferenceObjectByHandle.c)
 *     IopSynchronousServiceTail @ 0x14064C4A0 (IopSynchronousServiceTail.c)
 *     RtlIsSandboxedToken @ 0x140652B50 (RtlIsSandboxedToken.c)
 *     IopCopyOffloadCapable @ 0x140668744 (IopCopyOffloadCapable.c)
 *     IoSetIoCompletion @ 0x140693B60 (IoSetIoCompletion.c)
 *     ProbeForWrite @ 0x1406CD560 (ProbeForWrite.c)
 *     SeReleaseSubjectContext @ 0x1406CF6B0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x1406D0A20 (SeCaptureSubjectContextEx.c)
 *     IopAllocateIrpCleanup @ 0x140890EA4 (IopAllocateIrpCleanup.c)
 *     IopValidateJunctionTarget @ 0x140892F34 (IopValidateJunctionTarget.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 *     VfFastIoCheckState @ 0x1409C99C4 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1409C9A9C (VfFastIoSnapState.c)
 */

__int64 IopXxxControlFile(
        void *a1,
        void *a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6,
        char *Src,
        ...)
{
  unsigned int v8; // esi
  __int64 v9; // r14
  int v10; // ebx
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v12; // rdx
  __int64 v13; // rdx
  char v14; // bl
  char v15; // al
  char v16; // bl
  __int64 v17; // rcx
  ULONG v18; // r12d
  unsigned int v19; // r15d
  __int64 result; // rax
  int v21; // ebx
  ULONG_PTR v22; // rdi
  struct _DMA_ADAPTER *v23; // r13
  char v24; // al
  struct _KPROCESS *v25; // rax
  int v26; // eax
  _DWORD *v27; // rbx
  char v28; // si
  struct _KTHREAD *CurrentThread; // rax
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned int v32; // ebx
  PDEVICE_OBJECT AttachedDevice; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  _DWORD *v36; // r9
  PFAST_IO_DISPATCH FastIoDispatch; // rcx
  IRP *FastIoDeviceControl; // rsi
  char *v39; // rcx
  void *v40; // rbx
  char v41; // si
  _DWORD *v42; // rcx
  int v43; // r9d
  int v44; // eax
  int v45; // ecx
  IRP *v46; // rax
  IRP *v47; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  char v49; // dl
  unsigned int v50; // ebx
  POOL_TYPE v51; // ecx
  struct _IRP *v52; // rax
  PMDL Mdl; // rcx
  SIZE_T v54; // rdx
  struct _IRP *PoolWithQuota_0; // rax
  struct _DMA_ADAPTER *v56; // r8
  _DWORD *p_ThreadListEntry; // rax
  char v58; // [rsp+50h] [rbp-F8h]
  char v59; // [rsp+51h] [rbp-F7h]
  char IsSandboxedToken; // [rsp+52h] [rbp-F6h]
  char v61; // [rsp+53h] [rbp-F5h]
  _DWORD DmaAdapter[3]; // [rsp+54h] [rbp-F4h] BYREF
  unsigned int v63; // [rsp+60h] [rbp-E8h]
  PADAPTER_OBJECT v64; // [rsp+68h] [rbp-E0h]
  int v65; // [rsp+70h] [rbp-D8h]
  PVOID P; // [rsp+78h] [rbp-D0h] BYREF
  __int128 v67; // [rsp+80h] [rbp-C8h] BYREF
  PVOID v68; // [rsp+90h] [rbp-B8h]
  PDEVICE_OBJECT DeviceObject; // [rsp+98h] [rbp-B0h]
  PADAPTER_OBJECT v70; // [rsp+A0h] [rbp-A8h]
  PIRP Irp; // [rsp+A8h] [rbp-A0h]
  unsigned int v72; // [rsp+B0h] [rbp-98h]
  __int64 v73; // [rsp+B8h] [rbp-90h] BYREF
  PETHREAD Thread; // [rsp+C0h] [rbp-88h]
  struct _OBJECT_HANDLE_INFORMATION v75; // [rsp+C8h] [rbp-80h] BYREF
  PVOID Object; // [rsp+D0h] [rbp-78h] BYREF
  __int64 v77; // [rsp+D8h] [rbp-70h] BYREF
  _DWORD *v78; // [rsp+E0h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+E8h] [rbp-60h] BYREF
  __int64 v81; // [rsp+160h] [rbp+18h] BYREF
  void *v82; // [rsp+168h] [rbp+20h]
  size_t Size; // [rsp+188h] [rbp+40h] BYREF
  va_list Sizea; // [rsp+188h] [rbp+40h]
  char *Address; // [rsp+190h] [rbp+48h]
  SIZE_T Length; // [rsp+198h] [rbp+50h]
  __int64 v87; // [rsp+1A0h] [rbp+58h]
  va_list va1; // [rsp+1A8h] [rbp+60h] BYREF

  va_start(va1, Src);
  va_start(Sizea, Src);
  Size = va_arg(va1, _QWORD);
  Address = va_arg(va1, char *);
  Length = va_arg(va1, _QWORD);
  v87 = va_arg(va1, _QWORD);
  v82 = a4;
  v81 = a3;
  v8 = a6;
  v72 = a6;
  v9 = 0LL;
  *(_QWORD *)&DmaAdapter[1] = 0LL;
  v64 = 0LL;
  v75 = 0LL;
  v67 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v10 = a6 & 3;
  v63 = v10;
  Thread = KeGetCurrentThread();
  PreviousMode = Thread->PreviousMode;
  v58 = PreviousMode;
  if ( PreviousMode )
  {
    if ( !(_BYTE)v87 && !IopIsStandardFsctlIoControlCode(a6) )
    {
      v13 = *(_QWORD *)(v12 + 184);
      v14 = *(_DWORD *)(v13 + 2608);
      v15 = v14 & 4;
      v16 = v14 & 2;
      if ( v16 || v15 )
      {
        EtwTimLogProhibitFsctlSystemCalls((v16 != 0) + 1, v13);
        if ( v16 )
          return 3221225506LL;
      }
      v10 = v63;
    }
    v17 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v17 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v17 = *(_DWORD *)v17;
    if ( v10 )
    {
      v18 = Length;
    }
    else if ( Address )
    {
      v18 = Length;
      ProbeForWrite(Address, (unsigned int)Length, 1u);
    }
    else
    {
      v18 = 0;
      LODWORD(Length) = 0;
    }
    if ( v10 == 3 )
    {
      v19 = Size;
    }
    else if ( Src )
    {
      v19 = Size;
      if ( (_DWORD)Size
        && ((unsigned __int64)&Src[(unsigned int)Size] > 0x7FFFFFFF0000LL || &Src[(unsigned int)Size] < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    else
    {
      v19 = 0;
      LODWORD(Size) = 0;
    }
  }
  else
  {
    v18 = Length;
    v19 = Size;
  }
  result = IopReferenceFileObject(a1, 0, PreviousMode, (PVOID *)&DmaAdapter[1], &v75);
  v21 = result;
  if ( (int)result < 0 )
    return result;
  v22 = *(_QWORD *)&DmaAdapter[1];
  if ( *(_QWORD *)(*(_QWORD *)&DmaAdapter[1] + 176LL) && (v81 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&DmaAdapter[1]);
    return 3221225485LL;
  }
  if ( PreviousMode
    && (unsigned __int16)v8 >> 14
    && (((unsigned __int16)v8 >> 14) & v75.GrantedAccess) != (unsigned __int16)v8 >> 14 )
  {
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)&DmaAdapter[1]);
    return 3221225506LL;
  }
  if ( v8 == 606820 || v8 == 623208 )
  {
    v21 = IopCopyOffloadCapable(*(_QWORD *)&DmaAdapter[1], v8);
    if ( v21 < 0 )
      goto LABEL_38;
  }
  else if ( v8 == 590892 )
  {
    v21 = IopSetFileObjectExtensionFlag(*(__int64 *)&DmaAdapter[1], 16, 1);
    if ( v21 < 0 )
      goto LABEL_38;
  }
  if ( !a2 )
  {
    v23 = v64;
    v70 = v64;
    goto LABEL_44;
  }
  Object = 0LL;
  v21 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &Object, 0LL);
  v23 = (struct _DMA_ADAPTER *)Object;
  v70 = (PADAPTER_OBJECT)Object;
  v64 = (PADAPTER_OBJECT)Object;
  if ( v21 < 0 )
  {
LABEL_38:
    HalPutDmaAdapter((PADAPTER_OBJECT)v22);
    return (unsigned int)v21;
  }
  KeResetEvent((PRKEVENT)Object);
LABEL_44:
  v68 = 0LL;
  P = 0LL;
  IsSandboxedToken = 0;
  v61 = 0;
  v24 = v58;
  if ( v58 && (v8 == 589988 && v19 >= 4 || v8 == 590860 && v19 >= 0x24) )
  {
    v25 = IoThreadToProcess(Thread);
    SeCaptureSubjectContextEx(Thread, v25, &SubjectContext);
    IsSandboxedToken = RtlIsSandboxedToken(&SubjectContext);
    BYTE2(DmaAdapter[0]) = IsSandboxedToken;
    SeReleaseSubjectContext(&SubjectContext);
    if ( IsSandboxedToken )
    {
      v65 = 0;
      v26 = v8 == 590860 ? *((_DWORD *)Src + 8) : *(_DWORD *)Src;
      v65 = v26;
      if ( v21 < 0 )
        goto LABEL_57;
      if ( v26 == -1610612733 )
      {
        v61 = 1;
        v21 = IopValidateJunctionTarget(v8, Src, v19, v18, &P, (size_t *)Sizea);
        v19 = Size;
        v68 = P;
      }
      if ( v21 < 0 )
      {
LABEL_57:
        if ( v23 )
          HalPutDmaAdapter(v23);
        goto LABEL_38;
      }
    }
    v24 = v58;
  }
  v27 = (_DWORD *)(v22 + 80);
  v78 = (_DWORD *)(v22 + 80);
  if ( (*(_DWORD *)(v22 + 80) & 2) != 0 )
  {
    v28 = (*(_DWORD *)(v22 + 80) & 4) != 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v30 = *(_QWORD *)&DmaAdapter[1];
    v31 = KeAbPreAcquire(*(_QWORD *)&DmaAdapter[1] + 128LL, 0LL, 0);
    LOBYTE(DmaAdapter[0]) = 0;
    if ( _InterlockedExchange((volatile __int32 *)(v30 + 116), 1) )
    {
      v22 = *(_QWORD *)&DmaAdapter[1];
      v32 = IopWaitAndAcquireFileObjectLock(*(volatile signed __int32 **)&DmaAdapter[1], v58, v28, v31, DmaAdapter);
    }
    else
    {
      if ( v31 )
        *(_BYTE *)(v31 + 26) |= 1u;
      v22 = *(_QWORD *)&DmaAdapter[1];
      ObfReferenceObject(*(PVOID *)&DmaAdapter[1]);
      v32 = 0;
    }
    if ( LOBYTE(DmaAdapter[0]) )
    {
      if ( v64 )
        HalPutDmaAdapter(v64);
      if ( P )
        ExFreePoolWithTag(P, 0);
      HalPutDmaAdapter((PADAPTER_OBJECT)v22);
      return v32;
    }
    v59 = 1;
    v18 = Length;
    v19 = Size;
    v23 = v64;
    v70 = v64;
    v68 = P;
    v27 = v78;
  }
  else
  {
    v59 = 0;
    if ( v24 )
      IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)&a5, &v81, 0);
  }
  if ( (*v27 & 0x800) != 0 )
    AttachedDevice = IoGetAttachedDevice(*(PDEVICE_OBJECT *)(v22 + 8));
  else
    AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)v22);
  DeviceObject = AttachedDevice;
  if ( (_BYTE)v87 )
  {
    if ( !IsSandboxedToken )
    {
      FastIoDispatch = AttachedDevice->DriverObject->FastIoDispatch;
      if ( FastIoDispatch )
      {
        FastIoDeviceControl = (IRP *)FastIoDispatch->FastIoDeviceControl;
        Irp = FastIoDeviceControl;
        if ( FastIoDeviceControl )
        {
          if ( v58 && Address )
          {
            if ( v63 == 1 )
            {
              if ( v18 )
              {
                v39 = &Address[v18];
                if ( (unsigned __int64)v39 > 0x7FFFFFFF0000LL || v39 < Address )
                  MEMORY[0x7FFFFFFF0000] = 0;
              }
            }
            else if ( v63 == 2 )
            {
              ProbeForWrite(Address, v18, 1u);
            }
          }
          if ( a6 == 589856 )
          {
            _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
            v18 = Length;
            v19 = Size;
            v22 = *(_QWORD *)&DmaAdapter[1];
            v23 = v64;
            v70 = v64;
            v68 = P;
          }
          if ( (MmVerifierData & 0x10) != 0 )
            v40 = (void *)VfFastIoSnapState();
          else
            v40 = 0LL;
          LOBYTE(v34) = 1;
          v41 = ((__int64 (__fastcall *)(ULONG_PTR, __int64, char *, _QWORD, char *, ULONG, unsigned int, __int128 *, PDEVICE_OBJECT))FastIoDeviceControl)(
                  v22,
                  v34,
                  Src,
                  v19,
                  Address,
                  v18,
                  a6,
                  &v67,
                  DeviceObject);
          if ( v40 )
            VfFastIoCheckState(v40);
          if ( v41 )
          {
            v73 = 0LL;
            v77 = 0LL;
            BYTE1(DmaAdapter[0]) = 0;
            if ( (v81 & 1) != 0 )
            {
              v42 = (_DWORD *)a5;
              *(_DWORD *)(a5 + 4) = DWORD2(v67);
              *v42 = v67;
            }
            else
            {
              *(_OWORD *)a5 = v67;
            }
            v43 = v67;
            if ( *(_QWORD *)(v22 + 176)
              && ((*(_DWORD *)(v22 + 80) & 0x2000000) == 0 || (v67 & 0xC0000000) == 0x80000000)
              && (v67 & 0xC0000000) != 0xC0000000 )
            {
              IopIncrementCompletionContextUsageCountAndReadData(v22, (_BYTE *)DmaAdapter + 1, &v73, &v77);
              v43 = v67;
              v9 = v73;
            }
            if ( a2 )
            {
              if ( (*(_DWORD *)(v22 + 80) & 0x8000000) == 0 || v9 && (v43 & 0xC0000000) == 0x80000000 )
                KeSetEvent((PRKEVENT)v23, 0, 0);
              HalPutDmaAdapter(v23);
              v43 = v67;
            }
            if ( v59 )
            {
              IopReleaseFileObjectLock((PADAPTER_OBJECT)v22);
              v43 = v67;
            }
            if ( v9 && v82 )
            {
              v44 = IoSetIoCompletion(v9, v77, (_DWORD)v82, v43, *((__int64 *)&v67 + 1), 1);
              v45 = v67;
              if ( v44 < 0 )
                v45 = -1073741670;
              if ( (v45 & 0xC0000000) == 0x80000000 )
                v45 = 259;
              LODWORD(v67) = v45;
            }
            if ( BYTE1(DmaAdapter[0]) )
              IopDecrementCompletionContextUsageCount(v22);
            HalPutDmaAdapter((PADAPTER_OBJECT)v22);
            return (unsigned int)v67;
          }
        }
      }
    }
  }
  IopResetEvent(v22, v34, v35, v36);
  v46 = (IRP *)IopAllocateIrpExReturn();
  v47 = v46;
  Irp = v46;
  if ( v46 )
  {
    v46->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)v22;
    v46->Tail.Overlay.Thread = Thread;
    v46->Tail.Overlay.AuxiliaryBuffer = 0LL;
    v46->RequestorMode = v58;
    v46->PendingReturned = 0;
    v46->Cancel = 0;
    v46->CancelRoutine = 0LL;
    v46->UserEvent = (PKEVENT)v23;
    v46->UserIosb = (PIO_STATUS_BLOCK)a5;
    v46->Overlay.AllocationSize.QuadPart = v81;
    v46->Overlay.AsynchronousParameters.UserApcContext = v82;
    CurrentStackLocation = v46->Tail.Overlay.CurrentStackLocation;
    v49 = v87;
    *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = ((_BYTE)v87 != 0) + 13;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)v22;
    CurrentStackLocation[-1].Parameters.Read.Length = v18;
    CurrentStackLocation[-1].Parameters.Create.Options = v19;
    v50 = a6;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = a6;
    v51 = NonPagedPoolNxCacheAligned;
    if ( !v49 )
      v51 = NonPagedPoolNx;
    v46->MdlAddress = 0LL;
    v46->AssociatedIrp.MasterIrp = 0LL;
    if ( (DeviceObject->Flags & 0x80000) != 0 && !IsSandboxedToken )
      goto LABEL_137;
    if ( !v63 )
    {
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( v19 || v18 )
      {
        if ( v68 )
        {
          v46->AssociatedIrp.MasterIrp = (struct _IRP *)v68;
        }
        else
        {
          v54 = v18;
          if ( v19 > v18 )
            v54 = v19;
          PoolWithQuota_0 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v51, v54);
          v47->AssociatedIrp.MasterIrp = PoolWithQuota_0;
          if ( Src )
            memmove(PoolWithQuota_0, Src, v19);
        }
        v47->Flags = 48;
        v47->UserBuffer = Address;
        if ( v18 )
          v47->Flags = 112;
      }
      else
      {
        v46->Flags = 0;
        v46->UserBuffer = 0LL;
      }
      if ( !IopDisableBufferedIoInit && v19 < v18 )
        memset((char *)v47->AssociatedIrp.MasterIrp + v19, 0, v18 - v19);
      goto LABEL_159;
    }
    if ( v63 <= 2 )
    {
      v46->Flags = 0;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
      if ( v19 && Src )
      {
        v52 = (struct _IRP *)IopVerifierExAllocatePoolWithQuota_0(v51, v19);
        v47->AssociatedIrp.MasterIrp = v52;
        memmove(v52, Src, v19);
        v47->Flags = 48;
        v50 = a6;
      }
      if ( v18 )
      {
        Mdl = IoAllocateMdl(Address, v18, 0, 1u, v47);
        v47->MdlAddress = Mdl;
        if ( !Mdl )
          RtlRaiseStatus(-1073741670);
        LOBYTE(v9) = v63 != 1;
        IopProbeAndLockPages(
          (__int64)Mdl,
          v58,
          v9,
          (__int64)DeviceObject,
          *(_DWORD *)&CurrentStackLocation[-1].MajorFunction);
      }
      goto LABEL_159;
    }
    if ( v63 == 3 )
    {
LABEL_137:
      v46->Flags = 0;
      v46->UserBuffer = Address;
      CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = (PNAMED_PIPE_CREATE_PARAMETERS)Src;
    }
LABEL_159:
    CurrentStackLocation[-1].Flags |= v75.GrantedAccess & 1 | (unsigned __int8)(2 * (v75.GrantedAccess & 2));
    if ( !(_BYTE)v87 )
      v47->Flags |= 0x800u;
    if ( v50 == 589856 )
    {
      _InterlockedIncrement((volatile signed __int32 *)0xFFFFF780000002DCLL);
      v22 = *(_QWORD *)&DmaAdapter[1];
      v56 = v64;
    }
    else
    {
      v56 = v70;
    }
    if ( !IsSandboxedToken || v61 )
      return IopSynchronousServiceTail(DeviceObject, v47, v58, v59, 2);
    p_ThreadListEntry = &v47->AssociatedIrp.MasterIrp->ThreadListEntry;
    if ( v72 != 590860 )
      p_ThreadListEntry = &v47->AssociatedIrp.MasterIrp->Type;
    if ( *p_ThreadListEntry != -1610612733 )
      return IopSynchronousServiceTail(DeviceObject, v47, v58, v59, 2);
    IopExceptionCleanupEx((PADAPTER_OBJECT)v22, v47, v56, 0LL, (*v78 & 2) != 0);
    return 3221225485LL;
  }
  IopAllocateIrpCleanup((PADAPTER_OBJECT)v22, v23);
  if ( v68 )
    ExFreePoolWithTag(v68, 0);
  return 3221225626LL;
}
