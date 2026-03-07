__int64 __fastcall IopReadFile(
        struct _FILE_OBJECT *Object,
        HANDLE Handle,
        __int64 a3,
        void *a4,
        struct _IO_STATUS_BLOCK *a5,
        struct _IRP *VirtualAddress,
        ULONG Length,
        __int64 a8,
        ULONG *a9,
        PVOID a10,
        struct _IO_STATUS_BLOCK *a11,
        int a12,
        PMDL *a13,
        _OWORD *a14)
{
  IRP *v16; // r15
  char v17; // di
  ULONG v18; // r12d
  ULONG *p_Flags; // rdi
  bool v20; // r14
  __int64 v21; // r8
  PDEVICE_OBJECT RelatedDeviceObject; // r9
  __int64 v23; // rcx
  _KPROCESS *Process; // rcx
  __int64 v25; // rax
  bool v26; // zf
  struct _IRP *v27; // r12
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rax
  int v33; // ebx
  __int16 v34; // ax
  __int64 Status; // rcx
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  bool v37; // bl
  __int64 Irp; // rax
  struct _IO_STATUS_BLOCK *v39; // rax
  PVOID v40; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _DEVICE_OBJECT *v42; // rdi
  ULONG Flags; // eax
  PVOID *p_UserBuffer; // r8
  ULONG v45; // r13d
  int v46; // ecx
  unsigned __int8 v47; // dl
  _DWORD *FileObjectExtension; // rax
  char v50; // bl
  struct _KTHREAD *v51; // rax
  __int64 v52; // r9
  __int64 v53; // r9
  __int64 (__fastcall *FastIoRead)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD); // r14
  PDEVICE_OBJECT v55; // rbx
  void *v56; // rdi
  char v57; // bl
  struct _KTHREAD *v58; // rax
  struct _KTHREAD *v59; // rcx
  unsigned __int64 v60; // rax
  PVOID v61; // rbx
  unsigned int SectorSize; // ecx
  int v63; // edx
  ULONG v64; // eax
  __int64 Pool2; // rax
  struct _MDL *Mdl; // rax
  KPROCESSOR_MODE v67; // dl
  bool v68; // [rsp+50h] [rbp-A8h]
  KPROCESSOR_MODE PreviousMode; // [rsp+51h] [rbp-A7h]
  bool v70; // [rsp+52h] [rbp-A6h]
  char v71; // [rsp+54h] [rbp-A4h] BYREF
  char v72; // [rsp+55h] [rbp-A3h]
  char v73; // [rsp+56h] [rbp-A2h]
  int v74; // [rsp+58h] [rbp-A0h]
  PVOID v75; // [rsp+60h] [rbp-98h]
  LARGE_INTEGER CurrentByteOffset; // [rsp+68h] [rbp-90h] BYREF
  ULONG v77; // [rsp+70h] [rbp-88h]
  PDEVICE_OBJECT v78; // [rsp+78h] [rbp-80h]
  __int64 v79; // [rsp+80h] [rbp-78h]
  int v80; // [rsp+88h] [rbp-70h]
  __int128 v81; // [rsp+90h] [rbp-68h] BYREF
  PVOID v82[2]; // [rsp+A0h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-48h]
  struct _KTHREAD *v84; // [rsp+B8h] [rbp-40h]
  __int64 v85; // [rsp+110h] [rbp+18h]

  v85 = a3;
  v16 = 0LL;
  v79 = 0LL;
  v74 = 0;
  v17 = 0;
  v75 = 0LL;
  v77 = 0;
  CurrentByteOffset.QuadPart = 0LL;
  v72 = 1;
  if ( a10 && (a3 || Handle || Object->CompletionContext) )
  {
    v33 = -1073741811;
    v27 = VirtualAddress;
    goto LABEL_61;
  }
  if ( a13 && *a13 )
  {
    v18 = Length;
    if ( (*a13)->ByteCount < Length )
    {
      v33 = -1073741811;
      v27 = VirtualAddress;
      goto LABEL_61;
    }
  }
  else
  {
    v18 = Length;
  }
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  p_Flags = &Object->Flags;
  v82[1] = &Object->Flags;
  v20 = a12 >= 0 && (Object->Flags & 2) != 0;
  v70 = v20;
  v68 = v20;
  v80 = a12 & 0x40000000;
  v73 = (a12 & 0x40000000) == 0;
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v78 = RelatedDeviceObject;
  if ( !PreviousMode || a10 )
  {
    v31 = a8;
    if ( a8 )
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    v27 = VirtualAddress;
    if ( a9 )
      v77 = *a9;
  }
  else
  {
    v23 = (__int64)a5;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v23 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v23 = *(_DWORD *)v23;
    v84 = KeGetCurrentThread();
    Process = v84->ApcState.Process;
    if ( Process[1].Affinity.StaticBitmap[30] )
    {
      v34 = WORD2(Process[2].Affinity.StaticBitmap[20]);
      if ( (v34 == 332 || v34 == 452) && !v20 )
      {
        Status = (unsigned int)a5->Status;
        *(_DWORD *)Status = *(_DWORD *)Status;
        a5 = (struct _IO_STATUS_BLOCK *)Status;
        v85 |= 1uLL;
      }
    }
    if ( a14 )
    {
      v27 = VirtualAddress;
    }
    else
    {
      v25 = v18;
      v26 = v18 == 0;
      v27 = VirtualAddress;
      if ( !v26 )
      {
        v28 = (unsigned __int64)VirtualAddress;
        v29 = (unsigned __int64)VirtualAddress + v25 - 1;
        if ( (unsigned __int64)VirtualAddress > v29 || v29 >= 0x7FFFFFFF0000LL )
          ExRaiseAccessViolation();
        v30 = (v29 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        do
        {
          *(_BYTE *)v28 = *(_BYTE *)v28;
          v28 = (v28 & 0xFFFFFFFFFFFFF000uLL) + 4096;
        }
        while ( v28 != v30 );
      }
    }
    if ( Object->CompletionContext && (v85 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v74 = -1073741811;
      v17 = v20;
      v33 = -1073741811;
      goto LABEL_61;
    }
    v31 = a8;
    if ( a8 )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      CurrentByteOffset = *(LARGE_INTEGER *)a8;
    }
    v32 = (__int64)a9;
    if ( a9 )
    {
      if ( (unsigned __int64)a9 >= 0x7FFFFFFF0000LL )
        v32 = 0x7FFFFFFF0000LL;
      v77 = *(_DWORD *)v32;
    }
  }
  if ( !PreviousMode || (*p_Flags & 8) == 0 )
    goto LABEL_36;
  SectorSize = RelatedDeviceObject->SectorSize;
  v63 = SectorSize - 1;
  if ( (_WORD)SectorSize )
  {
    v64 = Length;
    if ( (v63 & Length) != 0 )
      goto LABEL_127;
  }
  if ( (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v27) != 0 )
  {
    v64 = Length;
LABEL_127:
    if ( (_WORD)SectorSize && v64 % SectorSize || (RelatedDeviceObject->AlignmentRequirement & (unsigned int)v27) != 0 )
      goto LABEL_131;
    v63 = SectorSize - 1;
  }
  if ( v31 && (_WORD)SectorSize && (v63 & CurrentByteOffset.LowPart) != 0 )
  {
    v33 = -1073741811;
    goto LABEL_60;
  }
LABEL_36:
  if ( Handle )
  {
    v82[0] = 0LL;
    v33 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, v82, 0LL);
    v75 = v82[0];
    v74 = v33;
    v17 = v68;
    if ( v33 < 0 )
      goto LABEL_61;
    KeResetEvent((PRKEVENT)v82[0]);
    RelatedDeviceObject = v78;
  }
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  v37 = v70;
  if ( !v70 )
  {
    if ( !v31 && (Object->Flags & 0x280) == 0 )
    {
      if ( v75 )
      {
        ObfDereferenceObject(v75);
        v33 = -1073741811;
        goto LABEL_60;
      }
      goto LABEL_131;
    }
LABEL_39:
    if ( CurrentByteOffset.HighPart >= 0 )
    {
      if ( !a10 && (Object->Flags & 0x4000000) == 0 )
      {
        KeResetEvent(&Object->Event);
        RelatedDeviceObject = v78;
      }
      LOBYTE(v21) = !v70;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, (unsigned __int8)RelatedDeviceObject->StackSize, v21);
      v16 = (IRP *)Irp;
      v79 = Irp;
      if ( !Irp )
      {
        if ( v75 )
          ObfDereferenceObject(v75);
        if ( v70 )
          IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
        v33 = -1073741670;
        goto LABEL_60;
      }
      *(_QWORD *)(Irp + 192) = Object;
      *(_QWORD *)(Irp + 152) = CurrentThread;
      *(_QWORD *)(Irp + 160) = 0LL;
      *(_BYTE *)(Irp + 64) = PreviousMode;
      *(_BYTE *)(Irp + 65) = 0;
      *(_BYTE *)(Irp + 68) = 0;
      *(_QWORD *)(Irp + 104) = 0LL;
      *(_DWORD *)(Irp + 16) = 0;
      *(_QWORD *)(Irp + 80) = v75;
      if ( a10 )
      {
        ObfReferenceObjectWithTag(a10, 0x49526F49u);
        v16->Flags |= 0x200000u;
        v39 = a11;
        v40 = a10;
      }
      else
      {
        *(_QWORD *)(Irp + 88) = v85;
        v39 = a5;
        v40 = a4;
      }
      v16->Overlay.AsynchronousParameters.UserApcContext = v40;
      v16->UserIosb = v39;
      CurrentStackLocation = v16->Tail.Overlay.CurrentStackLocation;
      *(_DWORD *)&CurrentStackLocation[-1].MajorFunction = 3;
      CurrentStackLocation[-1].FileObject = Object;
      v16->AssociatedIrp.MasterIrp = 0LL;
      v16->MdlAddress = 0LL;
      v42 = v78;
      Flags = v78->Flags;
      if ( (Flags & 4) != 0 )
      {
        v45 = Length;
        if ( Length )
        {
          if ( a14 )
          {
            v16->AssociatedIrp.MasterIrp = v27;
            v16->Flags |= 0x50u;
          }
          else
          {
            Pool2 = ExAllocatePool2(73LL, Length, 1112764233LL);
            v16->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
            if ( !Pool2 )
            {
              v33 = -1073741670;
              goto LABEL_60;
            }
            v16->Flags |= 0x70u;
          }
          p_UserBuffer = &v16->UserBuffer;
          v16->UserBuffer = v27;
          goto LABEL_50;
        }
        v16->Flags |= 0x50u;
      }
      else
      {
        if ( (Flags & 0x10) == 0 )
        {
          v16->UserBuffer = v27;
          p_UserBuffer = &v16->UserBuffer;
          if ( a13 && (p_UserBuffer = &v16->UserBuffer, *a13) )
          {
            v16->MdlAddress = *a13;
            *a13 = 0LL;
            p_UserBuffer = &v16->UserBuffer;
            v45 = Length;
            if ( a10 )
            {
              v16->Overlay.AsynchronousParameters.UserApcContext = (PVOID)((unsigned __int64)v16->Overlay.AsynchronousParameters.UserApcContext | 1);
              p_UserBuffer = &v16->UserBuffer;
            }
          }
          else
          {
            v45 = Length;
          }
          goto LABEL_50;
        }
        v45 = Length;
        if ( Length )
        {
          Mdl = IoAllocateMdl(v27, Length, 0, 1u, v16);
          if ( !Mdl )
            RtlRaiseStatus(-1073741670);
          if ( a14 )
            v67 = 0;
          else
            v67 = PreviousMode;
          MmProbeAndLockPages(Mdl, v67, IoWriteAccess);
        }
      }
      p_UserBuffer = &v16->UserBuffer;
LABEL_50:
      v46 = v16->Flags | 0x100;
      v16->Flags = v46;
      if ( (Object->Flags & 8) != 0 )
      {
        v46 |= 1u;
        v16->Flags = v46;
      }
      if ( !v80 )
        v16->Flags = v46 | 0x800;
      if ( a14 )
      {
        v16->RequestorMode = 0;
        *p_UserBuffer = v27;
        v33 = IopSetCopyInformationExtension((__int64)v16, a14);
        v47 = v68;
        v17 = v68;
        if ( v33 < 0 )
          goto LABEL_61;
        v42 = v78;
      }
      else
      {
        v47 = v68;
      }
      CurrentStackLocation[-1].Parameters.Read.Length = v45;
      CurrentStackLocation[-1].Parameters.Create.Options = v77;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset = CurrentByteOffset;
      FileObjectExtension = Object->FileObjectExtension;
      if ( FileObjectExtension && (*FileObjectExtension & 0x10) != 0 )
        CurrentStackLocation[-1].Parameters.Read.Flags = a5->Information;
      v33 = IopSynchronousServiceTail(v42, (__int64)v16, (__int64)Object, v73, PreviousMode, v47, 0);
      v72 = 0;
LABEL_60:
      v17 = v68;
      goto LABEL_61;
    }
    if ( v75 )
      ObfDereferenceObject(v75);
    if ( v37 )
    {
LABEL_151:
      IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
      v33 = -1073741811;
      goto LABEL_60;
    }
LABEL_131:
    v33 = -1073741811;
    goto LABEL_60;
  }
  v50 = (Object->Flags & 4) != 0;
  v51 = KeGetCurrentThread();
  --v51->KernelApcDisable;
  v52 = KeAbPreAcquire((__int64)&Object->Lock, 0LL);
  v71 = 0;
  if ( _InterlockedExchange((volatile __int32 *)&Object->Busy, 1) )
  {
    v33 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&Object->Type, PreviousMode, v50, v52, &v71);
  }
  else
  {
    if ( v52 )
      *(_BYTE *)(v52 + 18) = 1;
    ObfReferenceObject(Object);
    v33 = 0;
  }
  v74 = v33;
  if ( v71 )
  {
    if ( v75 )
      ObfDereferenceObject(v75);
    goto LABEL_60;
  }
  if ( !v31 || CurrentByteOffset.QuadPart == -2 )
    CurrentByteOffset = Object->CurrentByteOffset;
  if ( !Object->PrivateCacheMap || a14 )
    goto LABEL_95;
  v81 = 0LL;
  FastIoRead = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoRead;
  if ( CurrentByteOffset.HighPart < 0 )
  {
    if ( v75 )
      ObfDereferenceObject(v75);
    goto LABEL_151;
  }
  v55 = v78;
  if ( (MmVerifierData & 0x10) != 0 && MmIsDriverVerifying(v78->DriverObject) )
    v56 = (void *)VfFastIoSnapState();
  else
    v56 = 0LL;
  LOBYTE(v53) = 1;
  v57 = FastIoRead(Object, &CurrentByteOffset, Length, v53, v77, v27, &v81, v55);
  if ( v56 )
    VfFastIoCheckState(v56);
  if ( !v57 || (_DWORD)v81 && (_DWORD)v81 != -1073741807 && (_DWORD)v81 != -2147483643 )
  {
LABEL_95:
    v37 = v70;
    RelatedDeviceObject = v78;
    goto LABEL_39;
  }
  v58 = KeGetCurrentThread();
  ++v58->ReadOperationCount;
  __incgsdword(0x2EDCu);
  v59 = KeGetCurrentThread();
  v60 = DWORD2(v81);
  v59->ReadTransferCount += DWORD2(v81);
  __addgsqword(0x2EE8u, v60);
  *(_OWORD *)&a5->Status = v81;
  v61 = v75;
  v17 = v68;
  if ( Handle )
  {
    if ( (Object->Flags & 0x8000000) == 0 )
      KeSetEvent((PRKEVENT)v75, 0, 0);
    ObfDereferenceObject(v61);
  }
  IopReleaseFileObjectLock((volatile __int32 *)&Object->Type);
  v33 = v81;
LABEL_61:
  if ( v72 )
  {
    if ( a14 )
      IopFreeCopyObjectsFromDataBuffer((__int64)v27, 1);
    if ( v16 )
      IopExceptionCleanupEx(Object, v16, v75, 0LL, v17);
    else
      ObfDereferenceObject(Object);
  }
  return (unsigned int)v33;
}
