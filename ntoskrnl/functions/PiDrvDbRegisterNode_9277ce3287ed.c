__int64 __fastcall PiDrvDbRegisterNode(PCWSTR Source, char a2, int a3)
{
  const WCHAR *v4; // rsi
  wchar_t *Pool2; // r14
  char v6; // r13
  int Node; // eax
  char *v9; // rdi
  int SymbolicLinkObject; // ebx
  unsigned __int64 v11; // rbx
  int v12; // r9d
  int v13; // esi
  int v14; // ecx
  __int64 v15; // rcx
  char *UnicodeSubstring; // rax
  unsigned __int16 i; // cx
  __int64 v19; // rcx
  int v20; // ecx
  int v21; // r9d
  int v22; // eax
  UNICODE_STRING StringIn; // [rsp+68h] [rbp-61h] BYREF
  int v24; // [rsp+78h] [rbp-51h] BYREF
  int v25; // [rsp+7Ch] [rbp-4Dh] BYREF
  PVOID P; // [rsp+80h] [rbp-49h] BYREF
  HANDLE Handle; // [rsp+88h] [rbp-41h] BYREF
  HANDLE DirectoryHandle; // [rsp+90h] [rbp-39h] BYREF
  HANDLE v29; // [rsp+98h] [rbp-31h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-19h] BYREF
  UNICODE_STRING v32; // [rsp+E0h] [rbp+17h] BYREF

  P = 0LL;
  DirectoryHandle = 0LL;
  v4 = Source;
  v29 = 0LL;
  Handle = 0LL;
  v25 = 0;
  v24 = 0;
  Pool2 = 0LL;
  v6 = 0;
  StringIn = 0LL;
  DestinationString = 0LL;
  v32 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(&DestinationString, 0LL);
  Node = PiDrvDbCreateNode(v4, (__int64)&P);
  v9 = (char *)P;
  SymbolicLinkObject = Node;
  if ( Node >= 0 )
  {
    if ( (*((_DWORD *)P + 16) & 1) != 0 )
    {
      v13 = a2 & 8;
    }
    else
    {
      v11 = *((unsigned __int16 *)P + 16) + 32LL;
      Pool2 = (wchar_t *)ExAllocatePool2(256LL, v11, 1650749520LL);
      if ( !Pool2 )
      {
        SymbolicLinkObject = -1073741670;
        goto LABEL_11;
      }
      SymbolicLinkObject = RtlStringCchPrintfW(Pool2, v11 >> 1, L"%wZ\\%ws", v9 + 32, L"DriverDatabase");
      if ( SymbolicLinkObject < 0 )
        goto LABEL_11;
      v13 = a2 & 8;
      v14 = (v13 != 0 ? 2 : 0) | 1;
      if ( (a2 & 0x40) == 0 )
        v14 = (a2 & 8) != 0 ? 2 : 0;
      SymbolicLinkObject = DrvDbRegisterDatabase(v14, (_DWORD)Source, a3, v12, (__int64)Pool2, v14);
      if ( SymbolicLinkObject < 0 )
        goto LABEL_11;
      v6 = 1;
    }
    if ( !v13 )
    {
LABEL_10:
      PiDrvDbDriverStoreNodesUpdated();
      v9 = 0LL;
LABEL_11:
      v4 = Source;
      goto LABEL_12;
    }
    SymbolicLinkObject = PnpSetObjectProperty(
                           *(__int64 *)&PiPnpRtlCtx,
                           *((_QWORD *)v9 + 3),
                           7u,
                           *((_QWORD *)v9 + 9),
                           0LL,
                           (__int64)DEVPKEY_DriverDatabase_FilePath,
                           18,
                           *((_QWORD *)v9 + 7),
                           (unsigned int)*((unsigned __int16 *)v9 + 24) + 2,
                           0);
    if ( SymbolicLinkObject < 0 )
      goto LABEL_11;
    StringIn.Buffer = (wchar_t *)*((_QWORD *)v9 + 7);
    RtlInitUnicodeString(&v32, L"\\System32\\config\\");
    UnicodeSubstring = RtlFindUnicodeSubstring((unsigned __int16 *)v9 + 24);
    if ( UnicodeSubstring )
    {
      i = 2 * ((__int64)(unsigned int)((_DWORD)UnicodeSubstring - *((_DWORD *)v9 + 14)) >> 1);
    }
    else
    {
      StringIn.Length = *((_WORD *)v9 + 24);
      for ( i = StringIn.Length; i > 2u; StringIn.Length = i )
      {
        if ( StringIn.Buffer[((unsigned __int64)i >> 1) - 1] == 92 )
          break;
        i -= 2;
      }
      if ( i <= 2u || StringIn.Buffer[((unsigned __int64)i >> 1) - 1] != 92 )
      {
LABEL_34:
        StringIn.MaximumLength = i;
        if ( (a2 & 0x10) != 0 )
        {
          RtlInitUnicodeString(&v32, L"\\DriverStore\\Nodes");
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = &v32;
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Length = 48;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          SymbolicLinkObject = ZwOpenDirectoryObject(&DirectoryHandle, 0xF000Fu, &ObjectAttributes);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_11;
          ObjectAttributes.RootDirectory = DirectoryHandle;
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)(v9 + 16);
          ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
          ObjectAttributes.Attributes = 592;
          ObjectAttributes.SecurityQualityOfService = 0LL;
          SymbolicLinkObject = ZwCreateSymbolicLinkObject((__int64)&v29, 983041LL);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_11;
        }
        if ( (unsigned int)PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *((_QWORD *)v9 + 3),
                             7LL,
                             *((_QWORD *)v9 + 9),
                             0LL,
                             (__int64)DEVPKEY_DriverDatabase_SystemPath,
                             (__int64)&v25,
                             0LL,
                             0,
                             (__int64)&v24,
                             0) == -1073741275 )
        {
          SymbolicLinkObject = RtlDuplicateUnicodeString(1u, &StringIn, &DestinationString);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_11;
          SymbolicLinkObject = PnpSetObjectProperty(
                                 *(__int64 *)&PiPnpRtlCtx,
                                 *((_QWORD *)v9 + 3),
                                 7u,
                                 *((_QWORD *)v9 + 9),
                                 0LL,
                                 (__int64)DEVPKEY_DriverDatabase_SystemPath,
                                 18,
                                 (__int64)DestinationString.Buffer,
                                 (unsigned int)DestinationString.Length + 2,
                                 0);
          if ( SymbolicLinkObject < 0 )
            goto LABEL_11;
        }
        v19 = 0LL;
        if ( *(_QWORD *)&PiPnpRtlCtx )
          v19 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL);
        SymbolicLinkObject = SysCtxRegOpenKey(v19, 2147483650LL, *((_QWORD *)v9 + 3), 0, 0x2000000u, (__int64)&Handle);
        if ( SymbolicLinkObject < 0 )
          goto LABEL_11;
        v22 = PnpCtxRegisterMachineNode(v20, *((_QWORD *)v9 + 3), 3, v21, (__int64)Handle);
        SymbolicLinkObject = v22;
        if ( v22 == 0x40000000 )
        {
          SymbolicLinkObject = 0;
        }
        else if ( v22 < 0 )
        {
          goto LABEL_11;
        }
        goto LABEL_10;
      }
      i -= 2;
    }
    StringIn.Length = i;
    goto LABEL_34;
  }
LABEL_12:
  if ( Handle )
    ZwClose(Handle);
  if ( v29 )
    ZwClose(v29);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
  RtlFreeUnicodeString(&DestinationString);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( v9 )
  {
    if ( v6 )
      DrvDbUnregisterDatabase(v15, v4);
    PiDrvDbDestroyNode(v9);
  }
  return (unsigned int)SymbolicLinkObject;
}
