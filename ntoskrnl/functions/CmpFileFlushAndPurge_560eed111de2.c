__int64 __fastcall CmpFileFlushAndPurge(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  PIRP v4; // rdi
  unsigned int Status; // ebx
  void *v7; // rcx
  NTSTATUS v8; // eax
  struct _FILE_OBJECT *v9; // rsi
  PDEVICE_OBJECT RelatedDeviceObject; // rbx
  PIRP Irp; // rax
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v14; // rax
  struct _KEVENT v15; // [rsp+30h] [rbp-28h] BYREF
  PVOID Object; // [rsp+60h] [rbp+8h] BYREF

  v2 = a2;
  memset(&v15, 0, sizeof(v15));
  KeInitializeEvent(&v15, SynchronizationEvent, 0);
  v4 = 0LL;
  if ( (*(_DWORD *)(a1 + 160) & 0x20000) == 0 || (_DWORD)v2 )
  {
    v7 = *(void **)(a1 + 8 * v2 + 1544);
    if ( !v7 || BYTE1(NlsMbOemCodePageTag) )
    {
      return 0;
    }
    else
    {
      Object = 0LL;
      v8 = ObReferenceObjectByHandle(v7, 2u, *(POBJECT_TYPE *)CmIoFileObjectType, 0, &Object, 0LL);
      v9 = (struct _FILE_OBJECT *)Object;
      Status = v8;
      if ( v8 >= 0 )
      {
        RelatedDeviceObject = IoGetRelatedDeviceObject((PFILE_OBJECT)Object);
        Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
        v4 = Irp;
        if ( Irp )
        {
          Irp->Tail.Overlay.OriginalFileObject = v9;
          CurrentThread = KeGetCurrentThread();
          v4->Tail.Overlay.AuxiliaryBuffer = 0LL;
          *(_WORD *)&v4->RequestorMode = 0;
          v4->Overlay.AllocationSize.QuadPart = 0LL;
          v4->CancelRoutine = 0LL;
          v9 = (struct _FILE_OBJECT *)Object;
          v4->Tail.Overlay.Thread = CurrentThread;
          CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
          v4->Cancel = 0;
          *(_WORD *)&CurrentStackLocation[-1].MajorFunction = 265;
          CurrentStackLocation[-1].FileObject = v9;
          CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
          v14 = v4->Tail.Overlay.CurrentStackLocation;
          v14[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)CmpCompleteFlushAndPurgeIrp;
          v14[-1].Context = &v15;
          v14[-1].Control = -32;
          Status = IofCallDriver(RelatedDeviceObject, v4);
          if ( Status == 259 )
          {
            KeWaitForSingleObject(&v15, Executive, 0, 0, 0LL);
            Status = v4->IoStatus.Status;
          }
        }
        else
        {
          Status = -1073741670;
        }
      }
      if ( v9 )
        ObfDereferenceObject(v9);
      if ( v4 )
        IoFreeIrp(v4);
    }
  }
  else
  {
    return (unsigned int)CmpFileFlush(a1, 0LL);
  }
  return Status;
}
