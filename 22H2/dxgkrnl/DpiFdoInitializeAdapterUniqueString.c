/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1C018B1A8
 * Callers:
 *     DpiFdoInitializeFdo @ 0x1C018DAEC (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000D300 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     DpiGetDevicePropertyString @ 0x1C018AC18 (DpiGetDevicePropertyString.c)
 *     MonitorUnifyCCDMonitorString @ 0x1C018B554 (MonitorUnifyCCDMonitorString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *PoolWithTag; // r12
  WCHAR *v3; // r13
  NTSTATUS v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  SIZE_T v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  NTSTATUS v20; // eax
  NTSTATUS v21; // eax
  UNICODE_STRING *p_SourceString; // rcx
  wchar_t *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  WCHAR *v26; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  __int64 v34; // rax
  NTSTATUS v35; // eax
  NTSTATUS v36; // eax
  struct _DEVICE_OBJECT *v37; // rcx
  int DevicePropertyString; // eax
  void *v39; // r15
  __int64 v40; // rax
  __int64 v41; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-79h]
  ULONG Lengtha[2]; // [rsp+20h] [rbp-79h]
  PULONG ResultLength; // [rsp+28h] [rbp-71h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-49h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING GuidString; // [rsp+70h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-19h] BYREF
  ULONG v50; // [rsp+100h] [rbp+67h] BYREF
  ULONG v51; // [rsp+108h] [rbp+6Fh] BYREF
  __int64 v52; // [rsp+110h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+118h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  v50 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  DestinationString = 0LL;
  PoolWithTag = 0LL;
  v51 = 0;
  v3 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v7 = v4;
  if ( v4 < 0 )
    goto LABEL_25;
  RtlInitUnicodeString(&DestinationString, L"VideoID");
  if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v50) == -1073741789 )
  {
    v10 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v10 + 24) = -1073741789LL;
    WdLogEvent5_WdEvent(v10);
    PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v50, 0x74727044u);
    if ( !PoolWithTag )
      goto LABEL_26;
    v15 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, PoolWithTag, v50, &v50);
    v7 = v15;
    if ( v15 < 0 )
      goto LABEL_25;
    if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4824), PoolWithTag + 6) )
      goto LABEL_26;
    v16 = RtlGUIDFromString((PCUNICODE_STRING)(v1 + 4824), (GUID *)(v1 + 4856));
    v7 = v16;
    if ( v16 < 0 )
      goto LABEL_25;
  }
  else
  {
    v30 = WdLogNewEntry5_WdEvent(v9, v8);
    *(_QWORD *)(v30 + 24) = 0LL;
    WdLogEvent5_WdEvent(v30);
    v31 = ExUuidCreate((UUID *)(v1 + 4856));
    v7 = v31;
    if ( v31 < 0 )
      goto LABEL_25;
    v32 = RtlStringFromGUID((const GUID *const)(v1 + 4856), (PUNICODE_STRING)(v1 + 4824));
    v7 = v32;
    if ( v32 < 0 )
      goto LABEL_25;
    RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4824), (PCUNICODE_STRING)(v1 + 4824), 0);
    v33 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, *(PVOID *)(v1 + 4832), *(unsigned __int16 *)(v1 + 4826));
    v7 = v33;
    if ( v33 < 0 )
      goto LABEL_25;
  }
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, L"AOCID");
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &v51) != -1073741789 )
  {
    v34 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v34 + 24) = 0LL;
    WdLogEvent5_WdEvent(v34);
    v35 = ExUuidCreate((UUID *)(v1 + 4872));
    v7 = v35;
    if ( v35 < 0 )
      goto LABEL_25;
    SourceString = 0LL;
    v36 = RtlStringFromGUID((const GUID *const)(v1 + 4872), &SourceString);
    v7 = v36;
    if ( v36 < 0 )
      goto LABEL_25;
    RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
    v21 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, SourceString.Buffer, SourceString.MaximumLength);
    p_SourceString = &SourceString;
    goto LABEL_12;
  }
  v19 = WdLogNewEntry5_WdEvent(v18, v17);
  *(_QWORD *)(v19 + 24) = -1073741789LL;
  WdLogEvent5_WdEvent(v19);
  v3 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v51, 0x74727044u);
  if ( v3 )
  {
    v20 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v3, v51, &v51);
    v7 = v20;
    if ( v20 < 0 )
      goto LABEL_25;
    GuidString = 0LL;
    if ( RtlCreateUnicodeString(&GuidString, v3 + 6) )
    {
      v21 = RtlGUIDFromString(&GuidString, (GUID *)(v1 + 4872));
      p_SourceString = &GuidString;
LABEL_12:
      v7 = v21;
      RtlFreeUnicodeString(p_SourceString);
      if ( (v7 & 0x80000000) == 0LL )
      {
        if ( !*(_BYTE *)(v1 + 1159) )
        {
          v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x4AuLL, 0x74727044u);
          v26 = v23;
          if ( v23 )
          {
            LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
            Length[0] = *(_DWORD *)(v1 + 1128);
            LODWORD(v7) = RtlStringCbPrintfW(
                            v23,
                            0x4AuLL,
                            L"%04X_%04X_%08X_%08X",
                            *(unsigned int *)(v1 + 1124),
                            *(_QWORD *)Length,
                            ResultLength,
                            *(_DWORD *)(v1 + 1148));
LABEL_16:
            RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4840), v26);
            MonitorUnifyCCDMonitorString(v1 + 4840);
            goto LABEL_17;
          }
LABEL_42:
          LODWORD(v7) = -1073741801;
          v41 = WdLogNewEntry5_WdError(v25, v24);
          *(_QWORD *)(v41 + 24) = -1073741801LL;
          WdLogEvent5_WdError(v41);
          goto LABEL_27;
        }
        v37 = *(struct _DEVICE_OBJECT **)(v1 + 152);
        *(_QWORD *)&SourceString.Length = 0LL;
        DevicePropertyString = DpiGetDevicePropertyString(v37, DevicePropertyHardwareID, PagedPool, &SourceString, &v52);
        v7 = DevicePropertyString;
        if ( DevicePropertyString >= 0 )
        {
          v39 = *(void **)&SourceString.Length;
          v40 = -1LL;
          do
            ++v40;
          while ( *(_WORD *)(*(_QWORD *)&SourceString.Length + 2 * v40) );
          v7 = (unsigned int)(2 * v40 + 40);
          v26 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v7, 0x74727044u);
          if ( v26 )
          {
            LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
            Lengtha[0] = *(_DWORD *)(v1 + 1128);
            LODWORD(v7) = RtlStringCbPrintfW(
                            v26,
                            v7,
                            L"%04X_%04X_%08X_%ls",
                            *(unsigned int *)(v1 + 1124),
                            *(_QWORD *)Lengtha,
                            ResultLength,
                            v39);
            if ( v39 )
              ExFreePoolWithTag(v39, 0);
            goto LABEL_16;
          }
          goto LABEL_42;
        }
      }
LABEL_25:
      v28 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v28 + 24) = v7;
      WdLogEvent5_WdError(v28);
LABEL_17:
      if ( (v7 & 0x80000000) == 0LL )
        goto LABEL_18;
      goto LABEL_27;
    }
  }
LABEL_26:
  LODWORD(v7) = -1073741801;
  v29 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
  *(_QWORD *)(v29 + 24) = -1073741801LL;
  WdLogEvent5_WdLowResource(v29);
LABEL_27:
  if ( *(_QWORD *)(v1 + 4848) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4840));
    *(_QWORD *)(v1 + 4848) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4832) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4824));
    *(_QWORD *)(v1 + 4832) = 0LL;
  }
LABEL_18:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x74727044u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v7;
}
