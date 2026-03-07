__int64 __fastcall DpiGdoSetupGdiParameters(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v6; // rdi
  __int64 AdapterUniqueGUID; // rax
  int appended; // eax
  __int64 v9; // rbx
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  NTSTATUS v14; // eax
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v20; // eax
  ULONG Disposition; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v22; // [rsp+48h] [rbp-B8h] BYREF
  void *KeyHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Source; // [rsp+68h] [rbp-98h] BYREF
  HANDLE Handle; // [rsp+78h] [rbp-88h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  PVOID ValueData[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+D0h] [rbp-30h] BYREF
  struct _OBJECT_ATTRIBUTES v31; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[4]; // [rsp+110h] [rbp+10h] BYREF
  int v33; // [rsp+118h] [rbp+18h]
  __int16 v34; // [rsp+11Ch] [rbp+1Ch]

  v3 = *(_QWORD *)(a1 + 64);
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_QWORD *)SourceString = 0LL;
  v33 = 0;
  Source = 0LL;
  v34 = 0;
  v22 = 0LL;
  DestinationString = 0LL;
  Disposition = 0;
  *(_OWORD *)ValueData = 0LL;
  Handle = 0LL;
  Destination = 0LL;
  memset(&v31, 0, sizeof(v31));
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_BYTE *)(v6 + 2743) )
  {
    LODWORD(v9) = 0;
    goto LABEL_23;
  }
  if ( *(_BYTE *)(v6 + 480) )
  {
    appended = DpiCopyUnicodeString(&Source, (PCUNICODE_STRING)(*(_QWORD *)(v6 + 40) + 40LL));
  }
  else
  {
    AdapterUniqueGUID = DpiFdoGetAdapterUniqueGUID(*(_QWORD *)(v6 + 24));
    if ( !AdapterUniqueGUID )
    {
      v9 = -1073741823LL;
      goto LABEL_35;
    }
    appended = DpiAppendStringToString(
                 L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Video\\",
                 *(unsigned __int16 **)(AdapterUniqueGUID + 8),
                 &Source);
  }
  LODWORD(v9) = appended;
  if ( appended < 0 )
    goto LABEL_21;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 704;
  ObjectAttributes.ObjectName = &Source;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v10 = ZwCreateKey(&KeyHandle, 0xCu, &ObjectAttributes, 0, 0LL, 0, 0LL);
  v9 = v10;
  if ( v10 < 0 )
    goto LABEL_35;
  LODWORD(v9) = DpiGdoCreateServiceEntry(*(_QWORD *)(v6 + 40) + 40LL, KeyHandle);
  if ( (int)v9 < 0 )
    goto LABEL_21;
  if ( *(_BYTE *)(v6 + 480) )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    goto LABEL_13;
  }
  RtlStringCbPrintfW(SourceString, 0xEuLL, L"\\%04d", a3);
  RtlInitUnicodeString(&DestinationString, &SourceString[1]);
  ObjectAttributes.RootDirectory = KeyHandle;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&v22, 0xF003Fu, &ObjectAttributes) >= 0 )
  {
    v20 = ZwDeleteKey(v22);
    if ( v20 < 0 )
      WdLogSingleEntry1(3LL, v20);
  }
  v11 = ZwCreateKey(&v22, 0x20u, &ObjectAttributes, 0, 0LL, 3u, &Disposition);
  v9 = v11;
  if ( v11 < 0 )
  {
    if ( v11 == -1073741771 )
      goto LABEL_13;
LABEL_35:
    WdLogSingleEntry1(2LL, v9);
    goto LABEL_21;
  }
  if ( Disposition == 1 )
  {
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"SymbolicLinkValue");
    v12 = ZwSetValueKey(v22, &ValueName, 0, 6u, *(PVOID *)(v6 + 536), *(unsigned __int16 *)(v6 + 528));
    v9 = v12;
    if ( v12 < 0 )
      goto LABEL_35;
  }
LABEL_13:
  LODWORD(v9) = DpiAppendStringToString(Source.Buffer, SourceString, (PUNICODE_STRING)ValueData);
  if ( (int)v9 >= 0 )
  {
    v13 = RtlWriteRegistryValue(4u, L"VIDEO", *(PCWSTR *)(a2 + 8), 1u, ValueData[1], WORD1(ValueData[0]));
    v9 = v13;
    if ( v13 < 0 )
      goto LABEL_35;
    Destination.MaximumLength = Source.Length + 52;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(256LL, (unsigned __int16)(Source.Length + 52), 1953656900LL);
    if ( !Destination.Buffer )
      goto LABEL_35;
    v14 = RtlAppendUnicodeStringToString(&Destination, &Source);
    v9 = v14;
    if ( v14 < 0 )
      goto LABEL_35;
    v15 = RtlAppendUnicodeToString(&Destination, SourceString);
    v9 = v15;
    if ( v15 < 0 )
      goto LABEL_35;
    v16 = RtlAppendUnicodeToString(&Destination, L"\\VolatileSettings");
    v9 = v16;
    if ( v16 < 0 )
      goto LABEL_35;
    v31.ObjectName = &Destination;
    v31.Length = 48;
    v31.RootDirectory = 0LL;
    *(_OWORD *)&v31.SecurityDescriptor = 0LL;
    v31.Attributes = 576;
    v17 = ZwCreateKey(&Handle, 0xC0000000, &v31, 0, 0LL, 1u, 0LL);
    v9 = v17;
    if ( v17 < 0 )
      goto LABEL_35;
    v18 = RtlWriteRegistryValue(
            0,
            Destination.Buffer,
            L"{5b45201d-f2f2-4f3b-85bb-30ff1f953599}",
            3u,
            *(PVOID *)(v3 + 168),
            *(unsigned __int16 *)(v3 + 160));
    v9 = v18;
    if ( v18 < 0 )
      goto LABEL_35;
  }
LABEL_21:
  if ( Handle )
    ZwClose(Handle);
LABEL_23:
  RtlFreeUnicodeString(&Destination);
  RtlFreeUnicodeString((PUNICODE_STRING)ValueData);
  if ( v22 )
    ZwClose(v22);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  RtlFreeUnicodeString(&Source);
  return (unsigned int)v9;
}
