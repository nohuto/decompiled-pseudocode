/*
 * XREFs of ?GetSpriteFillColor@@YAKXZ @ 0x1C0046C98
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00C7AC8 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C0046F30 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0047358 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rdx
  ULONG64 v7; // r8
  int v8; // esi
  ULONG64 v9; // r14
  ULONG64 v10; // rcx
  _BYTE **v11; // rax
  int v12; // eax
  const unsigned __int16 *v13; // r8
  const unsigned __int16 *v14; // rcx
  ULONG ResultLength; // [rsp+30h] [rbp-2B8h] BYREF
  int v17; // [rsp+34h] [rbp-2B4h]
  int v18; // [rsp+38h] [rbp-2B0h]
  void *KeyHandle; // [rsp+40h] [rbp-2A8h] BYREF
  const unsigned __int16 *v20; // [rsp+48h] [rbp-2A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-298h] BYREF
  __int128 v22; // [rsp+60h] [rbp-288h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-278h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A8h] [rbp-240h] BYREF
  int v25; // [rsp+ACh] [rbp-23Ch]
  int v26; // [rsp+B0h] [rbp-238h]
  unsigned int v27; // [rsp+B4h] [rbp-234h]
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-228h] BYREF

  v0 = 0;
  ResultLength = 0;
  RtlStringCchCopyW(
    SourceString,
    0x104uLL,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  v22 = 0LL;
  v20 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1, v3, v4);
  ProcessPeb = PsGetProcessPeb(CurrentProcess);
  v7 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
  if ( v7 >= MmUserProbeAddress )
    v7 = MmUserProbeAddress;
  v8 = *(_DWORD *)v7;
  v17 = v8;
  LODWORD(v22) = v8;
  v9 = *(_QWORD *)(v7 + 8);
  *((_QWORD *)&v22 + 1) = v9;
  LOBYTE(ProcessPeb) = 1;
  if ( (v9 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v10 = v9 + (unsigned __int16)v8 + 2LL;
  v11 = (_BYTE **)MmUserProbeAddress;
  if ( v10 >= MmUserProbeAddress || (unsigned __int16)v8 > HIWORD(v17) )
    goto LABEL_13;
  if ( (v8 & 1) != 0 )
    goto LABEL_14;
  if ( v10 <= v9 )
  {
LABEL_13:
    if ( (v8 & 1) == 0 )
    {
LABEL_15:
      **v11 = 0;
      goto LABEL_8;
    }
LABEL_14:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, ProcessPeb, v7);
    v11 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_15;
  }
LABEL_8:
  v12 = (unsigned __int16)v8;
  v13 = (const unsigned __int16 *)(v9 + (unsigned __int16)v8);
  v20 = v13;
  while ( v12 )
  {
    v14 = v13 - 1;
    if ( *(v13 - 1) == 92 )
      break;
    --v13;
    v20 = v14;
    v12 -= 2;
  }
  v18 = RtlStringCchCatW(SourceString, 0x104uLL, v13);
  if ( v18 >= 0 )
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
      ResultLength = 0;
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && v25 == 4
        && v26 == 4 )
      {
        v0 = v27;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}
