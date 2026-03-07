__int64 __fastcall NtQueryEaFile(
        void *a1,
        unsigned __int64 a2,
        void *a3,
        ULONG a4,
        char a5,
        void *Src,
        unsigned int Size,
        ULONG *a8,
        char a9)
{
  struct _KEVENT *v11; // r12
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  UNICODE_STRING *v15; // rbx
  UNICODE_STRING *v16; // rdi
  int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 result; // rax
  int v22; // edi
  int v23; // edi
  char v24; // r15
  struct _FILE_OBJECT *v25; // r14
  _DWORD *v26; // r13
  char v27; // di
  struct _KTHREAD *v28; // rax
  volatile __int32 *v29; // rbx
  __int64 v30; // r9
  unsigned int v31; // ebx
  __int64 v32; // rdx
  IRP *v33; // rax
  IRP *v34; // rdi
  ULONG *p_Flags; // r12
  struct _IO_STATUS_BLOCK *v36; // rax
  struct _KEVENT *v37; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  PDEVICE_OBJECT v39; // rcx
  ULONG Flags; // eax
  ULONG v41; // eax
  char v42; // r12
  char v43; // al
  char v44; // bl
  __int64 v45; // r9
  struct _KEVENT *v46; // rax
  UNICODE_STRING *Pool2; // rax
  bool v48; // zf
  __int64 v49; // rax
  PMDL Mdl; // rcx
  int Irp; // [rsp+20h] [rbp-A8h]
  char v52; // [rsp+40h] [rbp-88h]
  char v53; // [rsp+41h] [rbp-87h]
  _WORD v54[7]; // [rsp+42h] [rbp-86h] BYREF
  ULONG v55; // [rsp+50h] [rbp-78h]
  PVOID Object; // [rsp+58h] [rbp-70h] BYREF
  PVOID P; // [rsp+60h] [rbp-68h]
  PDEVICE_OBJECT RelatedDeviceObject; // [rsp+68h] [rbp-60h]
  UNICODE_STRING *v59; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  PIRP v61; // [rsp+80h] [rbp-48h]
  __int128 v62; // [rsp+88h] [rbp-40h] BYREF

  Object = 0LL;
  v11 = 0LL;
  P = 0LL;
  *(_QWORD *)&v54[3] = 0LL;
  v53 = 0;
  v55 = 0;
  v62 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v52 = PreviousMode;
  if ( !PreviousMode )
  {
    if ( Src && Size )
    {
      v53 = 1;
      Pool2 = (UNICODE_STRING *)ExAllocatePool2(65LL, Size, 1631940425LL);
      v15 = Pool2;
      *(_QWORD *)&v54[3] = Pool2;
      if ( !Pool2 )
        return 3221225626LL;
      memmove(Pool2, Src, Size);
    }
    else
    {
      v15 = *(UNICODE_STRING **)&v54[3];
    }
    if ( a8 )
      v55 = *a8;
LABEL_31:
    v23 = IopReferenceFileObject(a1, 8u, PreviousMode, &Object, 0LL);
    v24 = 0;
    if ( v23 < 0 )
    {
      if ( v53 )
        ExFreePoolWithTag(v15, 0);
      return (unsigned int)v23;
    }
    v25 = (struct _FILE_OBJECT *)Object;
    v26 = (char *)Object + 80;
    if ( (*((_DWORD *)Object + 20) & 2) != 0 )
    {
      v27 = (*((_DWORD *)Object + 20) & 4) != 0;
      v28 = KeGetCurrentThread();
      --v28->KernelApcDisable;
      v29 = (volatile __int32 *)Object;
      v30 = KeAbPreAcquire((__int64)Object + 128, 0LL);
      LOBYTE(v54[0]) = 0;
      if ( _InterlockedExchange(v29 + 29, 1) )
      {
        v25 = (struct _FILE_OBJECT *)Object;
        v31 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)Object, v52, v27, v30, v54);
      }
      else
      {
        if ( v30 )
          *(_BYTE *)(v30 + 18) = 1;
        v25 = (struct _FILE_OBJECT *)Object;
        ObfReferenceObject(Object);
        v31 = 0;
      }
      if ( !LOBYTE(v54[0]) )
      {
        v24 = 1;
        v15 = *(UNICODE_STRING **)&v54[3];
LABEL_39:
        LOBYTE(v54[0]) = v24;
        if ( (*v26 & 0x4000000) == 0 )
          KeResetEvent(&v25->Event);
        RelatedDeviceObject = IoGetRelatedDeviceObject(v25);
        LOBYTE(v32) = RelatedDeviceObject->StackSize;
        v33 = (IRP *)IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v32, 0LL);
        v34 = v33;
        v61 = v33;
        if ( v33 )
        {
          v33->Tail.Overlay.OriginalFileObject = v25;
          v33->Tail.Overlay.Thread = CurrentThread;
          v33->RequestorMode = v52;
          p_Flags = &v33->Flags;
          if ( v24 )
          {
            v36 = (struct _IO_STATUS_BLOCK *)a2;
            v37 = 0LL;
          }
          else
          {
            *p_Flags = 4;
            v36 = (struct _IO_STATUS_BLOCK *)&v62;
            v37 = (struct _KEVENT *)P;
          }
          v34->UserEvent = v37;
          v34->UserIosb = v36;
          v34->Overlay.AllocationSize.QuadPart = 0LL;
          CurrentStackLocation = v34->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].MajorFunction = 7;
          CurrentStackLocation[-1].FileObject = v25;
          if ( v53 )
          {
            v34->Tail.Overlay.AuxiliaryBuffer = (PCHAR)v15;
            CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = v15;
            CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Size;
          }
          v39 = RelatedDeviceObject;
          Flags = RelatedDeviceObject->Flags;
          if ( (Flags & 4) == 0 )
          {
            if ( (Flags & 0x10) != 0 )
            {
              if ( a4 )
              {
                Mdl = IoAllocateMdl(a3, a4, 0, 1u, v34);
                if ( !Mdl )
                  RtlRaiseStatus(-1073741670);
                v42 = v52;
                IopProbeAndLockPages_1(
                  Mdl,
                  v52,
                  1,
                  (__int64)RelatedDeviceObject,
                  CurrentStackLocation[-1].MajorFunction);
                v39 = RelatedDeviceObject;
                v41 = a4;
                goto LABEL_51;
              }
              goto LABEL_49;
            }
LABEL_48:
            v34->UserBuffer = a3;
LABEL_49:
            v41 = a4;
LABEL_50:
            v42 = v52;
LABEL_51:
            CurrentStackLocation[-1].Parameters.Read.Length = v41;
            CurrentStackLocation[-1].Parameters.Create.EaLength = v55;
            CurrentStackLocation[-1].Flags = 0;
            v43 = 0;
            if ( a9 )
            {
              CurrentStackLocation[-1].Flags = 1;
              v43 = 1;
            }
            if ( a5 )
            {
              v43 |= 2u;
              CurrentStackLocation[-1].Flags = v43;
            }
            if ( a8 )
              CurrentStackLocation[-1].Flags = v43 | 4;
            v44 = v54[0];
            LOBYTE(Irp) = v42;
            result = IopSynchronousServiceTail(v39, v34, v25, 0LL, Irp, LOBYTE(v54[0]), 2);
            if ( !v44 )
            {
              LOBYTE(v45) = v42;
              return IopSynchronousApiServiceTail((unsigned int)result, P, v34, v45, &v62, a2);
            }
            return result;
          }
          v41 = a4;
          if ( !a4 )
          {
            v34->AssociatedIrp.MasterIrp = 0LL;
            *p_Flags |= 0x50u;
            goto LABEL_50;
          }
          v49 = ExAllocatePool2(65LL, a4, 1112764233LL);
          v34->AssociatedIrp.MasterIrp = (struct _IRP *)v49;
          if ( v49 )
          {
            *p_Flags |= 0x70u;
            v39 = RelatedDeviceObject;
            goto LABEL_48;
          }
          IopExceptionCleanupEx(v25, v34, 0LL, P, (*v26 & 2) != 0);
          v48 = v15 == 0LL;
        }
        else
        {
          if ( (*v26 & 2) == 0 )
            ExFreePoolWithTag(v11, 0);
          IopAllocateIrpCleanup(v25, 0LL);
          v48 = v53 == 0;
        }
        if ( !v48 )
          ExFreePoolWithTag(v15, 0);
        return 3221225626LL;
      }
      if ( v53 )
        ExFreePoolWithTag(*(PVOID *)&v54[3], 0);
    }
    else
    {
      v46 = (struct _KEVENT *)ExAllocatePool2(64LL, 24LL, 1984261961LL);
      v11 = v46;
      P = v46;
      if ( v46 )
      {
        KeInitializeEvent(v46, SynchronizationEvent, 0);
        goto LABEL_39;
      }
      if ( v53 )
        ExFreePoolWithTag(v15, 0);
      v31 = -1073741670;
    }
    ObfDereferenceObject(v25);
    return v31;
  }
  v13 = 0x7FFFFFFF0000LL;
  if ( a2 < 0x7FFFFFFF0000LL )
    v13 = a2;
  *(_DWORD *)v13 = *(_DWORD *)v13;
  ProbeForWrite(a3, a4, 4u);
  if ( a8 )
  {
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
      v20 = (__int64)a8;
    v55 = *(_DWORD *)v20;
  }
  if ( !Src || !Size )
  {
    v15 = *(UNICODE_STRING **)&v54[3];
    goto LABEL_31;
  }
  v59 = 0LL;
  *(_DWORD *)&v54[1] = 0;
  v53 = 1;
  if ( ((unsigned __int8)Src & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v14 = (unsigned __int64)Src + Size;
  if ( v14 > 0x7FFFFFFF0000LL || v14 < (unsigned __int64)Src )
    MEMORY[0x7FFFFFFF0000] = 0;
  v15 = (UNICODE_STRING *)ExAllocatePool2(97LL, Size, 1631940425LL);
  *(_QWORD *)&v54[3] = v15;
  memmove(v15, Src, Size);
  v16 = v15;
  v59 = v15;
  v17 = Size;
  *(_DWORD *)&v54[1] = Size;
  while ( 1 )
  {
    if ( v17 < 5 )
    {
      *(_DWORD *)&v54[1] = 0;
      ExFreePoolWithTag(v15, 0);
      *(_QWORD *)&v54[3] = 0LL;
      *(_DWORD *)a2 = -2147483628;
      *(_QWORD *)(a2 + 8) = 0LL;
      return 2147483668LL;
    }
    v18 = *((unsigned __int8 *)&v16->MaximumLength + 2) + 6;
    if ( v17 < v18 )
      break;
    v19 = *(unsigned int *)&v16->Length;
    if ( !(_DWORD)v19 )
    {
      *(_DWORD *)&v54[1] = v17 - v18;
      if ( (int)(v17 - v18) >= 0 )
      {
        v11 = 0LL;
        goto LABEL_31;
      }
      break;
    }
    if ( ((*((unsigned __int8 *)&v16->MaximumLength + 2) + 9) & 0xFFFFFFFC) != (_DWORD)v19 )
      break;
    if ( (int)v19 < 0 )
      break;
    v17 -= v19;
    *(_DWORD *)&v54[1] = v17;
    if ( v17 < 0 )
      break;
    v16 = (UNICODE_STRING *)((char *)v16 + v19);
    v59 = v16;
  }
  v22 = (_DWORD)v16 - (_DWORD)v15;
  *(_DWORD *)&v54[1] = v22;
  ExFreePoolWithTag(v15, 0);
  *(_QWORD *)&v54[3] = 0LL;
  *(_DWORD *)a2 = -2147483628;
  *(_QWORD *)(a2 + 8) = v22;
  return 2147483668LL;
}
