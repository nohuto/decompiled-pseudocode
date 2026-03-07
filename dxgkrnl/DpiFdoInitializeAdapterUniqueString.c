__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *Pool2; // r12
  WCHAR *v3; // r13
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  unsigned __int16 *v9; // rax
  unsigned __int16 *v10; // r14
  __int64 v12; // rdx
  __int64 v13; // rcx
  NTSTATUS v14; // eax
  __int64 v15; // rdx
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  NTSTATUS v18; // eax
  struct _DEVICE_OBJECT *v19; // rcx
  int DevicePropertyString; // eax
  void *v21; // r15
  __int64 v22; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-69h]
  ULONG Lengtha[2]; // [rsp+20h] [rbp-69h]
  PULONG ResultLength; // [rsp+28h] [rbp-61h]
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-49h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-39h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-19h] BYREF
  ULONG v30; // [rsp+F0h] [rbp+67h] BYREF
  ULONG v31; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v32; // [rsp+100h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+108h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  v30 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  DestinationString = 0LL;
  Pool2 = 0LL;
  v31 = 0;
  v3 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  LODWORD(v5) = v4;
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VideoID");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v30) == -1073741789 )
    {
      WdLogSingleEntry1(4LL, -1073741789LL);
      Pool2 = (WCHAR *)ExAllocatePool2(256LL, v30, 1953656900LL);
      if ( !Pool2 )
        goto LABEL_25;
      v6 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, v30, &v30);
      v5 = v6;
      if ( v6 < 0 )
        goto LABEL_33;
      if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4768), Pool2 + 6) )
      {
LABEL_25:
        v12 = -1073741801LL;
        LODWORD(v5) = -1073741801;
        v13 = 6LL;
        goto LABEL_28;
      }
      v7 = RtlGUIDFromString((PCUNICODE_STRING)(v1 + 4768), (GUID *)(v1 + 4800));
    }
    else
    {
      WdLogSingleEntry1(4LL, 0LL);
      v14 = ExUuidCreate((UUID *)(v1 + 4800));
      LODWORD(v5) = v14;
      if ( v14 < 0 )
      {
        v15 = v14;
LABEL_47:
        WdLogSingleEntry1(2LL, v15);
        goto LABEL_29;
      }
      v16 = RtlStringFromGUID((const GUID *const)(v1 + 4800), (PUNICODE_STRING)(v1 + 4768));
      v5 = v16;
      if ( v16 < 0 )
      {
LABEL_33:
        v12 = v5;
LABEL_27:
        v13 = 2LL;
        goto LABEL_28;
      }
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4768), (PCUNICODE_STRING)(v1 + 4768), 0);
      v7 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, *(PVOID *)(v1 + 4776), *(unsigned __int16 *)(v1 + 4770));
    }
    v5 = v7;
    if ( v7 < 0 )
      goto LABEL_33;
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"AOCID");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &v31) != -1073741789 )
    {
      WdLogSingleEntry1(4LL, 0LL);
      v17 = ExUuidCreate((UUID *)(v1 + 4816));
      v5 = v17;
      if ( v17 < 0 )
        goto LABEL_33;
      GuidString = 0LL;
      v18 = RtlStringFromGUID((const GUID *const)(v1 + 4816), &GuidString);
      v5 = v18;
      if ( v18 < 0 )
        goto LABEL_33;
      RtlUpcaseUnicodeString(&GuidString, &GuidString, 0);
      v5 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, GuidString.Buffer, GuidString.MaximumLength);
      RtlFreeUnicodeString(&GuidString);
      if ( (v5 & 0x80000000) != 0LL )
        goto LABEL_33;
LABEL_13:
      if ( !*(_BYTE *)(v1 + 1160) )
      {
        v9 = (unsigned __int16 *)ExAllocatePool2(256LL, 74LL, 1953656900LL);
        v10 = v9;
        if ( v9 )
        {
          LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
          Length[0] = *(_DWORD *)(v1 + 1128);
          LODWORD(v5) = RtlStringCbPrintfW(
                          v9,
                          0x4AuLL,
                          L"%04X_%04X_%08X_%08X",
                          *(unsigned int *)(v1 + 1124),
                          *(_QWORD *)Length,
                          ResultLength,
                          *(_DWORD *)(v1 + 1148));
          goto LABEL_16;
        }
        v12 = -1073741801LL;
        LODWORD(v5) = -1073741801;
        goto LABEL_27;
      }
      v19 = *(struct _DEVICE_OBJECT **)(v1 + 152);
      *(_QWORD *)&GuidString.Length = 0LL;
      DevicePropertyString = DpiGetDevicePropertyString(v19, DevicePropertyHardwareID, (__int64)&v32);
      v5 = DevicePropertyString;
      if ( DevicePropertyString >= 0 )
      {
        v21 = *(void **)&GuidString.Length;
        v22 = -1LL;
        do
          ++v22;
        while ( *(_WORD *)(*(_QWORD *)&GuidString.Length + 2 * v22) );
        v5 = (unsigned int)(2 * v22 + 40);
        v10 = (unsigned __int16 *)ExAllocatePool2(256LL, v5, 1953656900LL);
        if ( v10 )
        {
          LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
          Lengtha[0] = *(_DWORD *)(v1 + 1128);
          LODWORD(v5) = RtlStringCbPrintfW(
                          v10,
                          v5,
                          L"%04X_%04X_%08X_%ls",
                          *(unsigned int *)(v1 + 1124),
                          *(_QWORD *)Lengtha,
                          ResultLength,
                          v21);
          if ( v21 )
            ExFreePoolWithTag(v21, 0);
LABEL_16:
          RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4784), v10);
          MonitorUnifyCCDMonitorString(v1 + 4784);
          if ( (v5 & 0x80000000) == 0LL )
            goto LABEL_17;
          goto LABEL_29;
        }
        v15 = -1073741801LL;
        LODWORD(v5) = -1073741801;
        goto LABEL_47;
      }
      goto LABEL_33;
    }
    WdLogSingleEntry1(4LL, -1073741789LL);
    v3 = (WCHAR *)ExAllocatePool2(256LL, v31, 1953656900LL);
    if ( v3 )
    {
      v8 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v3, v31, &v31);
      v5 = v8;
      if ( v8 < 0 )
        goto LABEL_33;
      GuidString = 0LL;
      if ( RtlCreateUnicodeString(&GuidString, v3 + 6) )
      {
        v5 = RtlGUIDFromString(&GuidString, (GUID *)(v1 + 4816));
        RtlFreeUnicodeString(&GuidString);
        if ( (v5 & 0x80000000) != 0LL )
          goto LABEL_33;
        goto LABEL_13;
      }
    }
    goto LABEL_25;
  }
  v12 = v4;
  v13 = 2LL;
LABEL_28:
  WdLogSingleEntry1(v13, v12);
LABEL_29:
  if ( *(_QWORD *)(v1 + 4792) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4784));
    *(_QWORD *)(v1 + 4792) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4776) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4768));
    *(_QWORD *)(v1 + 4776) = 0LL;
  }
LABEL_17:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x74727044u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
