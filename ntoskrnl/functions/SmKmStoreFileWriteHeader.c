__int64 __fastcall SmKmStoreFileWriteHeader(__int64 a1, int a2)
{
  struct _MDL *v4; // rdi
  BOOLEAN v5; // r15
  struct _PRIVILEGE_SET *NonPaged; // rax
  struct _PRIVILEGE_SET *Buffer; // rsi
  NTSTATUS Status; // ebx
  struct _MDL *Mdl; // rax
  void *v10; // rcx
  NTSTATUS v11; // eax
  struct _KEVENT *p_Event; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-19h] BYREF
  LARGE_INTEGER StartingOffset; // [rsp+60h] [rbp-9h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-1h] BYREF
  __int128 FileInformation; // [rsp+80h] [rbp+17h] BYREF
  __int64 v18; // [rsp+90h] [rbp+27h]

  StartingOffset.QuadPart = 0LL;
  memset(&Event, 0, sizeof(Event));
  v18 = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  FileInformation = 0LL;
  v5 = IoSetThreadHardErrorMode(0);
  NonPaged = (struct _PRIVILEGE_SET *)SSHSupportAllocateNonPaged(0x10000LL, 0x68466D73u);
  Buffer = NonPaged;
  if ( !NonPaged )
  {
    Status = -1073741670;
    goto LABEL_19;
  }
  if ( !a2 )
  {
    Mdl = MmCreateMdl(0LL, NonPaged, 0x10000uLL);
    v4 = Mdl;
    if ( !Mdl )
    {
      Status = -1073741670;
      goto LABEL_17;
    }
    MmBuildMdlForNonPagedPool(Mdl);
    MmMdlPageContentsState((__int64)v4, 1u);
  }
  memset(Buffer, 0, 0x10000uLL);
  Buffer->PrivilegeCount = 1164135783;
  Buffer->Control = 3;
  Buffer[2].PrivilegeCount = 1;
  Buffer->Privilege[0].Luid.LowPart = RtlComputeCrc32(0, (char *)Buffer, 48LL);
  v10 = *(void **)a1;
  if ( a2 )
  {
    v11 = ZwWriteFile(v10, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x10000u, &StartingOffset, 0LL);
    p_Event = (struct _KEVENT *)(*(_QWORD *)(a1 + 8) + 152LL);
  }
  else
  {
    Status = ZwQueryInformationFile(v10, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( Status == 259 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 8) + 152LL), Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
      goto LABEL_17;
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v11 = IoSynchronousPageWrite(*(PFILE_OBJECT *)(a1 + 8), v4, &StartingOffset, &Event, &IoStatusBlock);
    p_Event = &Event;
  }
  Status = v11;
  if ( v11 == 259 )
  {
    KeWaitForSingleObject(p_Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status >= 0 )
    Status = IoStatusBlock.Information != 0x10000 ? 0xC000016A : 0;
LABEL_17:
  CmSiFreeMemory(Buffer);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
LABEL_19:
  IoSetThreadHardErrorMode(v5);
  return (unsigned int)Status;
}
