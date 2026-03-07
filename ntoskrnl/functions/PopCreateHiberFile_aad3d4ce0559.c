__int64 __fastcall PopCreateHiberFile(LARGE_INTEGER a1)
{
  void *HiberFileSecurityDescriptor; // r14
  unsigned int v2; // edi
  NTSTATUS v3; // eax
  NTSTATUS v4; // ebx
  bool v5; // si
  NTSTATUS Status; // eax
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  PVOID Object; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  int v11; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER AllocationSize; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING Destination; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER v14; // [rsp+B0h] [rbp-50h] BYREF
  PVOID P; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D0h] [rbp-30h] BYREF
  __int128 InputBuffer; // [rsp+100h] [rbp+0h] BYREF
  __int64 v19; // [rsp+110h] [rbp+10h]
  __int128 FileInformation; // [rsp+118h] [rbp+18h] BYREF
  __int64 v21; // [rsp+128h] [rbp+28h]
  _OWORD v22[2]; // [rsp+130h] [rbp+30h] BYREF
  __int64 v23; // [rsp+150h] [rbp+50h]

  AllocationSize = a1;
  *(&Destination.MaximumLength + 2) = 0;
  v14.QuadPart = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  DestinationString = 0LL;
  HiberFileSecurityDescriptor = 0LL;
  memset(v22, 0, sizeof(v22));
  v11 = 0;
  v19 = 0LL;
  FileInformation = 0LL;
  FileHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Object = 0LL;
  IoStatusBlock = 0LL;
  P = 0LL;
  InputBuffer = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\hiberfil.sys");
  *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(PoHiberFileRoot.Length + DestinationString.Length);
  Destination.Length = 0;
  Destination.Buffer = (wchar_t *)ExAllocatePool2(
                                    256LL,
                                    (unsigned __int16)(PoHiberFileRoot.Length + DestinationString.Length),
                                    1919052136LL);
  if ( !Destination.Buffer )
  {
    v4 = -1073741670;
    goto LABEL_22;
  }
  RtlAppendUnicodeStringToString(&Destination, &PoHiberFileRoot);
  RtlAppendUnicodeStringToString(&Destination, &DestinationString);
  HiberFileSecurityDescriptor = (void *)PopCreateHiberFileSecurityDescriptor();
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &Destination;
  ObjectAttributes.Attributes = 576;
  v2 = 0;
  ObjectAttributes.SecurityDescriptor = HiberFileSecurityDescriptor;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  while ( 1 )
  {
    v3 = IoCreateFile(
           &FileHandle,
           0x100003u,
           &ObjectAttributes,
           &IoStatusBlock,
           &AllocationSize,
           0x2006u,
           0,
           3u,
           0x9048u,
           0LL,
           0,
           CreateFileTypeNone,
           0LL,
           0x102u);
    v4 = v3;
    if ( v3 < 0 )
    {
      if ( v3 != -1073741638 )
        goto LABEL_22;
      v4 = IoCreateFile(
             &FileHandle,
             0x10000u,
             &ObjectAttributes,
             &IoStatusBlock,
             &AllocationSize,
             0,
             0,
             1u,
             0x201001u,
             0LL,
             0,
             CreateFileTypeNone,
             0LL,
             0x100u);
      if ( v4 < 0 )
        goto LABEL_22;
      goto LABEL_35;
    }
    v5 = IoStatusBlock.Information == 2;
    v4 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v4 < 0 )
      goto LABEL_22;
    if ( (unsigned int)v21 <= 1 )
      break;
LABEL_35:
    ZwClose(FileHandle);
    ++v2;
    FileHandle = 0LL;
    if ( v2 >= 3 )
      goto LABEL_8;
  }
  if ( !v5 )
  {
    v19 = -1LL;
    DWORD1(InputBuffer) = 1;
    *((_QWORD *)&InputBuffer + 1) = 0LL;
    ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x98208u, &InputBuffer, 0x18u, 0LL, 0);
  }
LABEL_8:
  LODWORD(v23) = 8198;
  v4 = ZwSetInformationFile(FileHandle, &IoStatusBlock, v22, 0x28u, FileBasicInformation);
  if ( v4 >= 0 )
  {
    v4 = ObReferenceObjectByHandleWithTag(FileHandle, 3u, (POBJECT_TYPE)IoFileObjectType, 0, 0x62486F50u, &Object, 0LL);
    if ( v4 >= 0 )
    {
      v14 = AllocationSize;
      v4 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &v14, 8u, FileEndOfFileInformation);
      if ( v4 == 259 )
      {
        KeWaitForSingleObject((char *)Object + 152, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
        v4 = IoStatusBlock.Status;
      }
      else
      {
        Status = IoStatusBlock.Status;
      }
      if ( v4 >= 0 )
      {
        if ( Status < 0 )
        {
          v4 = Status;
        }
        else
        {
          v4 = ZwFsControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
          if ( v4 == 259 )
          {
            KeWaitForSingleObject((char *)Object + 152, Executive, 0, 0, 0LL);
            v4 = IoStatusBlock.Status;
          }
          if ( v4 >= 0 )
          {
            if ( ZwFlushBuffersFile(FileHandle, &IoStatusBlock) == 259 )
              KeWaitForSingleObject((char *)Object + 152, Executive, 0, 0, 0LL);
            v4 = PopSanityCheckHiberFile(
                   (_DWORD)FileHandle,
                   (_DWORD)Object,
                   (unsigned int)&AllocationSize,
                   (unsigned int)&P,
                   (__int64)&v11);
            if ( v4 >= 0 )
            {
              v4 = PopSetHiberFileMcb(P);
              if ( v4 >= 0 )
              {
                PopHiberInfo = FileHandle;
                qword_140C3CA70 = AllocationSize.QuadPart;
                FileObject = Object;
                FsRtlIssueFileNotificationFsctl((PFILE_OBJECT)Object);
                FileHandle = 0LL;
                Object = 0LL;
                PopResetCurrentPolicies();
                v4 = 0;
              }
            }
          }
        }
      }
    }
  }
LABEL_22:
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x62486F50u);
  if ( HiberFileSecurityDescriptor )
    ExFreePoolWithTag(HiberFileSecurityDescriptor, 0);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  return (unsigned int)v4;
}
