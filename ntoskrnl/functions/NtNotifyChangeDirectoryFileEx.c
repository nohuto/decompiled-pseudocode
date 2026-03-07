__int64 NtNotifyChangeDirectoryFileEx(void *a1, void *a2, ...)
{
  PVOID v4; // r14
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v6; // rcx
  ULONG v7; // r12d
  __int64 result; // rax
  PFILE_OBJECT v9; // rbx
  ULONG *p_Flags; // rsi
  char v11; // di
  PDEVICE_OBJECT RelatedDeviceObject; // r15
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 Irp; // rax
  IRP *v16; // rdi
  __int64 v17; // rsi
  int v18; // ecx
  ULONG Flags; // eax
  char v20; // al
  int v21; // edi
  char v22; // di
  struct _KTHREAD *v23; // rax
  PFILE_OBJECT v24; // rbx
  __int64 v25; // rax
  __int64 Pool2; // rax
  PMDL Mdl; // rcx
  __int64 v28; // r8
  int Object; // [rsp+20h] [rbp-78h]
  int HandleInformation; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+40h] [rbp-58h] BYREF
  PFILE_OBJECT FileObject; // [rsp+48h] [rbp-50h] BYREF
  PVOID v33; // [rsp+50h] [rbp-48h]
  PVOID v34; // [rsp+58h] [rbp-40h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-38h]
  __int64 v36; // [rsp+B0h] [rbp+18h] BYREF
  va_list va; // [rsp+B0h] [rbp+18h]
  __int64 v38; // [rsp+B8h] [rbp+20h]
  unsigned int *v39; // [rsp+C0h] [rbp+28h] BYREF
  va_list va1; // [rsp+C0h] [rbp+28h]
  volatile void *Address; // [rsp+C8h] [rbp+30h]
  SIZE_T Length; // [rsp+D0h] [rbp+38h]
  __int64 v43; // [rsp+D8h] [rbp+40h]
  __int64 v44; // [rsp+E0h] [rbp+48h]
  __int64 v45; // [rsp+E8h] [rbp+50h]
  va_list va2; // [rsp+F0h] [rbp+58h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v36 = va_arg(va1, _QWORD);
  v38 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, unsigned int *);
  Address = va_arg(va2, volatile void *);
  Length = va_arg(va2, _QWORD);
  v43 = va_arg(va2, _QWORD);
  v44 = va_arg(va2, _QWORD);
  v45 = va_arg(va2, _QWORD);
  FileObject = 0LL;
  v4 = 0LL;
  v33 = 0LL;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v6 = (__int64)v39;
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v6 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v6 = *(_DWORD *)v6;
    v7 = Length;
    if ( (_DWORD)Length )
      ProbeForWrite(Address, (unsigned int)Length, 4u);
    if ( (v43 & 0xFFFFF000) != 0 || !(_DWORD)v43 )
      return 3221225485LL;
  }
  else
  {
    v7 = Length;
  }
  result = IopReferenceFileObject(a1, 1u, PreviousMode, (PVOID *)&FileObject, 0LL);
  if ( (int)result >= 0 )
  {
    v9 = FileObject;
    if ( FileObject->CompletionContext && (v36 & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
    {
      v21 = -1073741811;
      goto LABEL_41;
    }
    if ( a2 )
    {
      v34 = 0LL;
      v21 = ObReferenceObjectByHandle(a2, 2u, (POBJECT_TYPE)ExEventObjectType, PreviousMode, &v34, 0LL);
      v4 = v34;
      v33 = v34;
      if ( v21 < 0 )
        goto LABEL_41;
      KeResetEvent((PRKEVENT)v34);
    }
    p_Flags = &v9->Flags;
    if ( (v9->Flags & 2) == 0 )
    {
      v11 = 0;
      LOBYTE(v31) = 0;
      if ( PreviousMode )
        IopMarkApcRoutineIfAsynchronousIo32((unsigned int **)va1, (__int64 *)va, 0);
LABEL_15:
      if ( (*p_Flags & 0x4000000) == 0 )
        KeResetEvent(&v9->Event);
      RelatedDeviceObject = IoGetRelatedDeviceObject(v9);
      LOBYTE(v13) = v11 ^ 1;
      LOBYTE(v14) = RelatedDeviceObject->StackSize;
      Irp = IopAllocateIrpExReturn((__int64)RelatedDeviceObject, v14, v13);
      v16 = (IRP *)Irp;
      v34 = (PVOID)Irp;
      if ( Irp )
      {
        *(_QWORD *)(Irp + 192) = v9;
        *(_QWORD *)(Irp + 152) = CurrentThread;
        *(_BYTE *)(Irp + 64) = PreviousMode;
        *(_QWORD *)(Irp + 80) = v4;
        *(_QWORD *)(Irp + 72) = v39;
        *(_QWORD *)(Irp + 88) = v36;
        *(_QWORD *)(Irp + 96) = v38;
        v17 = *(_QWORD *)(Irp + 184);
        *(_BYTE *)(v17 - 72) = 12;
        v18 = v45;
        *(_BYTE *)(v17 - 71) = ((_DWORD)v45 != 1) + 2;
        *(_QWORD *)(v17 - 24) = v9;
        if ( !v7 )
        {
LABEL_22:
          *(_DWORD *)(v17 - 64) = v7;
          *(_DWORD *)(v17 - 56) = v43;
          if ( *(_BYTE *)(v17 - 71) == 3 )
            *(_DWORD *)(v17 - 48) = v18;
          *(_BYTE *)(v17 - 70) = 0;
          v20 = *(_BYTE *)(v17 - 70);
          if ( (_BYTE)v44 )
            v20 = 1;
          *(_BYTE *)(v17 - 70) = v20;
          LOBYTE(HandleInformation) = v31;
          LOBYTE(Object) = PreviousMode;
          return IopSynchronousServiceTail(RelatedDeviceObject, v16, v9, 0LL, Object, HandleInformation, 2);
        }
        Flags = RelatedDeviceObject->Flags;
        if ( (Flags & 4) == 0 )
        {
          if ( (Flags & 0x10) != 0 )
          {
            Mdl = IoAllocateMdl((PVOID)Address, v7, 0, 1u, v16);
            if ( !Mdl )
              RtlRaiseStatus(-1073741670);
            IopProbeAndLockPages_2(Mdl, PreviousMode, v28, (__int64)RelatedDeviceObject, *(unsigned __int8 *)(v17 - 72));
            v18 = v45;
            goto LABEL_22;
          }
          goto LABEL_21;
        }
        Pool2 = ExAllocatePool2(65LL, v7, 1112764233LL);
        v16->AssociatedIrp.MasterIrp = (struct _IRP *)Pool2;
        if ( Pool2 )
        {
          v16->Flags = 112;
          v18 = v45;
LABEL_21:
          v16->UserBuffer = (PVOID)Address;
          goto LABEL_22;
        }
        IopExceptionCleanupEx(v9, v16, v4, 0LL, (v9->Flags & 2) != 0);
      }
      else
      {
        IopAllocateIrpCleanup(v9, v4);
      }
      return 3221225626LL;
    }
    v22 = (v9->Flags & 4) != 0;
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    v24 = FileObject;
    v25 = KeAbPreAcquire((__int64)&FileObject->Lock, 0LL);
    LOBYTE(v31) = 0;
    if ( _InterlockedExchange((volatile __int32 *)&v24->Busy, 1) )
    {
      v9 = FileObject;
      v21 = IopWaitAndAcquireFileObjectLock((volatile signed __int32 *)&FileObject->Type, PreviousMode, v22, v25, &v31);
    }
    else
    {
      if ( v25 )
        *(_BYTE *)(v25 + 18) = 1;
      v9 = FileObject;
      ObfReferenceObject(FileObject);
      v21 = 0;
    }
    if ( !(_BYTE)v31 )
    {
      v11 = 1;
      LOBYTE(v31) = 1;
      goto LABEL_15;
    }
    if ( v4 )
      ObfDereferenceObject(v4);
LABEL_41:
    ObfDereferenceObject(v9);
    return (unsigned int)v21;
  }
  return result;
}
