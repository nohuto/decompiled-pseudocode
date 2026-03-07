NTSTATUS __stdcall RtlCreateSystemVolumeInformationFolder(PCUNICODE_STRING VolumeRootPath)
{
  unsigned int Length; // eax
  size_t v3; // rdi
  unsigned __int16 v4; // dx
  wchar_t v5; // si
  __int64 v6; // rdx
  void *Pool2; // rax
  unsigned int v9; // eax
  int v10; // ebx
  PVOID v11; // rcx
  PVOID v12; // rdi
  PVOID P[2]; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+67h] BYREF
  PVOID v18; // [rsp+F8h] [rbp+6Fh] BYREF
  PVOID v19; // [rsp+100h] [rbp+77h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  FileHandle = 0LL;
  *(_OWORD *)P = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  Length = VolumeRootPath->Length;
  v3 = DestinationString.Length;
  v4 = DestinationString.Length + Length;
  LOWORD(P[0]) = DestinationString.Length + Length;
  if ( (unsigned __int16)(DestinationString.Length + Length) < (unsigned __int16)Length || v4 < DestinationString.Length )
    return -1073741811;
  v5 = VolumeRootPath->Buffer[((unsigned __int64)Length >> 1) - 1];
  if ( v5 != 92 )
  {
    v4 += 2;
    LOWORD(P[0]) = v4;
  }
  v6 = (unsigned __int16)(v4 + 2);
  WORD1(P[0]) = v6;
  Pool2 = (void *)ExAllocatePool2(256LL, v6, 1399615318LL);
  P[1] = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memmove(Pool2, VolumeRootPath->Buffer, VolumeRootPath->Length);
  v9 = VolumeRootPath->Length;
  LOWORD(P[0]) = VolumeRootPath->Length;
  if ( v5 != 92 )
  {
    *((_WORD *)P[1] + ((unsigned __int64)v9 >> 1)) = 92;
    LOWORD(v9) = LOWORD(P[0]) + 2;
    LOWORD(P[0]) += 2;
  }
  memmove((char *)P[1] + (unsigned __int16)v9, DestinationString.Buffer, v3);
  LOWORD(P[0]) += v3;
  *((_WORD *)P[1] + ((unsigned __int64)LOWORD(P[0]) >> 1)) = 0;
  v10 = RtlpSysVolCreateSecurityDescriptor(&v19, &v18);
  if ( v10 >= 0 )
  {
    v12 = v19;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)P;
    ObjectAttributes.SecurityDescriptor = v19;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( NtCreateFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x201060u, 0LL, 0) >= 0 )
      NtClose(FileHandle);
    v10 = NtCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    if ( v10 < 0 )
    {
      RtlpSysVolTakeOwnership(P);
      v10 = NtCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    }
    ExFreePoolWithTag(P[1], 0);
    if ( v10 >= 0 )
    {
      ExFreePoolWithTag(v12, 0);
      v10 = RtlpSysVolCheckOwnerAndSecurity(FileHandle, (PACL)v18);
      NtClose(FileHandle);
      v11 = v18;
    }
    else
    {
      ExFreePoolWithTag(v18, 0);
      v11 = v12;
    }
  }
  else
  {
    v11 = P[1];
  }
  ExFreePoolWithTag(v11, 0);
  return v10;
}
