__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentProcess; // rax
  ULONG64 v6; // r8
  int v7; // ecx
  WCHAR *v8; // rdx
  ULONG64 v9; // r8
  int v10; // eax
  const unsigned __int16 *v11; // r8
  const unsigned __int16 *v12; // rcx
  int v13; // eax
  void *KeyHandle; // [rsp+30h] [rbp-2A8h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-2A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-298h] BYREF
  const unsigned __int16 *v18; // [rsp+50h] [rbp-288h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-280h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-248h] BYREF
  int v21; // [rsp+94h] [rbp-244h]
  int v22; // [rsp+98h] [rbp-240h]
  unsigned int v23; // [rsp+9Ch] [rbp-23Ch]
  WCHAR SourceString[264]; // [rsp+B0h] [rbp-228h] BYREF

  v0 = 0;
  RtlStringCchCopyW(
    SourceString,
    0x104uLL,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  v18 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1, v3, v4);
  v6 = *(_QWORD *)(PsGetProcessPeb(CurrentProcess) + 32) + 96LL;
  if ( v6 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v7 = *(_DWORD *)v6;
  LODWORD(KeyHandle) = v7;
  *(_DWORD *)&DestinationString.Length = v7;
  v8 = *(WCHAR **)(v6 + 8);
  DestinationString.Buffer = v8;
  if ( ((unsigned __int8)v8 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = (ULONG64)v8 + (unsigned __int16)v7 + 2;
  if ( v9 <= (unsigned __int64)v8 || v9 >= MmUserProbeAddress )
    ExRaiseAccessViolation();
  if ( (unsigned __int16)v7 > WORD1(KeyHandle) )
  {
    if ( (v7 & 1) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (v7 & 1) != 0 )
  {
LABEL_15:
    LODWORD(KeyHandle) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 379LL);
LABEL_16:
    ExRaiseAccessViolation();
  }
  v10 = (unsigned __int16)v7;
  v11 = (WCHAR *)((char *)v8 + (unsigned __int16)v7);
  v18 = v11;
  while ( v10 )
  {
    v12 = v11 - 1;
    if ( *(v11 - 1) == 92 )
      break;
    --v11;
    v18 = v12;
    v10 -= 2;
  }
  v13 = RtlStringCchCatW(SourceString, 0x104uLL, v11);
  ResultLength[1] = v13;
  if ( v13 >= 0 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength[0] = 0;
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             ResultLength) >= 0
        && v21 == 4
        && v22 == 4 )
      {
        v0 = v23;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}
