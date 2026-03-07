NTSTATUS __stdcall NtQueryQuotaInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        PVOID SidList,
        ULONG SidListLength,
        PSID StartSid,
        BOOLEAN RestartScan)
{
  HANDLE v11; // r12
  struct _KTHREAD *CurrentThread; // rdx
  KPROCESSOR_MODE PreviousMode; // r15
  __int64 v14; // rcx
  _KPROCESS *Process; // rax
  __int16 v16; // ax
  bool v17; // zf
  char v18; // al
  ULONG v19; // r8d
  PSID v20; // r13
  __int64 v21; // rax
  unsigned int v22; // r15d
  char *v23; // rcx
  ULONG v24; // r14d
  ULONG v25; // ecx
  NTSTATUS result; // eax
  unsigned int *Pool2; // rbx
  unsigned int *v28; // rax
  PSID v29; // rax
  NTSTATUS v30; // esi
  struct _FILE_OBJECT *v31; // r15
  _DWORD *v32; // r12
  char v33; // si
  struct _KTHREAD *v34; // rax
  volatile __int32 *v35; // rbx
  __int64 v36; // r9
  NTSTATUS v37; // ebx
  struct _KEVENT *v38; // rax
  __int64 v39; // rdx
  IRP *v40; // rax
  IRP *Irp; // rsi
  ULONG *p_Flags; // rax
  PIO_STATUS_BLOCK v43; // rcx
  struct _KEVENT *v44; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _DEVICE_OBJECT *v46; // r14
  ULONG Flags; // eax
  __int64 v48; // rax
  ULONG v49; // ebx
  PMDL Mdl; // rcx
  __int64 v51; // r8
  char v52; // al
  unsigned __int8 v53; // [rsp+40h] [rbp-A8h]
  char v54; // [rsp+41h] [rbp-A7h]
  char v55; // [rsp+42h] [rbp-A6h]
  _BYTE v56[13]; // [rsp+43h] [rbp-A5h] BYREF
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  PVOID P; // [rsp+58h] [rbp-90h]
  unsigned int *v59; // [rsp+60h] [rbp-88h]
  PSID Sid; // [rsp+68h] [rbp-80h]
  ULONG *v61; // [rsp+70h] [rbp-78h] BYREF
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+78h] [rbp-70h]
  struct _KTHREAD *v63; // [rsp+80h] [rbp-68h]
  _DWORD *v64; // [rsp+88h] [rbp-60h]
  PIRP v65; // [rsp+90h] [rbp-58h]
  unsigned int v66[20]; // [rsp+98h] [rbp-50h] BYREF

  v11 = FileHandle;
  Object = 0LL;
  P = 0LL;
  *(_QWORD *)&v56[5] = 0LL;
  LODWORD(RelatedDeviceObject) = 0;
  Sid = 0LL;
  v59 = 0LL;
  *(_OWORD *)v66 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v63 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  v54 = PreviousMode;
  if ( PreviousMode )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)IoStatusBlock < 0x7FFFFFFF0000LL )
      v14 = (__int64)IoStatusBlock;
    *(_DWORD *)v14 = *(_DWORD *)v14;
    Process = CurrentThread->ApcState.Process;
    if ( !Process[1].Affinity.StaticBitmap[30] )
      goto LABEL_9;
    v16 = WORD2(Process[2].Affinity.StaticBitmap[20]);
    if ( v16 == 332 || (v17 = v16 == 452, v18 = 0, v17) )
      v18 = 1;
    v56[1] = v18;
    v19 = 4;
    if ( !v18 )
LABEL_9:
      v19 = 8;
    ProbeForWrite(Buffer, Length, v19);
    v20 = StartSid;
    if ( StartSid )
    {
      v21 = (__int64)StartSid + 1;
      if ( (unsigned __int64)StartSid + 1 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      v55 = *(_BYTE *)v21;
      v22 = 4 * *(unsigned __int8 *)v21 + 8;
      LODWORD(RelatedDeviceObject) = v22;
      if ( ((unsigned __int8)StartSid & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v23 = (char *)StartSid + v22;
      if ( (unsigned __int64)v23 > 0x7FFFFFFF0000LL || v23 < StartSid )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v55 = 0;
      v22 = (unsigned int)RelatedDeviceObject;
    }
    if ( SidList && (v24 = SidListLength) != 0 )
    {
      if ( ((unsigned __int8)SidList & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)SidList + SidListLength > 0x7FFFFFFF0000LL || (char *)SidList + SidListLength < SidList )
        MEMORY[0x7FFFFFFF0000] = 0;
      v25 = (SidListLength + 3) & 0xFFFFFFFC;
      if ( v25 > ~v22 )
        return -1073741811;
      if ( v25 < SidListLength )
        return -1073741811;
      Pool2 = (unsigned int *)ExAllocatePool2(97LL, v25 + v22, 1934847817LL);
      *(_QWORD *)&v56[5] = Pool2;
      v59 = Pool2;
      memmove(Pool2, SidList, SidListLength);
    }
    else
    {
      v24 = 0;
      SidListLength = 0;
      if ( StartSid )
      {
        Pool2 = (unsigned int *)ExAllocatePool2(289LL, v22, 1934847817LL);
        *(_QWORD *)&v56[5] = Pool2;
      }
      else
      {
        Pool2 = *(unsigned int **)&v56[5];
      }
    }
    if ( StartSid )
    {
      Sid = (char *)Pool2 + ((v24 + 3) & 0xFFFFFFFC);
      memmove(Sid, StartSid, v22);
      *((_BYTE *)Sid + 1) = v55;
    }
    PreviousMode = v54;
    v11 = FileHandle;
  }
  else
  {
    v24 = SidListLength;
    if ( SidList )
    {
      v28 = v59;
      if ( SidListLength )
        v28 = (unsigned int *)SidList;
      v59 = v28;
    }
    v29 = Sid;
    v20 = StartSid;
    if ( StartSid )
      v29 = StartSid;
    Sid = v29;
    Pool2 = *(unsigned int **)&v56[5];
  }
  if ( v59 )
  {
    v61 = 0LL;
    v30 = IopCheckGetQuotaBufferValidity(v59, v24, &v61);
    if ( v30 < 0 )
    {
      IoStatusBlock->Information = (ULONG_PTR)v61;
LABEL_47:
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      return v30;
    }
  }
  if ( Sid && !RtlValidSid(Sid) )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return -1073741704;
  }
  v30 = IopReferenceFileObject(v11, 0, PreviousMode, &Object, 0LL);
  if ( v30 < 0 )
    goto LABEL_47;
  v31 = (struct _FILE_OBJECT *)Object;
  v32 = (char *)Object + 80;
  v64 = (char *)Object + 80;
  if ( (*((_DWORD *)Object + 20) & 2) != 0 )
  {
    v33 = (*((_DWORD *)Object + 20) & 4) != 0;
    v34 = KeGetCurrentThread();
    --v34->KernelApcDisable;
    v35 = (volatile __int32 *)Object;
    v36 = KeAbPreAcquire((__int64)Object + 128, 0LL);
    v56[0] = 0;
    if ( _InterlockedExchange(v35 + 29, 1) )
    {
      v31 = (struct _FILE_OBJECT *)Object;
      v37 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v54, v33, v36, v56);
    }
    else
    {
      if ( v36 )
        *(_BYTE *)(v36 + 18) = 1;
      v31 = (struct _FILE_OBJECT *)Object;
      ObfReferenceObject(Object);
      v37 = 0;
    }
    if ( v56[0] )
    {
      if ( *(_QWORD *)&v56[5] )
        ExFreePoolWithTag(*(PVOID *)&v56[5], 0);
LABEL_70:
      ObfDereferenceObject(v31);
      return v37;
    }
    v53 = 1;
    v24 = SidListLength;
    Pool2 = *(unsigned int **)&v56[5];
  }
  else
  {
    v38 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
    P = v38;
    if ( !v38 )
    {
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0);
      v37 = -1073741670;
      goto LABEL_70;
    }
    KeInitializeEvent(v38, SynchronizationEvent, 0);
    v53 = 0;
  }
  if ( (*v32 & 0x4000000) == 0 )
    KeResetEvent(&v31->Event);
  RelatedDeviceObject = IoGetRelatedDeviceObject(v31);
  LOBYTE(v39) = RelatedDeviceObject->StackSize;
  v40 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v39, 0LL);
  Irp = v40;
  v65 = v40;
  if ( !v40 )
  {
    if ( (*v32 & 2) == 0 )
      ExFreePoolWithTag(P, 0);
    IopAllocateIrpCleanup((volatile __int32 *)&v31->Type, 0LL);
    goto LABEL_85;
  }
  v40->Tail.Overlay.OriginalFileObject = v31;
  v40->Tail.Overlay.Thread = v63;
  v40->RequestorMode = v54;
  p_Flags = &v40->Flags;
  v61 = &Irp->Flags;
  if ( v53 )
  {
    v43 = IoStatusBlock;
    v44 = 0LL;
  }
  else
  {
    *p_Flags = 4;
    v43 = (PIO_STATUS_BLOCK)v66;
    v44 = (struct _KEVENT *)P;
    v61 = &Irp->Flags;
  }
  Irp->UserEvent = v44;
  Irp->UserIosb = v43;
  Irp->Overlay.AllocationSize.QuadPart = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MajorFunction = 25;
  CurrentStackLocation[-1].FileObject = v31;
  Irp->Tail.Overlay.AuxiliaryBuffer = (PCHAR)Pool2;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)v59;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v24;
  v46 = RelatedDeviceObject;
  Flags = RelatedDeviceObject->Flags;
  if ( (Flags & 4) != 0 )
  {
    if ( Length )
    {
      v48 = ExAllocatePool2(65LL, Length, 1112764233LL);
      Irp->AssociatedIrp.MasterIrp = (struct _IRP *)v48;
      if ( !v48 )
      {
        IopExceptionCleanupEx((volatile __int32 *)&v31->Type, Irp, 0LL, P, (*v64 & 2) != 0);
LABEL_85:
        if ( Pool2 )
          ExFreePoolWithTag(Pool2, 0);
        return -1073741670;
      }
      *v61 |= 0x70u;
    }
    else
    {
      Irp->AssociatedIrp.MasterIrp = 0LL;
    }
  }
  else if ( (Flags & 0x10) != 0 )
  {
    v49 = Length;
    if ( Length )
    {
      Mdl = IoAllocateMdl(Buffer, Length, 0, 1u, Irp);
      if ( !Mdl )
        RtlRaiseStatus(-1073741670);
      IopProbeAndLockPages_2(Mdl, v54, v51, (__int64)v46, CurrentStackLocation[-1].MajorFunction);
    }
    goto LABEL_96;
  }
  Irp->UserBuffer = Buffer;
  v49 = Length;
LABEL_96:
  CurrentStackLocation[-1].Parameters.Read.Length = v49;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (PUNICODE_STRING)Sid;
  CurrentStackLocation[-1].Flags = 0;
  v52 = 0;
  if ( RestartScan )
  {
    CurrentStackLocation[-1].Flags = 1;
    v52 = 1;
  }
  if ( ReturnSingleEntry )
  {
    v52 |= 2u;
    CurrentStackLocation[-1].Flags = v52;
  }
  if ( v20 )
    CurrentStackLocation[-1].Flags = v52 | 4;
  result = IopSynchronousServiceTail(v46, (__int64)Irp, (__int64)v31, 0, v54, v53, 2u);
  if ( !v53 )
    return IopSynchronousApiServiceTail(result, P, Irp, v54, v66, IoStatusBlock);
  return result;
}
