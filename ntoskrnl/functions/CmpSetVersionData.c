void CmpSetVersionData()
{
  wchar_t **v0; // rdi
  void *v1; // rsi
  __int16 v2; // cx
  const WCHAR *v3; // rdx
  NTSTATUS Key; // ebx
  UNICODE_STRING *v5; // rax
  NTSTATUS v6; // ebx
  NTSTATUS v7; // ebx
  __int64 v8; // rax
  PVOID *ServerSiloGlobals; // rax
  HANDLE KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  int Data; // [rsp+50h] [rbp-B8h] BYREF
  UNICODE_STRING Data_8; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v14; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  STRING SourceString; // [rsp+B0h] [rbp-58h] BYREF
  char DstBuf[128]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v18[256]; // [rsp+148h] [rbp+40h] BYREF

  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SourceString = 0LL;
  DestinationString = 0LL;
  LODWORD(v14) = 0;
  Data_8 = 0LL;
  Data = 0;
  v0 = &VersionDataKeys;
  v1 = (void *)CmpHiveRootSecurityDescriptor();
  if ( VersionDataKeys )
  {
    do
    {
      v2 = *((_WORD *)v0 + 8);
      if ( v2 == -31132 || (unsigned int)PsWow64IsMachineSupported(v2) )
      {
        RtlInitUnicodeString(&DestinationString, *v0);
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        ObjectAttributes.ObjectName = 0LL;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
        ObjectAttributes.SecurityQualityOfService = v1;
        v14 = 0LL;
        if ( ZwCreateKey(
               &KeyHandle,
               4u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL) < 0 )
          goto LABEL_24;
        v3 = v0[1];
        if ( v3 )
        {
          RtlInitUnicodeString(&DestinationString, v3);
          ObjectAttributes.ObjectName = (PUNICODE_STRING)KeyHandle;
          LODWORD(ObjectAttributes.RootDirectory) = 48;
          LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
          *(_QWORD *)&ObjectAttributes.Attributes = &DestinationString;
          ObjectAttributes.SecurityQualityOfService = v1;
          v14 = 0LL;
          Key = ZwCreateKey(
                  (PHANDLE)&ObjectAttributes,
                  2u,
                  (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
                  0,
                  (PUNICODE_STRING)&nullclass,
                  0,
                  0LL);
          ZwClose(KeyHandle);
          if ( Key < 0 )
            goto LABEL_24;
          v5 = *(UNICODE_STRING **)&ObjectAttributes.Length;
          KeyHandle = *(HANDLE *)&ObjectAttributes.Length;
        }
        else
        {
          v5 = (UNICODE_STRING *)KeyHandle;
        }
        ObjectAttributes.ObjectName = v5;
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        *(_QWORD *)&ObjectAttributes.Attributes = &CmpWindowsNtString;
        ObjectAttributes.SecurityQualityOfService = v1;
        v14 = 0LL;
        v6 = ZwCreateKey(
               (PHANDLE)&ObjectAttributes,
               2u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL);
        ZwClose(KeyHandle);
        if ( v6 < 0 )
          goto LABEL_24;
        ObjectAttributes.ObjectName = *(PUNICODE_STRING *)&ObjectAttributes.Length;
        *(_QWORD *)&ObjectAttributes.Attributes = &CmpCurrentVersionString;
        LODWORD(ObjectAttributes.RootDirectory) = 48;
        LODWORD(ObjectAttributes.SecurityDescriptor) = 576;
        ObjectAttributes.SecurityQualityOfService = v1;
        v14 = 0LL;
        v7 = ZwCreateKey(
               &KeyHandle,
               3u,
               (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory,
               0,
               (PUNICODE_STRING)&nullclass,
               0,
               0LL);
        ZwClose(*(HANDLE *)&ObjectAttributes.Length);
        if ( v7 < 0 )
          goto LABEL_24;
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpCurrentVersionString,
          0,
          1u,
          CmVersionString.Buffer,
          CmVersionString.Length + 2);
        Data = 10;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMajorVersionString, 0, 4u, &Data, 4u);
        Data = 0;
        ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentMinorVersionString, 0, 4u, &Data, 4u);
        Data = 0;
        if ( CmpEditionVersion && *(_DWORD *)(CmpEditionVersion + 8) )
          CmpRestampVersion(KeyHandle);
        sprintf_s(DstBuf, 0x80uLL, "%s %s", "Multiprocessor", "Free");
        RtlInitAnsiString(&SourceString, DstBuf);
        *(_DWORD *)&Data_8.Length = 0x1000000;
        Data_8.Buffer = (wchar_t *)v18;
        if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) >= 0 )
        {
          ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCurrentTypeString, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
          if ( CmCSDVersionString.Length )
          {
            ZwSetValueKey(
              KeyHandle,
              (PUNICODE_STRING)&CmpCsdVersionString,
              0,
              1u,
              CmCSDVersionString.Buffer,
              CmCSDVersionString.Length + 2);
            if ( CmCSDVersionString.Buffer )
              ExFreePool(CmCSDVersionString.Buffer);
            RtlInitUnicodeString(&CmCSDVersionString, 0LL);
          }
          else
          {
            ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdVersionString);
          }
        }
        if ( CmNtSpBuildNumber )
        {
          sprintf_s(DstBuf, 0x80uLL, "%u", CmNtSpBuildNumber);
          RtlInitAnsiString(&SourceString, DstBuf);
          *(_DWORD *)&Data_8.Length = 0x1000000;
          Data_8.Buffer = (wchar_t *)v18;
          if ( RtlAnsiStringToUnicodeString(&Data_8, &SourceString, 0) < 0 )
            ZwSetValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString, 0, 1u, Data_8.Buffer, Data_8.Length + 2);
        }
        else
        {
          ZwDeleteValueKey(KeyHandle, (PUNICODE_STRING)&CmpCsdBuildNumberString);
        }
        v8 = PdcCreateWatchdogAroundClientCall();
        ServerSiloGlobals = (PVOID *)PsGetServerSiloGlobals(v8);
        ZwSetValueKey(
          KeyHandle,
          (PUNICODE_STRING)&CmpSystemRootString,
          0,
          1u,
          ServerSiloGlobals[159],
          *((unsigned __int16 *)ServerSiloGlobals + 632) + 2);
        ZwClose(KeyHandle);
      }
      v0 += 3;
    }
    while ( *v0 );
  }
  if ( CmCSDVersionString.Buffer )
    ExFreePool(CmCSDVersionString.Buffer);
  RtlInitUnicodeString(&CmCSDVersionString, 0LL);
LABEL_24:
  ExFreePoolWithTag(v1, 0);
}
