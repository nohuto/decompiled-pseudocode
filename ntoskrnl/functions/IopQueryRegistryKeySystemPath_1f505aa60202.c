__int64 __fastcall IopQueryRegistryKeySystemPath(HANDLE Handle, PUNICODE_STRING DestinationString)
{
  UNICODE_STRING *Pool2; // rsi
  NTSTATUS appended; // ebx
  unsigned int v6; // edi
  unsigned __int64 v7; // rdx
  unsigned __int16 v8; // cx
  unsigned __int16 v9; // di
  unsigned int v11; // edx
  UNICODE_STRING DestinationStringa; // [rsp+30h] [rbp-49h] BYREF
  UNICODE_STRING String1; // [rsp+40h] [rbp-39h] BYREF
  UNICODE_STRING String2; // [rsp+50h] [rbp-29h] BYREF
  UNICODE_STRING v15; // [rsp+60h] [rbp-19h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  ULONG ReturnLength; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE LinkHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&String2.Length = 917516LL;
  *(_QWORD *)&SourceString.Length = 1703960LL;
  String2.Buffer = L"System";
  *(_QWORD *)&v15.Length = 2621478LL;
  SourceString.Buffer = L"\\SystemRoot\\";
  v15.Buffer = L"\\DriverStore\\Nodes\\";
  LinkHandle = 0LL;
  String1 = 0LL;
  ReturnLength = 0;
  DestinationStringa = 0LL;
  memset(&ObjectAttributes, 0, 44);
  RtlInitUnicodeString(DestinationString, 0LL);
  RtlInitUnicodeString(&DestinationStringa, 0LL);
  RtlInitUnicodeString(&String1, 0LL);
  Pool2 = (UNICODE_STRING *)ExAllocatePool2(256LL, 4096LL, 538996553LL);
  if ( !Pool2 )
  {
    appended = -1073741670;
    goto LABEL_19;
  }
  appended = NtQueryObject(Handle, ObjectNameInformation, Pool2, 0x1000u, &ReturnLength);
  if ( appended >= 0 )
  {
    v6 = CmRegistryMachineName.Length + 2;
    if ( Pool2->Length < (unsigned __int16)(CmRegistryMachineName.Length + 2)
      || !RtlPrefixUnicodeString(&CmRegistryMachineName, Pool2, 1u)
      || (v7 = (unsigned __int64)&Pool2->Buffer[(unsigned __int64)v6 >> 1], *(_WORD *)(v7 - 2) != 92) )
    {
      appended = -1073741595;
      goto LABEL_18;
    }
    v8 = Pool2->Length - v6;
    String1.Buffer = &Pool2->Buffer[(unsigned __int64)v6 >> 1];
    String1.MaximumLength = v8;
    v9 = 0;
    String1.Length = 0;
    if ( v8 )
    {
      do
      {
        if ( *(_WORD *)(v7 + 2 * ((unsigned __int64)v9 >> 1)) == 92 )
          break;
        v9 += 2;
      }
      while ( v9 < v8 );
      String1.Length = v9;
    }
    if ( !RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      v11 = v9 + 42;
      if ( v11 > 0xFFFF )
      {
        appended = -2147483643;
        goto LABEL_18;
      }
      DestinationStringa.MaximumLength = v9 + 42;
      DestinationStringa.Length = 0;
      DestinationStringa.Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)v11, 538996553LL);
      if ( !DestinationStringa.Buffer )
        goto LABEL_20;
      RtlCopyUnicodeString(&DestinationStringa, &v15);
      appended = RtlAppendUnicodeStringToString(&DestinationStringa, &String1);
      if ( appended < 0 )
        goto LABEL_18;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationStringa;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      appended = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
      if ( appended < 0 )
      {
        DestinationStringa.Length = 0;
      }
      else
      {
        ZwClose(LinkHandle);
        DestinationStringa.Buffer[(unsigned __int64)DestinationStringa.Length >> 1] = 92;
        DestinationStringa.Length += 2;
        DestinationStringa.Buffer[(unsigned __int64)DestinationStringa.Length >> 1] = 0;
      }
    }
    if ( DestinationStringa.Length )
    {
LABEL_17:
      *DestinationString = DestinationStringa;
      RtlInitUnicodeString(&DestinationStringa, 0LL);
      goto LABEL_18;
    }
    if ( DestinationStringa.MaximumLength >= 0x1Au )
      goto LABEL_16;
    if ( DestinationStringa.Buffer )
      ExFreePoolWithTag(DestinationStringa.Buffer, 0);
    DestinationStringa.MaximumLength = 26;
    DestinationStringa.Buffer = (wchar_t *)ExAllocatePool2(256LL, 26LL, 538996553LL);
    if ( DestinationStringa.Buffer )
    {
LABEL_16:
      RtlCopyUnicodeString(&DestinationStringa, &SourceString);
      goto LABEL_17;
    }
LABEL_20:
    appended = -1073741670;
  }
LABEL_18:
  ExFreePoolWithTag(Pool2, 0);
LABEL_19:
  RtlFreeUnicodeString(&DestinationStringa);
  return (unsigned int)appended;
}
