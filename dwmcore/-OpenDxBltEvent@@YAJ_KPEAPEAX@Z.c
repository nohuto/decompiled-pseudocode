__int64 __fastcall OpenDxBltEvent(__int64 a1, void **a2)
{
  BOOLEAN v4; // si
  HRESULT v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  int v8; // r9d
  HANDLE v10; // rcx
  NTSTATUS v11; // ebx
  NTSTATUS v12; // eax
  int v13; // ebx
  HANDLE v14; // rax
  unsigned int RestartScan; // [rsp+20h] [rbp-E0h]
  HANDLE hObject; // [rsp+40h] [rbp-C0h] BYREF
  ULONG Context; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE Buffer[560]; // [rsp+90h] [rbp-70h] BYREF
  WCHAR SourceString[264]; // [rsp+2C0h] [rbp+1C0h] BYREF

  hObject = 0LL;
  Context = 0;
  v4 = 1;
  v5 = StringCchPrintfW(SourceString, 0x104uLL, (size_t *)L"%s%I64x", L"DwmDxBltEvent_", a1);
  v7 = v5;
  if ( v5 >= 0 )
  {
    while ( 1 )
    {
      v14 = OpenEventW(2u, 0, SourceString);
      if ( v14 )
      {
        *a2 = v14;
        goto LABEL_5;
      }
      v10 = hObject;
      if ( !hObject )
      {
        v5 = StringCchPrintfW(
               SourceString,
               0x104uLL,
               (size_t *)L"\\Sessions\\%u\\AppContainerNamedObjects",
               NtCurrentPeb()->SessionId);
        v7 = v5;
        if ( v5 < 0 )
        {
          RestartScan = 123;
          goto LABEL_3;
        }
        RtlInitUnicodeString(&DestinationString, SourceString);
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v11 = NtOpenDirectoryObject(&hObject, 1u, &ObjectAttributes);
        if ( v11 < 0 )
        {
          v7 = v11 | 0x10000000;
          RestartScan = 132;
          goto LABEL_18;
        }
        v10 = hObject;
      }
      v12 = NtQueryDirectoryObject(v10, Buffer, 0x228u, 1u, v4, &Context, 0LL);
      v13 = v12;
      if ( v12 == -2147483622 )
      {
        v13 = -1073741772;
LABEL_22:
        v7 = v13 | 0x10000000;
        RestartScan = 151;
LABEL_18:
        v8 = v7;
        goto LABEL_4;
      }
      if ( v12 < 0 )
        goto LABEL_22;
      v4 = 0;
      v5 = StringCchPrintfW(
             SourceString,
             0x104uLL,
             (size_t *)L"AppContainerNamedObjects\\%wZ\\%s%I64x",
             Buffer,
             L"DwmDxBltEvent_",
             a1);
      v7 = v5;
      if ( v5 < 0 )
      {
        RestartScan = 163;
        goto LABEL_3;
      }
    }
  }
  RestartScan = 93;
LABEL_3:
  v8 = v5;
LABEL_4:
  MilInstrumentationCheckHR_MaybeFailFast(v6, &dword_1803B6290, 3u, v8, RestartScan, 0LL);
LABEL_5:
  if ( hObject )
    CloseHandle(hObject);
  return v7;
}
