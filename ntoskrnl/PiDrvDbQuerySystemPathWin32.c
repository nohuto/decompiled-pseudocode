__int64 __fastcall PiDrvDbQuerySystemPathWin32(UNICODE_STRING *String2, PUNICODE_STRING StringOut)
{
  PVOID v4; // r15
  POBJECT_NAME_INFORMATION v5; // r14
  NTSTATUS v6; // eax
  int Node; // ebx
  NTSTATUS v8; // eax
  unsigned __int16 Length; // di
  unsigned __int16 v11; // di
  wchar_t *Buffer; // r8
  wchar_t *v13; // rdx
  unsigned __int16 v14; // cx
  bool v15; // zf
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // rax
  wchar_t *v18; // rcx
  unsigned __int16 v19; // di
  int v20; // eax
  const UNICODE_STRING *v21; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING v24; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING String2a; // [rsp+58h] [rbp-A8h] BYREF
  PCUNICODE_STRING v26; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING Source; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v30[20]; // [rsp+C0h] [rbp-40h] BYREF
  int v31; // [rsp+170h] [rbp+70h] BYREF
  POBJECT_NAME_INFORMATION ObjectNameInformation; // [rsp+180h] [rbp+80h] BYREF
  HANDLE FileHandle; // [rsp+188h] [rbp+88h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  ObjectNameInformation = 0LL;
  Object = 0LL;
  IoStatusBlock = 0LL;
  v4 = 0LL;
  v31 = 0;
  v5 = 0LL;
  v26 = 0LL;
  String2a = 0LL;
  DestinationString = 0LL;
  v24 = 0LL;
  Source = 0LL;
  RtlInitUnicodeString(StringOut, 0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  RtlInitUnicodeString(&v24, 0LL);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = String2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x21u) >= 0 )
  {
    Object = 0LL;
    v6 = ObReferenceObjectByHandle(FileHandle, 0x80u, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    v4 = Object;
    Node = v6;
    if ( v6 >= 0 )
    {
      v8 = IoQueryFileDosDeviceName((PFILE_OBJECT)Object, &ObjectNameInformation);
      v5 = ObjectNameInformation;
      Node = v8;
      if ( v8 >= 0 )
        Node = RtlDuplicateUnicodeString(1u, &ObjectNameInformation->Name, StringOut);
    }
    goto LABEL_5;
  }
  if ( String2->Length >= 0x16u && RtlPrefixUnicodeString(&PiDrvDbSystemRootNt, String2, 1u) )
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
    Length = String2->Length;
    if ( String2->Length > 0x18u && String2->Buffer[11] == 92 )
    {
      v24.Buffer = String2->Buffer + 11;
      v11 = Length - 22;
LABEL_25:
      v24.Length = v11;
      v24.MaximumLength = v11 + 2;
      goto LABEL_28;
    }
  }
  else if ( String2->Length > 0x26u
         && RtlPrefixUnicodeString(&PiDrvDbDriverStoreNodesRoot, String2, 1u)
         && (Buffer = String2->Buffer, Buffer[18] == 92) )
  {
    v13 = Buffer + 19;
    v14 = 0;
    v15 = Buffer[19] == 92;
    String2a.Buffer = Buffer + 19;
    if ( !v15 )
    {
      do
      {
        if ( !v13[v14] )
          break;
        ++v14;
      }
      while ( v13[v14] != 92 );
    }
    v16 = 2 * v14;
    v17 = (unsigned __int64)v16 >> 1;
    String2a.Length = v16;
    String2a.MaximumLength = v16;
    v18 = &v13[v17];
    if ( *v18 == 92 )
    {
      v19 = String2->Length;
      v24.Buffer = &v13[v17];
      v11 = v19 - 2 * (v18 - Buffer);
      goto LABEL_25;
    }
  }
  else
  {
    RtlInitUnicodeString(&String2a, L"SYSTEM");
  }
  v11 = v24.Length;
LABEL_28:
  Node = PiDrvDbFindNode(&String2a, (__int64 *)&Object);
  if ( Node < 0 )
    goto LABEL_5;
  v20 = *((_DWORD *)Object + 16);
  if ( (v20 & 1) == 0 )
  {
    if ( (v20 & 8) == 0 )
    {
      Node = -1073741275;
      goto LABEL_5;
    }
    Node = PiDrvDbGetNodeSystemRoot((__int64)Object, &v26);
    if ( Node < 0 )
      goto LABEL_5;
    v21 = v26;
    DestinationString.MaximumLength = v26->Length + v11 + 2;
    DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(DestinationString.MaximumLength);
    if ( DestinationString.Buffer )
    {
      Node = RtlAppendUnicodeStringToString(&DestinationString, v21);
      if ( Node < 0 )
        goto LABEL_5;
      goto LABEL_42;
    }
LABEL_36:
    Node = -1073741670;
    goto LABEL_5;
  }
  RtlInitUnicodeString(&Source, L"C:\\Windows");
  DestinationString.MaximumLength = v11 + Source.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExpAllocateStringRoutine(DestinationString.MaximumLength);
  if ( !DestinationString.Buffer )
    goto LABEL_36;
  Node = RtlAppendUnicodeStringToString(&DestinationString, &Source);
  if ( Node < 0 )
    goto LABEL_5;
  if ( InitIsWinPEMode )
  {
    memset(v30, 0, 0x70uLL);
    LODWORD(v30[4]) = 0x4000000;
    LODWORD(v30[1]) = 292;
    v30[2] = L"InstRootDrive";
    v30[3] = &v31;
    Node = RtlpQueryRegistryValues(2LL, L"WinPE", v30, 0LL);
    if ( Node < 0 || (unsigned int)(v31 - 65) > 0x19 )
    {
      Node = 0;
      *DestinationString.Buffer = 88;
    }
    else
    {
      *DestinationString.Buffer = v31;
    }
  }
LABEL_42:
  if ( v11 <= 2u || (Node = RtlAppendUnicodeStringToString(&DestinationString, &v24), Node >= 0) )
  {
    *StringOut = DestinationString;
    RtlInitUnicodeString(&DestinationString, 0LL);
  }
LABEL_5:
  RtlFreeUnicodeString(&DestinationString);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Node;
}
