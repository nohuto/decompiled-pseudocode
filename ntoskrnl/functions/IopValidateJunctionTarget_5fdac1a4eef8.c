__int64 __fastcall IopValidateJunctionTarget(
        int a1,
        _OWORD *a2,
        unsigned int a3,
        unsigned int a4,
        _QWORD *a5,
        unsigned int *a6)
{
  size_t v6; // rbx
  void *v9; // r13
  __int64 v10; // r14
  ULONG v11; // r15d
  struct _REPARSE_DATA_BUFFER *Pool2; // rax
  const void *v13; // rdx
  size_t v14; // r8
  struct _REPARSE_DATA_BUFFER *v15; // rsi
  int appended; // ebx
  PVOID *v17; // r15
  char v18; // r12
  ULONG v19; // r15d
  int v20; // r8d
  unsigned int v21; // ebx
  unsigned int v22; // r12d
  unsigned int v23; // eax
  _OWORD *v24; // rax
  _OWORD *v25; // r15
  unsigned int Length; // ecx
  char v28; // [rsp+40h] [rbp-128h]
  UNICODE_STRING v29; // [rsp+50h] [rbp-118h] BYREF
  __int64 v30; // [rsp+60h] [rbp-108h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+80h] [rbp-E8h] BYREF
  UNICODE_STRING String2; // [rsp+88h] [rbp-E0h] BYREF
  int v34; // [rsp+98h] [rbp-D0h]
  struct _REPARSE_DATA_BUFFER *v35; // [rsp+A0h] [rbp-C8h]
  HANDLE FileHandle; // [rsp+A8h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+B0h] [rbp-B8h] BYREF
  UNICODE_STRING String1; // [rsp+C0h] [rbp-A8h] BYREF
  UNICODE_STRING v39; // [rsp+D0h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+E0h] [rbp-88h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F0h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+120h] [rbp-48h] BYREF

  v6 = a3;
  String2 = 0LL;
  *(_QWORD *)&Source.Length = 1572886LL;
  Source.Buffer = L"\\??\\Global\\";
  *(_QWORD *)&v39.Length = 2359330LL;
  v39.Buffer = L"\\??\\Global\\Volume";
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  Destination = 0LL;
  DestinationString = 0LL;
  *(_QWORD *)&String1.Length = 1441812LL;
  String1.Buffer = (wchar_t *)L"\\??\\Volume";
  v35 = 0LL;
  v9 = 0LL;
  FileHandle = 0LL;
  Object = 0LL;
  v10 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( a1 == 590860 )
  {
    v11 = v6 - 32;
    v34 = v6 - 32;
    Pool2 = (struct _REPARSE_DATA_BUFFER *)ExAllocatePool2(99LL, (unsigned int)(v6 - 32), 1699901257LL);
    v13 = a2 + 2;
    v14 = (unsigned int)(v6 - 32);
  }
  else
  {
    v11 = v6;
    v34 = v6;
    Pool2 = (struct _REPARSE_DATA_BUFFER *)ExAllocatePool2(99LL, v6, 1699901257LL);
    v14 = v6;
    v13 = a2;
  }
  v15 = Pool2;
  v35 = Pool2;
  memmove(Pool2, v13, v14);
  if ( v15->ReparseTag != -1610612733 )
    goto LABEL_5;
  appended = FsRtlValidateReparsePointBuffer(v11, v15);
  if ( appended >= 0 )
  {
    String2.Buffer = v15->MountPointReparseBuffer.PathBuffer;
    String2.Length = v15->SymbolicLinkReparseBuffer.SubstituteNameLength & 0xFFFE;
    String2.MaximumLength = String2.Length;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 1536;
    ObjectAttributes.ObjectName = &String2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwOpenFile(&FileHandle, 0x120116u, &ObjectAttributes, &IoStatusBlock, 7u, 1u);
    if ( appended >= 0 )
    {
      appended = IopReferenceFileObject(FileHandle, 0, 0, &Object, 0LL);
      if ( appended >= 0 )
      {
        v17 = (PVOID *)Object;
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 52LL) & 0x10) != 0 )
        {
LABEL_5:
          appended = -1073741811;
          goto LABEL_47;
        }
        v18 = 0;
        v28 = 0;
        if ( RtlPrefixUnicodeString(&String1, &String2, 1u)
          || RtlPrefixUnicodeString(&v39, &String2, 1u)
          || (appended = IoVolumeDeviceToDosName(v17[1], &DestinationString), appended < 0) )
        {
          v18 = 1;
          v28 = 1;
        }
        if ( v18 )
          appended = IoVolumeDeviceToGuidPath((PDEVICE_OBJECT)v17[1], (__int64)&DestinationString);
        if ( appended >= 0 )
        {
          v19 = String2.Length + 8;
          while ( 1 )
          {
            v10 = ExAllocatePool2(64LL, v19, 1700032329LL);
            if ( !v10 )
              goto LABEL_46;
            appended = IopQueryXxxInformation((struct _FILE_OBJECT *)Object, 9, v19, 0, (struct _IRP *)v10, &v30, 1);
            if ( appended != -2147483643 )
              break;
            v19 = *(_DWORD *)v10 + 8;
            ExFreePoolWithTag((PVOID)v10, 0);
          }
          if ( appended < 0 )
            goto LABEL_47;
          if ( !*(_DWORD *)v10 || *(_WORD *)(v10 + 4) != 92 )
            goto LABEL_5;
          v20 = DestinationString.Length + *(_DWORD *)v10 + 14;
          if ( !v18 )
            v20 = DestinationString.Length + *(_DWORD *)v10 + 22;
          v21 = v20 - 2;
          if ( DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92 )
            v21 = v20;
          if ( v21 >= 0xFFFD )
            goto LABEL_5;
          v22 = a3 + v21 - String2.Length;
          v23 = a4;
          if ( v22 > a4 )
            v23 = a3 + v21 - String2.Length;
          v24 = (_OWORD *)ExAllocatePool2(65LL, v23, 1699901257LL);
          v9 = v24;
          if ( !v24 )
          {
LABEL_46:
            appended = -1073741670;
            goto LABEL_47;
          }
          if ( a1 == 590860 )
          {
            *v24 = *a2;
            v24[1] = a2[1];
            v25 = v24 + 2;
            LODWORD(v30) = v22 - 32;
          }
          else
          {
            v25 = v24;
            LODWORD(v30) = v22;
          }
          Destination.Buffer = (wchar_t *)(v25 + 1);
          Destination.Length = 0;
          Destination.MaximumLength = v21;
          appended = RtlAppendUnicodeStringToString(&Destination, &Source);
          if ( appended >= 0 )
          {
            v29 = DestinationString;
            if ( v28 )
            {
              v29.Length = DestinationString.Length - 8;
              v29.Buffer += 4;
            }
            if ( v29.Buffer[((unsigned __int64)v29.Length >> 1) - 1] == 92 )
              v29.Length -= 2;
            if ( !v29.Length || v29.Length > DestinationString.Length )
              goto LABEL_5;
            appended = RtlAppendUnicodeStringToString(&Destination, &v29);
            if ( appended >= 0 )
            {
              v29.Buffer = (wchar_t *)(v10 + 4);
              v29.Length = *(_WORD *)v10;
              v29.MaximumLength = v29.Length;
              appended = RtlAppendUnicodeStringToString(&Destination, &v29);
              if ( appended >= 0 )
              {
                *(_DWORD *)v25 = -1610612733;
                *(_DWORD *)((char *)v25 + 6) = 0;
                *((_WORD *)v25 + 2) = v30 - 8;
                Length = Destination.Length;
                *((_WORD *)v25 + 5) = Destination.Length;
                *((_WORD *)v25 + ((unsigned __int64)Length >> 1) + 8) = 0;
                LOWORD(Length) = Length + 2;
                *((_WORD *)v25 + 6) = Length;
                memmove(
                  (char *)v25 + (unsigned __int16)Length + 16,
                  &v15->GenericReparseBuffer + v15->SymbolicLinkReparseBuffer.PrintNameOffset + 8,
                  v15->SymbolicLinkReparseBuffer.PrintNameLength + 2LL);
                *((_WORD *)v25 + 7) = v15->SymbolicLinkReparseBuffer.PrintNameLength;
                *a5 = v9;
                *a6 = v22;
                v9 = 0LL;
              }
            }
          }
        }
        else
        {
          DestinationString.Buffer = 0LL;
        }
      }
    }
  }
LABEL_47:
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  if ( v10 )
    ExFreePoolWithTag((PVOID)v10, 0);
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)appended;
}
