__int64 __fastcall CmpOpenHiveFile(
        PCUNICODE_STRING Source,
        int a2,
        _QWORD *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10)
{
  char v10; // si
  PCUNICODE_STRING v12; // r12
  void *v13; // r13
  __int64 v14; // rcx
  int v15; // eax
  NTSTATUS Status; // ebx
  int CompleteFileName; // eax
  ULONG CreateDisposition; // edi
  ULONG ShareAccess; // r12d
  ACCESS_MASK v20; // eax
  ULONG CreateOptions; // r14d
  SECURITY_IMPERSONATION_LEVEL *v22; // rbx
  int Information; // r14d
  __int64 v24; // rsi
  int VolumeClusterSize; // eax
  HANDLE v26; // rax
  int v28; // r9d
  NTSTATUS v29; // eax
  int v30; // [rsp+20h] [rbp-E0h]
  char v31; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  PCUNICODE_STRING v36; // [rsp+78h] [rbp-88h]
  ACCESS_MASK DesiredAccess; // [rsp+80h] [rbp-80h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+84h] [rbp-7Ch] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  int InputBuffer; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+9Ch] [rbp-64h]
  PETHREAD Thread; // [rsp+A0h] [rbp-60h]
  HANDLE Event[2]; // [rsp+A8h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  PACCESS_TOKEN Token; // [rsp+C8h] [rbp-38h]
  void *v46; // [rsp+D0h] [rbp-30h]
  __int64 v47; // [rsp+D8h] [rbp-28h]
  __int64 v48; // [rsp+E0h] [rbp-20h]
  _QWORD *v49; // [rsp+E8h] [rbp-18h]
  int *v50; // [rsp+F0h] [rbp-10h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-8h] BYREF
  __m128i si128; // [rsp+128h] [rbp+28h] BYREF
  __m128i v53; // [rsp+138h] [rbp+38h]
  __int64 v54; // [rsp+148h] [rbp+48h]
  __int128 FileInformation; // [rsp+150h] [rbp+50h] BYREF
  __int64 v56; // [rsp+160h] [rbp+60h]

  v10 = a5;
  Token = a6;
  v12 = Source;
  v46 = a8;
  v13 = 0LL;
  v48 = a9;
  v41 = a2;
  v54 = 0LL;
  v56 = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v36 = Source;
  v47 = a7;
  ImpersonationLevel = SecurityImpersonation;
  v50 = a4;
  v49 = a3;
  si128 = 0LL;
  InputBuffer = 0;
  v53 = 0LL;
  CopyOnOpen[0] = 0;
  *(_OWORD *)Event = 0LL;
  Thread = 0LL;
  FileInformation = 0LL;
  EffectiveOnly = 0;
  IoStatusBlock = 0LL;
  *a3 = 0LL;
  memset(&ObjectAttributes, 0, 32);
  FileHandle = 0LL;
  v31 = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CmSiEventTupleInitialize(Event);
  v15 = CmSiCreateEvent(v14, Event);
  Status = v15;
  if ( v15 < 0 )
  {
    SetFailureLocation(a10, 0, 35, v15, 16);
    goto LABEL_32;
  }
  CompleteFileName = CmpGetCompleteFileName(v12);
  Status = CompleteFileName;
  if ( CompleteFileName < 0 )
  {
    SetFailureLocation(a10, 0, 35, CompleteFileName, 32);
    goto LABEL_32;
  }
  CreateDisposition = 3;
  if ( (a5 & 0x20) != 0 )
  {
    DesiredAccess = 1;
    ShareAccess = ((a5 >> 7) & 1) == 0;
  }
  else
  {
    ShareAccess = 0;
    v20 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
    if ( a2 )
      v20 = (a5 & 8) == 0 ? 3 : 0;
    DesiredAccess = v20;
  }
  if ( a2 )
  {
    FileAttributes = 6;
    if ( (a5 & 0x20) != 0 )
      CreateDisposition = 1;
    else
      CreateDisposition = (a5 & 0x10) == 0 ? 3 : 0;
    CreateOptions = 32772;
  }
  else
  {
    FileAttributes = 128;
    CreateOptions = 49188;
    if ( (a5 & 0x21) != 1 )
      CreateDisposition = 1;
  }
  if ( (a5 & 0x100) != 0 )
    CreateOptions = CreateOptions & 0xFFFEFFDF | 0x10000;
  v22 = (SECURITY_IMPERSONATION_LEVEL *)Token;
  if ( Token )
  {
    Thread = KeGetCurrentThread();
    v13 = (void *)PsReferenceImpersonationTokenEx(
                    Thread,
                    1LL,
                    1953261124LL,
                    CopyOnOpen,
                    &EffectiveOnly,
                    &ImpersonationLevel,
                    0LL);
    v29 = PsImpersonateClient(Thread, v22, 0, 0, v22[49]);
    Status = v29;
    if ( v29 < 0 )
    {
      SetFailureLocation(a10, 0, 35, v29, 48);
      goto LABEL_31;
    }
    v10 = a5 | 0x40;
    v31 = 1;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Attributes = 16 * (v10 & 0x40 | 0x24);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = v46;
  ObjectAttributes.Length = 48;
  Status = ZwCreateFile(
             &FileHandle,
             DesiredAccess,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             FileAttributes,
             ShareAccess,
             CreateDisposition,
             CreateOptions,
             0LL,
             0);
  if ( Status == -1073741790 )
  {
    SetFailureLocation(a10, 1, 35, -1073741790, 64);
    Status = CmpOpenFileWithExtremePrejudice(
               &FileHandle,
               &ObjectAttributes,
               &IoStatusBlock,
               FileAttributes,
               CreateOptions,
               a10);
  }
  if ( v31 )
  {
    if ( v13 )
    {
      if ( PsImpersonateClient(Thread, v13, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel) < 0 )
        CmSiBugCheck(0x26uLL, (ULONG_PTR)v13, 0LL, 0LL);
    }
    else
    {
      PsImpersonateClient(KeGetCurrentThread(), 0LL, 0, 0, SecurityImpersonation);
    }
  }
  if ( Status < 0 )
  {
    CmpLogHiveFileInaccessible(&DestinationString, (unsigned int)Status, CreateOptions, ShareAccess);
    v30 = 80;
LABEL_45:
    v28 = Status;
LABEL_46:
    SetFailureLocation(a10, 0, 35, v28, v30);
    goto LABEL_31;
  }
  Information = IoStatusBlock.Information;
  if ( (v10 & 0x28) == 0 )
  {
    LODWORD(v54) = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v53 = si128;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, &si128, 0x28u, FileBasicInformation);
  }
  if ( (v10 & 0x22) == 2 )
  {
    Status = ZwFsControlFile(FileHandle, Event[0], 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
    if ( Status == 259 )
    {
      CmSiWaitForSingleEvent((__int64)Event);
      Status = IoStatusBlock.Status;
    }
    if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
    {
      v30 = 96;
      goto LABEL_45;
    }
  }
  if ( ZwFsControlFile(FileHandle, Event[0], 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
    CmSiWaitForSingleEvent((__int64)Event);
  if ( !v41 )
  {
    if ( Information != 2
      && ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0
      && !*((_QWORD *)&FileInformation + 1) )
    {
      Information = 2;
    }
    v24 = v47;
    if ( v47 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle);
      Status = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        v30 = 112;
        goto LABEL_67;
      }
      *(_DWORD *)(v24 + 4) = CmpGetVolumeLogFileSizeCap(FileHandle);
    }
    if ( !v48 )
      goto LABEL_30;
    VolumeClusterSize = CmpQueryFileSecurityDescriptor(FileHandle);
    Status = VolumeClusterSize;
    if ( VolumeClusterSize >= 0 )
      goto LABEL_30;
    v30 = 128;
LABEL_67:
    v28 = VolumeClusterSize;
    goto LABEL_46;
  }
LABEL_30:
  v26 = FileHandle;
  Status = 0;
  FileHandle = 0LL;
  *v49 = v26;
  *v50 = Information;
LABEL_31:
  v12 = v36;
LABEL_32:
  if ( DestinationString.Buffer && DestinationString.Buffer != v12->Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( v13 )
    ObfDereferenceObjectWithTag(v13, 0x746C6644u);
  CmSiEventTupleCleanup((__int64)Event);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Status;
}
