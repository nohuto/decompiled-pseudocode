__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // ebx
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  PVOID FsContext2; // rsi
  IRP *v9; // rcx
  const wchar_t *Buffer; // rsi
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  IRP *v15; // rbx
  __int64 ObjectManager; // rbp
  struct _KTHREAD *v17; // rax
  __int64 v18; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = FileObject->FsContext2;
  if ( CurrentStackLocation->MajorFunction )
  {
    switch ( MajorFunction )
    {
      case 0xEu:
        if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653056 )
        {
          return (unsigned int)PiDqIrpQueryCreate(a2);
        }
        else if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653063
               || CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4653064 )
        {
          return (unsigned int)PiDqIrpQueryGetResult(a2);
        }
        else
        {
          v9 = a2;
          if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4653068 )
          {
            Status = -1073741637;
            a2->IoStatus.Status = -1073741637;
            goto LABEL_8;
          }
          return (unsigned int)PiDqIrpPropertySet(a2);
        }
      case 2u:
        if ( FsContext2 )
        {
          PiDqQueryRelease(FileObject->FsContext2);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
        break;
      case 0x12u:
        if ( FsContext2 )
        {
          CurrentThread = KeGetCurrentThread();
          v15 = 0LL;
          ObjectManager = 0LL;
          --CurrentThread->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)FsContext2 + 64, 0LL);
          if ( (*((_DWORD *)FsContext2 + 54) & 4) != 0 )
            ObjectManager = PiDqQueryGetObjectManager(FsContext2);
          ExReleasePushLockEx((__int64 *)FsContext2 + 8, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( ObjectManager )
            PiDqObjectManagerUnregisterQuery(ObjectManager, FsContext2);
          v17 = KeGetCurrentThread();
          --v17->KernelApcDisable;
          ExAcquirePushLockExclusiveEx((ULONG_PTR)FsContext2 + 64, 0LL);
          v18 = *((_QWORD *)FsContext2 + 22);
          *((_DWORD *)FsContext2 + 54) |= 8u;
          if ( v18 && _InterlockedExchange64((volatile __int64 *)(v18 + 104), 0LL) )
          {
            v15 = (IRP *)*((_QWORD *)FsContext2 + 22);
            *((_QWORD *)FsContext2 + 22) = 0LL;
          }
          ExReleasePushLockEx((__int64 *)FsContext2 + 8, 0LL);
          KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
          if ( v15 )
          {
            v15->IoStatus.Information = 0LL;
            v15->IoStatus.Status = -1073741536;
            IofCompleteRequest(v15, 0);
          }
        }
        break;
      default:
        return Status;
    }
    Status = 0;
    a2->IoStatus.Status = 0;
  }
  else
  {
    Buffer = FileObject->FileName.Buffer;
    Status = 0;
    if ( !wcscmp(L"\\Dev\\Query", Buffer) )
    {
      LOBYTE(v13) = IoIs32bitProcess(a2) == 0;
      Status = PiDqQueryCreate(v13, p_FsContext2);
    }
    else if ( !wcscmp(L"\\Dev\\NoState", Buffer) )
    {
      *p_FsContext2 = 0LL;
    }
    else
    {
      Status = -1073741811;
    }
    a2->IoStatus.Status = Status;
  }
  v9 = a2;
LABEL_8:
  IofCompleteRequest(v9, 0);
  return Status;
}
